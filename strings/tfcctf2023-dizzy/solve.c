#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>


#define MAX_CIPHER_SIZE 100UL
#define DELIMITER " "

// Check input and output buffers
#define CHECK_BUFFERS(input, output) \
    do { \
        assert((input) != NULL && "Invalid input buffer."); \
        assert((output) != NULL && "Invalid output buffer."); \
    } while (0)


// A cipher item (letter+index. e.g. T72, _1, {6)
typedef struct {
    char letter;
    int index;
} cipher_item_t;

// Extract an array of cipher items from a cipher text
void parse_cipher(char* cipher, cipher_item_t* cipher_arr)
{
    CHECK_BUFFERS(cipher, cipher_arr);

    char* token = strtok(cipher, DELIMITER);
    for (size_t i = 0; token != NULL && i < MAX_CIPHER_SIZE; i++) {
        cipher_arr[i] = (cipher_item_t) {
            .letter = token[0],
            .index = atoi(token + 1)
        };
        token = strtok(NULL, DELIMITER);
    }
}

// Find flag from cipher and store it in flag
void find_flag(char* cipher, char* flag)
{
    CHECK_BUFFERS(cipher, flag);

    cipher_item_t cipher_arr[MAX_CIPHER_SIZE] = { 0 };

    parse_cipher(cipher, cipher_arr);

    for (size_t i = 0; i < MAX_CIPHER_SIZE; i++) {
        if (cipher_arr[i].letter == '\0')
            break;
        flag[cipher_arr[i].index] = cipher_arr[i].letter;
    }
}


// ----<main>------------------------------------------------------------------

int main(void)
{
    char cipher[] = "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317"
                    " y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13"
                    " _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24";

    char flag[MAX_CIPHER_SIZE] = { 0 };

    find_flag(cipher, flag);

    printf("%s\n", flag);

    return 0;
}

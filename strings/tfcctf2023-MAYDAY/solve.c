#include <stdio.h>
#include <string.h>
#include <stdbool.h>


// Why 6? Longest specials: Three+\0, Seven+\0, Eight+\0
#define SPECIALS_MAX_KEY 6UL

typedef struct {
    const char k[SPECIALS_MAX_KEY];
    char v;
} specials_t;

#define SPECIALS_SIZE (sizeof(specials) / sizeof(specials[0]))

const specials_t specials[] = {
    { .k = "One",   .v = '1' },
    { .k = "Two",   .v = '2' },
    { .k = "Three", .v = '3' },
    { .k = "Four",  .v = '4' },
    { .k = "Five",  .v = '5' },
    { .k = "Six",   .v = '6' },
    { .k = "Seven", .v = '7' },
    { .k = "Eight", .v = '8' },
    { .k = "Nine",  .v = '9' },
    { .k = "Zero",  .v = '0' },
    { .k = "Dash",  .v = '-' }
};


#define DELIMITER " "


static inline bool find_special_token(const char* token, char* output) {
    for (size_t i = 0; i < SPECIALS_SIZE; i++) {
        if (strncmp(token, specials[i].k, SPECIALS_MAX_KEY) == 0) {
            *output = specials[i].v;
            return true;
        }
    }
    return false;
}


// ----<main>------------------------------------------------------------------

int main(void)
{
    char response[] = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash"
                      " Yankee Oscar Uniform Dash Sierra One November Kilo"
                      " India November Golf Dash Four Bravo Zero Uniform Seven";

    char* token = strtok(response, DELIMITER);
    while (token != NULL) {
        char special_token = { 0 };

        if (find_special_token(token, &special_token)) {
            putchar(special_token);
        } else {
            putchar(token[0]);
        }

        token = strtok(NULL, DELIMITER);
    }
    putchar('\n');

    return 0;
}

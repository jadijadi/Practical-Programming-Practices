#include <stdio.h>
#include <string.h>

// * count is global variable for counting
// how many valid number between 111-999.
int count = 0;

// * number is global variable for
// check how many numbers in s string
char numbers[9] = {
    '1', '2', '3',
    '4', '5', '6',
    '7', '8', '9'};

int strCount(char *s, char target)
{
    int c = 0;
    for (int i = 0; i < 3; i++)
        if (s[i] == target)
            c++;
    return c;
}

// * plus one to string number
void Inc(char *s, int i)
{
    if (i < 0)
        return;

    s[i] = s[i] + 1;
    if (s[i] > '9')
    {
        s[i] = '0';
        i--;
        Inc(s, i);
    }
}

void HowMany(char *s)
{
    if (!strcmp(s, "999"))
        return;

    if (strCount(s, '0') > 0)
    {
        Inc(s, strlen(s) - 1);
        return HowMany(s);
    }

    for (int i = 0; i < 10; i++)
    {
        char v = numbers[i];
        int c = strCount(s, v);
        if (c == 2)
        {
            count++;
            break;
        }
        else if (c > 2)
            break;
    }

    Inc(s, strlen(s) - 1);
    HowMany(s);
}

int main(void)
{
    char s[4] = "111";
    HowMany(s);
    printf("Count: %d\n", count);
    return 0;
}

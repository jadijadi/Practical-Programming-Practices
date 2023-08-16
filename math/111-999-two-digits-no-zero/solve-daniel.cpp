#include <iostream>

int main()
{
    int count = 0;
    for (int i = 111; i <= 999; i++)
    {
        int num[3], value = i; // Assign the current value of i to 'value'

        // Fill array
        for (int j = 2; j >= 0; j--)
        {
            num[j] = value % 10;
            value /= 10;
        }

        // Checking
        if (num[1] != 0 && num[2] != 0)
        {
            if ((num[0] == num[1] && num[2] != num[0]) ||
                (num[0] == num[2] && num[1] != num[0]) ||
                (num[1] == num[2] && num[0] != num[1]))
            {
                count++;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}
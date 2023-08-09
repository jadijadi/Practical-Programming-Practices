#include <stdio.h>


int main(void)
{
    unsigned num_combination = 0;

    /*

    Below, two implementations are provided.
    Switch between the two by flipping the 1 (in #if 1) to 0, and vice versa.

    EXPLANATION
    -----------

    #if, #else, #endif: preprocessor[1] directive[2]

    [1]: gets executed before the compilation process
         (https://cs50.harvard.edu/ap/2021/curriculum/x/references/compiling.pdf)
    [2]: tells (directs) the compiler what to do

    To observe the preprocessed code in each case, issue the following command:

        grep -v '#include' solve.c | cc -P -E -C - -o solve-preprocessed.c

            grep -v ...: Omit (-v) '#incldue' -> less noisy output
            -C: preserve the comment during preprocess stage
            -E: stop at the end of preprocessing stage
            -P: don't show linemarkers -> less noisy output
            -: stdin (read from stdin instead of a file)

        $ man grep
        $ man <your compiler>

    */

#if 1
    // Omiting 0 in digits
    for (unsigned hundreds = 1; hundreds < 10; hundreds++) {
        for (unsigned tens = 1; tens < 10; tens++) {
            for (unsigned ones = 1; ones < 10; ones++) {
                // Skip if all three digits are the same
                if (ones == tens && ones == hundreds) {
                    continue;
                }

                // Skip if all three digits are different
                if (ones != tens
                    && ones != hundreds
                    && tens != hundreds) {
                    continue;
                }

                num_combination++;
            }
        }
    }
#else
    // Starting from 111 as each 3-digit number prior to it contains a 0
    for (unsigned n = 100; n < 1000; n++) {
        unsigned ones = n % 10;
        unsigned tens = (unsigned)((n % 100) / 10);
        unsigned hundreds = (unsigned)(n / 100);

        // Skip if at least one digit is zero
        if (ones == 0 || tens == 0 || hundreds == 0) {
            continue;
        }

        // Skip if all three digits are the same
        if (ones == tens && ones == hundreds) {
            continue;
        }

        // Skip if all three digits are different
        if (ones != tens
            && ones != hundreds
            && tens != hundreds) {
            continue;
        }

        num_combination++;
    }
#endif

    printf("%d\n", num_combination);

    return 0;
}

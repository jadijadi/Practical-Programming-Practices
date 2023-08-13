import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

public class Solve {
    public static void main(String[] args) {
        int low = 111;
        int high = 999;

        int count = 0;
        // check all 3-digits numbers from 111 to 999
        for (int num = low; num <= high; num++) {
            Integer[] digits = getDigits(num);
            // if digits array length is 0, this means our number includes 0, so we don't check this number and continue
            if (digits.length == 0) {
                continue;
            }

            // convert digits array into set, set data structure removes all duplicates digits
            // so if we want only 2 digits same, then our set size must be 2
            Set<Integer> digitSet = new HashSet<>(Arrays.asList(digits));
            if (digitSet.size() == 2) {
                count++;
            }
        }

        System.out.println(count);
    }

    // create array including number digits
    public static Integer[] getDigits(int num) {
        Integer[] digits = new Integer[3];

        for (int i = 0; i < 3; i++) {
            int digit = num % 10;
            // if number contains zero, return an empty array
            if (digit == 0) {
                return new Integer[0];
            }
            digits[i] = digit;
            num /= 10;
        }

        return digits;
    }
}

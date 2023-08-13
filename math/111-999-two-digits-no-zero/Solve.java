import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

public class Solve {
    public static void main(String[] args) {
        int low = 111;
        int high = 999;

        int count = 0;
        for (int num = low; num <= high; num++) {
            Integer[] digits = getDigits(num);
            if (digits.length == 0) {
                continue;
            }

            Set<Integer> digitSet = new HashSet<>(Arrays.asList(digits));
            if (digitSet.size() == 2) {
                count++;
            }
        }

        System.out.println(count);
    }

    public static Integer[] getDigits(int num) {
        Integer[] digits = new Integer[3];

        for (int i = 0; i < 3; i++) {
            int digit = num % 10;
            if (digit == 0) {
                return new Integer[0];
            }
            digits[i] = digit;
            num /= 10;
        }

        return digits;
    }
}

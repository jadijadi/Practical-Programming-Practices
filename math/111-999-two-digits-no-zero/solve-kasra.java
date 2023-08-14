import java.util.HashSet;

public class NumberChecker {
    // Function to check if a number satisfies the given conditions
    public static boolean check(int num) {
        // Create a HashSet to store unique digits
        HashSet<Character> digitSet = new HashSet<>();
        
        // Convert the number to a string and iterate through its digits
        char[] digits = Integer.toString(num).toCharArray();
        for (char digit : digits) {
            digitSet.add(digit);
        }
        
        // Check if the digit set doesn't contain '0' and has a size of 2
        if (!digitSet.contains('0') && digitSet.size() == 2) {
            return true; // Conditions are satisfied
        }
        
        return false; // Conditions are not satisfied
    }

    public static void main(String[] args) {
        int counter = 0; // Initialize a counter to keep track of valid numbers

        // Loop through numbers from 111 to 999 (3-digit numbers)
        for (int i = 111; i < 1000; i++) {
            if (check(i)) {
                counter++; // Increment counter if the number meets the conditions
            }
        }

        // Print the final count of valid numbers
        System.out.println("Total Numbers: " + counter);
    }
}

package main

import (
	"fmt"
	"strconv"
)

// This function checks if a number has exactly two unique digits.
func hasTwoUniqueDigits(number int) bool {
	digitSet := make(map[int]bool)

	// Convert the number to a string to loop through its digits.
	numStr := strconv.Itoa(number)
	for _, digitRune := range numStr {
		digit, _ := strconv.Atoi(string(digitRune))
		digitSet[digit] = true
	}

	// If the number has exactly 2 unique digits, return true. Otherwise, return false.
	return len(digitSet) == 2
}

// This function counts how many numbers meet the conditions.
func countNumbersWithTwoUniqueDigits() int {
	// Start with zero, we haven't found any numbers yet.
	count := 0

	// Go through all numbers from 100 to 999.
	for num := 100; num < 1000; num++ {
		// Check if the number doesn't contain '0' and has only two unique digits.
		if !containsZero(num) && hasTwoUniqueDigits(num) {
			// If both conditions are met, increase the count by 1.
			count++
		}
	}

	// After checking all numbers, return the final count.
	return count
}

// This function checks if a number contains the digit '0'.
func containsZero(number int) bool {
	numStr := strconv.Itoa(number)
	for _, digitRune := range numStr {
		if digitRune == '0' {
			return true
		}
	}
	return false
}

func main() {
	// Call the counting function and store the result in the 'counter' variable.
	counter := countNumbersWithTwoUniqueDigits()

	// Display the total count of numbers meeting the conditions.
	fmt.Println(counter)
}

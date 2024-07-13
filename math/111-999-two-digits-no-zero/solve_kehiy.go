package main

import (
	"fmt"
	"strconv"
)

func hasConditions(i int) bool {
	digits := make(map[string]bool)

	for j := 0; j < 3; j++ {
		digit := i % 10
		digits[strconv.Itoa(digit)] = true
		i /= 10
	}

	return !(digits["0"] || len(digits) != 2)
}

func main() {
	count := 0
	for i := 100; i < 999; i++ {
		if hasConditions(i) {
			count++
		}
	}
	fmt.Println(count)
}

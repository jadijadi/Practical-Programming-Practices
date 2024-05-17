package main

import (
	"fmt"
	"strings"
)

// The input string containing a series of words
const INPUT = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"

func main() {
	answer := ""
	// map for convert numbers
	numbers := map[string]string{
		"Zero":  "0",
		"One":   "1",
		"Tow":   "2",
		"Three": "3",
		"Four":  "4",
		"Five":  "5",
		"Six":   "6",
		"Seven": "7",
		"Eight": "8",
		"Nine":  "9",
	}

	// Split the string to get words
	parts := strings.Split(INPUT, " ")
	/*
		create answer
			if number is exist in map append numeric value
			if not exist in map just append first character
	*/
	for i := 0; i < len(parts); i++ {
		value, contain := numbers[parts[i]]
		if contain {
			answer += value
		} else {
			answer += string(parts[i][0])
		}
	}
	fmt.Println(answer)
}

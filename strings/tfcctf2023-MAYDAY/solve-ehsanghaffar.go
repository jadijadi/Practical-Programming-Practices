package main

import (
	"fmt"
	"strings"
)

func main() {
	// The input string containing a series of words
	str := "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"

	// Split the string into an array of words using a space as the separator
	words := strings.Split(str, " ")

	// Define a map for special word replacements
	specials := map[string]interface{}{
		"One":   1,
		"Two":   2,
		"Three": 3,
		"Four":  4,
		"Five":  5,
		"Six":   6,
		"Seven": 7,
		"Eight": 8,
		"Nine":  9,
		"Zero":  0,
		"Dash":  "-",
	}

	// Loop through each word in the array
	for _, word := range words {
		var replacement interface{}
		// Check if the word exists in the map, if yes, use its value as replacement
		// Otherwise, use the first character of the word as a default replacement
		if val, ok := specials[word]; ok {
			replacement = val
		} else {
			replacement = string(word[0])
		}
		fmt.Println(replacement)
	}
}

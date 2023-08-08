package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"
	words := strings.Split(str, " ")

	specials := map[string]string{
		"One":   "1", "Two": "2", "Three": "3", "Four": "4",
		"Five":  "5", "Six": "6", "Seven": "7", "Eight": "8",
		"Nine":  "9", "Zero": "0", "Dash": "-",
	}

	for i, w := range words {
		value, exists := specials[w]
		if exists {
			fmt.Print(value)
		} else {
			fmt.Printf("%c", w[0])
		}
		if i != len(words)-1 {
			fmt.Print("")
		}
	}

	fmt.Println()
}
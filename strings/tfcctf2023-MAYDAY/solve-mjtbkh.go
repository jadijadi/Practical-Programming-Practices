package main

import (
	"fmt"
	"strings"
)

// A mapping of specific flags which need to be replaced by the original NATO alphabet communicated on radio
var flags = map[string]string{
	"Zero":  "0",
	"One":   "1",
	"Two":   "2",
	"Three": "3",
	"Four":  "4",
	"Five":  "5",
	"Six":   "6",
	"Seven": "7",
	"Eight": "8",
	"Nine":  "9",
	"Dash":  "-",
}


// This function replaces flags with the corresponding value
func replacer(word string) string {
	for flag, v := range flags {
		if flag == word {
			return v
		}
	}
  
	return word
}

// This function calls replacer on original message and then replaces NATO alphabets with regular alphabets
func decode(message string) string {
  
  // Split NATO alphabets into array elements
	messageArray := strings.Split(message, " ")
  
	var decodedString []string
  
	for _, word := range messageArray {
		decodedString = append(decodedString, strings.Split(replacer(word), "")[0])
	}

	return strings.Join(decodedString, "")
}

func main() {
  // Original message using NATO alphabets
	message := "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"

	fmt.Printf("%s", decode(message))
}

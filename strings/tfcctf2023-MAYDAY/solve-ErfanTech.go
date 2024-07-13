package main

import (
	"fmt"
	"strings"
)

// numberMappings contains the mapping of words to their corresponding numerical values or dashes
var numberMappings = map[string]string{
	"Zero":   "0",
	"One":    "1",
	"Two":    "2",
	"Three":  "3",
	"Four":   "4",
	"Five":   "5",
	"Six":    "6",
	"Seven":  "7",
	"Eight":  "8",
	"Nine":   "9",
	"Dash":   "-",
}

// decodeWord decodes a single word into its numerical value or dash
func decodeWord(word string) string {
	// Check if the word is present in the numberMappings, if yes, return the corresponding value
	if value, present := numberMappings[word]; present {
		return value
	}
	// If the word is not found, return the first character of the word as a fallback
	return string(word[0])
}

// decodeMessage decodes an entire encoded message by processing each word
func decodeMessage(encodedMessage string) string {
	// Split the encoded message into individual words
	words := strings.Fields(encodedMessage)
	decodedMessage := ""

	// Process each word and decode it using decodeWord function
	for _, word := range words {
		decodedWord := decodeWord(word)
		decodedMessage += decodedWord
	}

	return decodedMessage
}

func main() {
	// Encoded message to be decoded
	encodedMessage := "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"
	
	// Decode the message using decodeMessage function
	decodedMessage := decodeMessage(encodedMessage)
	
	// Print the decoded message
	fmt.Println(decodedMessage)
}

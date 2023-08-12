package main

import (
	"fmt"
	"strconv"
	"strings"
)

func main() {
	// base string 
	str := "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"
	
	// a map for special characters with key type str and value type int
	specials := map[string]int{
		"One": 1, "Two": 2, "Three": 3, "Four": 4,
		"Five": 5, "Six": 6, "Seven": 7, "Eight": 8,
		"Nine": 9, "Zero": 0,
	}
	// creating an iterable list form original list
	words := strings.Split(str, " ")
	// defining a result string 
	var result string

	// looping in words list and ignoring the index with _
	for _,w := range words{
		// sice we cant check for dash character we check it here
		if w == "Dash"{
			result += "-"
		}else if special, ok := specials[w]; ok { // this line will check if a word is in 
			result += strconv.Itoa(special)		  // specials map or not if its ok it will add the value
		} else {
			result += string(w[0])	// if the word is not Dash or in specials will add the first letter
		}
	}
	fmt.Println(result)

}

package main

import (
	"fmt"
	"strings"
)

func main() {
	txt := "Whiskey Hotel Four Tango Dash" +
		" Alpha Romeo Three Dash Yankee Oscar" +
		" Uniform Dash Sierra One November Kilo" +
		" India November Golf Dash Four Bravo Zero Uniform Seven"

	keyStor := map[string]string{
		"One": "1", "Two": "2", "Three": "3",
		"Four": "4", "Five": "5", "Six": "6",
		"Seven": "7", "Eight": "8", "Nine": "9",
		"Zero": "0", "Dash": "-",
	}

	// split with space
	words := strings.Fields(txt)

	fmt.Print("TFCCTF{")
	for _, w := range words {
		if v, ok := keyStor[w]; ok {
			fmt.Print(v)
		} else {
			fmt.Printf("%c", w[0])
		}
	}
	fmt.Println("}")
}

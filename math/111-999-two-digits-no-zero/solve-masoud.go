package main

import (
	"fmt"
	"strconv"
	"strings"
)

func main() {
	counter := 0
	for i := 111; i < 999; i++ {
		str := strconv.Itoa(i)
		if !strings.Contains(str, "0") {
			if (str[0] == str[1] && str[0] != str[2]) ||
				(str[0] == str[2] && str[0] != str[1]) ||
				(str[1] == str[2] && str[0] != str[1]) {
				counter++
			}
		}
	}
	fmt.Println("result is ", counter)
}

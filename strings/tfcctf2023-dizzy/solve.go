package main

import (
	"fmt"
	"strconv"
	"strings"
)

func printFromArray(answer []string) {
	fmt.Println(strings.Join(answer, ""))
}

func main() {
	str := "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24"

	words := strings.Split(str, " ")

	answer := make([]string, 100)
	for i := range answer {
		answer[i] = "*"
	}

	for _, w := range words {
		c := string(w[0])
		i, err := strconv.Atoi(w[1:])
		if err != nil {
			fmt.Printf("Failed to convert %s to int: %v\n", w[1:], err)
			continue
		}
		answer[i] = c
	}

	fmt.Println("found the answer!")
	printFromArray(answer)
}

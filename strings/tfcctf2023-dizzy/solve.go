package main

import (
	"fmt"
	"strconv"
	"strings"
)

var hash string = "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24"

func main() {
	words := strings.Split(hash, " ")
	answer := make([]string, 1)
	for i := 0; i < 100; i++ {
		answer = append(answer, "*")
	}
	
	for _, w := range words {
		c := w[0]
		i, _ := strconv.Atoi(w[1:])
		answer[i] = string(c)
	}

	result := strings.Join(answer, "")
	fmt.Println(result)
}
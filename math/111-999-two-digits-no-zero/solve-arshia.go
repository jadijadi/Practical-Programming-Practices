package main

import (
	"fmt"
)

func main() {
	count := 0
	for i:=112; i < 1000; i++ {
		if hasConditions(i){
			count++
		}
	}
	fmt.Println(count)
}

func hasConditions(num int) bool {
	digitSet := make(map[int]bool)// in golang there is no Set data structure so we use a hash-map
	for i:=0; i<3; i++{
		digit := num % 10 // adding digits to hash-map (Set)
		num = num / 10
		digitSet[digit] = true
	}
	for k := range digitSet{ // looping in hash-map (Set) to check conditions
		if k == 0 || len(digitSet) != 2{
			return false
		}
	}
	return true
	
}

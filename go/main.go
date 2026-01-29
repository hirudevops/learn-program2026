package main

import "fmt"

func calculateAge(birthYear int) {
	age := 2025 - birthYear
	fmt.Println("You are", age, "years old")
}

func main() {

	calculateAge(1995)

}

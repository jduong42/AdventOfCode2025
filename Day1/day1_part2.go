/* Day 1: Elves have no time to decorate the Christmas tree, so we need to collect stars and finish decorating it ourselves.
I am not familiar with Golang, and I asked Gemini for syntax help, but I figured out the logic on my own. There are comments
in the code to explain what for example scanner does lol, but some were obvious like strconv is for string conversion.

In part 2, I had to ask Gemini to break down the task into more understandable steps, because I was struggling to figure out.
*/

package main

import (
	"fmt"
	"os"
	"strconv"
	"bufio"
)

func parseRotation(rotation string) (direction byte, distance int, err error) {
	direction = rotation[0]
	distance_in_string := rotation[1:]
	distance, err = strconv.Atoi(distance_in_string)

	return
}

func main() {
	d_pos := 50
	zero_count := 0
	
	file, err := os.Open("day1_input.txt")
	if err != nil {
		fmt.Println("Error opening file:", err)
		return
	}
	defer file.Close()

	scanner := bufio.NewScanner(file)

	for scanner.Scan() {
		line := scanner.Text()
		direction, distance, err := parseRotation(line)
		if err != nil {
			fmt.Println("Error in parsing rotation:", line, err)
		}

		const dial_size = 100

		if direction == 'L' {
			distance_to_zero := d_pos

			// Added this check to handle the case when d_pos is already at zero, it was missing from the original solution attempt.
			if distance_to_zero == 0 {
				distance_to_zero = dial_size
			}
			if distance >= distance_to_zero {
				zero_count++
				distance_remaining := distance - distance_to_zero
				zero_count += distance_remaining / dial_size
			}
			d_pos = (d_pos - distance)
			d_pos = (d_pos % dial_size + dial_size) % dial_size
		} else if direction == 'R' {
			distance_to_zero := dial_size - d_pos

			if distance >= distance_to_zero {
				zero_count++
				distance_remaining := distance - distance_to_zero
				zero_count += distance_remaining / dial_size
			}
			d_pos = (d_pos + distance) % dial_size
		}
	} 

	if err := scanner.Err(); err != nil {
		fmt.Println("Error reading file:", err)
	}

	fmt.Println("The password is:", zero_count)
}
package main

import (
	"os"
	"bufio"
	"fmt"
	"strconv"
)

func main() {
	var sc = bufio.NewScanner(os.Stdin)
	var s string

	if sc.Scan() {
		s = sc.Text()
	}

	for i := 0; i < len(s); i++ {
		if !(s[i] >= 0x30 && s[i] <= 0x39) {
			fmt.Println("error\n")
			return
		}
	}

	i, _ := strconv.Atoi(s)
	fmt.Println(i*2)		
}
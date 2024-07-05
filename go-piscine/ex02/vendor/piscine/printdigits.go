package piscine 

import "ft"

func PrintDigits(){
  for i := 0; i <= 9; i++{
    ft.PrintRune(rune('0' + i))
  }
  ft.PrintRune('\n')
}

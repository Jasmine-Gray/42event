package piscine

func UltimateDivMod(a *int, b *int) {
	num1 := *a
	num2 := *b
	
	*a = num1 / num2
	*b = num1 % num2
}

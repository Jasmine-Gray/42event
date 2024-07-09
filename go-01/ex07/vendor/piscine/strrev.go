package piscine

func StrLen(s []rune) int {
  count := 0
  for range s{
    count++
  }
  return (count)
}

func StrRev(s string) string {
	runes := []rune(s)
	for i, j := 0, StrLen(runes)-1; i < j; i, j = i+1, j-1 {
		runes[i], runes[j] = runes[j], runes[i]
	}
	return string(runes)
}

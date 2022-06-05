package codewars

import "strings"

func ToJadenCase(str string) string {
 res := ""
 for i := 0; i < len(str); i++{
   if i == 0 {
     res += strings.ToUpper(string(str[i]))
     continue
   }
   if str[i] != ' ' {
     res += string(str[i])
   } else {
     res += string(str[i])
     res += string(strings.ToUpper(string(str[i + 1])))
     i++
   }
 } 
  return res
  
}
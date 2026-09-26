/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.


Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include <stdio.h>
int main()
{
   char c;
   scanf(" %c",&c);
   if(c>='a' && c<='z')
   {
      printf("Lowercase Alphabet");
   }
   else if(c>='A' && c<='Z')
   {
      printf("Uppercase Alphabet");
   }
   else if(c>='0' && c<='9')
   {
      printf("Digit");
   }
   else 
   {
      printf("Special character");
   }
   return 0;
}
/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day08_Q15.c -o Day08_Q15 } ; if ($?) { .\Day08_Q15 }
A
Uppercase Alphabet
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day08_Q15.c -o Day08_Q15 } ; if ($?) { .\Day08_Q15 }
a
Lowercase Alphabet
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day08_Q15.c -o Day08_Q15 } ; if ($?) { .\Day08_Q15 }
3
Digit
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day08_Q15.c -o Day08_Q15 } ; if ($?) { .\Day08_Q15 }
#
Special character
PS D:\100 days of code> 

*/
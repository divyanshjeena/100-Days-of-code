/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.


Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>
int main()
{
 char c;
 scanf("%c",&c);
 if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
 {
    printf("Vowel");
 }
 else 
 {
    printf("Consonant");
 }
 return 0;
}
/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day07_Q14.c -o Day07_Q14 } ; if ($?) { .\Day07_Q14 }
a
Vowel
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day07_Q14.c -o Day07_Q14 } ; if ($?) { .\Day07_Q14 }
b
Consonant
PS D:\100 days of code> 

*/
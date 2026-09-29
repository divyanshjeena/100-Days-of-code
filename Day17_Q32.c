/*Q32: Write a program to check if a number is a palindrome.


Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not Palindrome

Input 3:
1331
Output 3:
Palindrome

*/

#include <stdio.h>
int main()
{
    int n, original, digit, reverse = 0;

    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(original == reverse)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day16_Q32.c -o Day16_Q32 } ; if ($?) { .\Day16_Q32 }
121
Palindrome
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day16_Q32.c -o Day16_Q32 } ; if ($?) { .\Day16_Q32 }
123
Not Palindrome
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day16_Q32.c -o Day16_Q32 } ; if ($?) { .\Day16_Q32 }
1331
Palindrome
PS D:\100 days of code>

*/
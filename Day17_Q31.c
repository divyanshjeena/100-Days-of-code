/*Q31: Write a program to take a number as input and print its equivalent binary representation.


Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
5
Output 2:
101

Input 3:
8
Output 3:
1000

*/

#include <stdio.h>
int main()
{
    int n, binary = 0, place = 1, remainder;

    scanf("%d", &n);

    while(n != 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }

    printf("%d", binary);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day16_Q31.c -o Day16_Q31 } ; if ($?) { .\Day16_Q31 }
10
1010
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day16_Q31.c -o Day16_Q31 } ; if ($?) { .\Day16_Q31 }
5
101
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day16_Q31.c -o Day16_Q31 } ; if ($?) { .\Day16_Q31 }
8
1000
PS D:\100 days of code>

*/
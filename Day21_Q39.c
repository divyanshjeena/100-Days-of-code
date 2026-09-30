/*Q39: Write a program to find the product of odd digits of a number.


Sample Test Cases:
Input 1:
12345
Output 1:
15

Input 2:
1357
Output 2:
105

Input 3:
2463
Output 3:
3

*/

#include <stdio.h>
int main()
{
    int n, digit, product = 1;

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;

        if(digit % 2 != 0)
        {
            product = product * digit;
        }

        n = n / 10;
    }

    printf("%d", product);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day20_Q39.c -o Day20_Q39 } ; if ($?) { .\Day20_Q39 }
12345
15
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day20_Q39.c -o Day20_Q39 } ; if ($?) { .\Day20_Q39 }
1357
105
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day20_Q39.c -o Day20_Q39 } ; if ($?) { .\Day20_Q39 }
2463
3
PS D:\100 days of code>

*/
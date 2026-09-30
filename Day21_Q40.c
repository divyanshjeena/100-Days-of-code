/*Q40: Write a program to find the 1's complement of a binary number and print it.


Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
11001
Output 2:
00110

Input 3:
1001
Output 3:
0110

*/

#include <stdio.h>
int main()
{
    int n, digit, complement = 0, place = 1;

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;

        if(digit == 0)
        {
            digit = 1;
        }
        else
        {
            digit = 0;
        }

        complement = complement + digit * place;
        place = place * 10;
        n = n / 10;
    }

    printf("%0*d", place / 10 == 1 ? 1 : 0, complement);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day20_Q40.c -o Day20_Q40 } ; if ($?) { .\Day20_Q40 }
1010
0101
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day20_Q40.c -o Day20_Q40 } ; if ($?) { .\Day20_Q40 }
11001
00110
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day20_Q40.c -o Day20_Q40 } ; if ($?) { .\Day20_Q40 }
1001
0110
PS D:\100 days of code>

*/
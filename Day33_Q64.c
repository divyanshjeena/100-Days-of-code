/*Q64: Write a program to find the digit that occurs the most times in an integer number.


Sample Test Cases:
Input 1:
122333
Output 1:
3

Input 2:
555122
Output 2:
5

Input 3:
9877772
Output 3:
7

*/

#include <stdio.h>
int main()
{
    int n, digit, max = 0, result = 0;
    int count[10] = {0};

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(int i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day32_Q64.c -o Day32_Q64 } ; if ($?) { .\Day32_Q64 }
122333
3
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day32_Q64.c -o Day32_Q64 } ; if ($?) { .\Day32_Q64 }
555122
5
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day32_Q64.c -o Day32_Q64 } ; if ($?) { .\Day32_Q64 }
9877772
7
PS D:\100 days of code>

*/
/*Q37: Write a program to find the LCM of two numbers.


Sample Test Cases:
Input 1:
12 18
Output 1:
36

Input 2:
20 30
Output 2:
60

Input 3:
7 13
Output 3:
91

*/

#include <stdio.h>
int main()
{
    int a, b, max;

    scanf("%d%d", &a, &b);

    if(a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    while(1)
    {
        if(max % a == 0 && max % b == 0)
        {
            printf("%d", max);
            break;
        }

        max++;
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day19_Q37.c -o Day19_Q37 } ; if ($?) { .\Day19_Q37 }
12 18
36
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day19_Q37.c -o Day19_Q37 } ; if ($?) { .\Day19_Q37 }
20 30
60
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day19_Q37.c -o Day19_Q37 } ; if ($?) { .\Day19_Q37 }
7 13
91
PS D:\100 days of code>

*/
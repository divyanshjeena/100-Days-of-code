/*Q7: Write a program to swap two numbers without using a third variable.


Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d", a, b);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day04_Q7.c -o Day04_Q7 } ; if ($?) { .\Day04_Q7 }
10 20
After swap: 20 10
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day04_Q7.c -o Day04_Q7 } ; if ($?) { .\Day04_Q7 }
7 14
After swap: 14 7
PS D:\100 days of code> 

*/
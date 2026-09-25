/*Q6: Write a program to swap two numbers using a third variable.


Show Sample Test Cases
Input 1:
3 5
Output 1:
After swap = 5 3

Input 2:
-1 1
Output 2:
After swap = 1 -1







*/
#include <stdio.h>

int main()
{
    int a, b, temp;

    scanf("%d%d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d", a, b);

    return 0;
}
/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day03_Q6.c -o Day03_Q6 } ; if ($?) { .\Day03_Q6 }
3 5
After swap: 5 3
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day03_Q6.c -o Day03_Q6 } ; if ($?) { .\Day03_Q6 }
-1 1
After swap: 1 -1
PS D:\100 days of code> 

*/
/*Q16: Write a program to input three numbers and find the largest among them using if–else.


Show Sample Test Cases
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if(a >= b && a >= c)
    {
        printf("Largest is %d", a);
    }
    else if(b >= a && b >= c)
    {
        printf("Largest is %d", b);
    }
    else
    {
        printf("Largest is %d", c);
    }

    return 0;
}
/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day08_Q16.c -o Day08_Q16 } ; if ($?) { .\Day08_Q16 }
3 7 5
Largest is 7
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day08_Q16.c -o Day08_Q16 } ; if ($?) { .\Day08_Q16 }
-1 -5 0
Largest is 0
PS D:\100 days of code> 

*/
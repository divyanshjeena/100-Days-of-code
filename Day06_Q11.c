/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.


Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is even",n);
    }
    else
    {
        printf("%d is odd",n);
    }
    return 0;
}
/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day06_Q11.c -o Day06_Q11 } ; if ($?) { .\Day06_Q11 }
7
7 is odd
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day06_Q11.c -o Day06_Q11 } ; if ($?) { .\Day06_Q11 }
12
12 is even
PS D:\100 days of code> 

*/
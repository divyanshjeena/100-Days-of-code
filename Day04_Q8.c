/*Q8: Write a program to find and display the sum of the first n natural numbers.


Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>
int main()
{
    int n,s=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum=%d",s);
    return 0;
}
/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day04_Q8.c -o Day04_Q8 } ; if ($?) { .\Day04_Q8 }
5
Sum=15
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day04_Q8.c -o Day04_Q8 } ; if ($?) { .\Day04_Q8 }
10
Sum=55
PS D:\100 days of code> 

*/
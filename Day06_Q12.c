/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.


Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>
    int main()
    {
     int n;
     scanf("%d",&n);
     if(n==0)
     {
        printf("Number is Zero");
     }
     else
     {
        if(n>0)
        {
            printf("Number is Positive");
        }
        else 
        {
            printf("Number is Negative");
        }
     }
     return 0;
    }
/*
    
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day06_Q12.c -o Day06_Q12 } ; if ($?) { .\Day06_Q12 }
-5
Number is Negative
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day06_Q12.c -o Day06_Q12 } ; if ($?) { .\Day06_Q12 }
0
Number is Zero
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day06_Q12.c -o Day06_Q12 } ; if ($?) { .\Day06_Q12 }
10
Number is Positive
PS D:\100 days of code> 
    
*/
/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.


Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if((n%4==0 && n%100!=0) || n%400==0)
    {
      printf("Leap year");
    }
    else 
    {
        printf("Not a leap year");
    }
    return 0;
}
/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day07_Q13.c -o Day07_Q13 } ; if ($?) { .\Day07_Q13 }
2020
Leap year
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day07_Q13.c -o Day07_Q13 } ; if ($?) { .\Day07_Q13 }
1900
Not a leap year
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day07_Q13.c -o Day07_Q13 } ; if ($?) { .\Day07_Q13 }
2000
Leap year
PS D:\100 days of code> 

*/
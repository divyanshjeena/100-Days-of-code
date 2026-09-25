/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>
int main()
{
int n,h,m,s;
scanf("%d",&n);
h=n/3600;
m=(n%3600)/60;
s=(n%3600)%60;
printf("%d:%d:%d",h,m,s);
return 0;
}
/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day05_Q10.c -o Day05_Q10 } ; if ($?) { .\Day05_Q10 }
3661
1:1:1
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day05_Q10.c -o Day05_Q10 } ; if ($?) { .\Day05_Q10 }
7322
2:2:2
PS D:\100 days of code> 

*/
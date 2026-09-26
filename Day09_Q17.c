/*Q17: Write a program to find the roots of a quadratic equation and categorize them.

Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   float f=pow(((float)b*b-4*a*c),1/2.0f);
   float x1,x2;
   if(f>0)
   {
     x1=(-b+f)/2*a;
     x2=(-b-f)/2*a;
     printf("Roots are real and different: %.2f,%.2f",x1,x2);
   }
   else if(f==0)
   {
    x1=-b/(float)2*a;
    printf("Roots are real and same: %.2f",x1);
   }
   else 
   {
      printf("Roots are complex");
   }
   return 0;
}
/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day09_Q17.c -o Day09_Q17 } ; if ($?) { .\Day09_Q17 }
1 -3 2
Roots are real and different: 2.00,1.00
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day09_Q17.c -o Day09_Q17 } ; if ($?) { .\Day09_Q17 }
1 -2 1
Roots are real and same: 1.00
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day09_Q17.c -o Day09_Q17 } ; if ($?) { .\Day09_Q17 }
1 2 5
Roots are complex
PS D:\100 days of code> 

*/
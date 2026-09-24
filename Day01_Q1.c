/*Q1: Write a program to input two numbers and display their sum.


Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include <stdio.h>

int main()
{
	int a,b;
	int sum;
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum=%d",sum);
	return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day01_Q1.c -o Day01_Q1 } ; if ($?) { .\Day01_Q1 }
3
4
sum=7
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day01_Q1.c -o Day01_Q1 } ; if ($?) { .\Day01_Q1 }
15
-1
sum=14
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day01_Q1.c -o Day01_Q1 } ; if ($?) { .\Day01_Q1 }
-1
20
sum=19
PS D:\100 days of code> 

*/
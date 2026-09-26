/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.


Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90 && n<=100)
	{
		printf("Grade A");
	}
	else if(n>=80 && n<=89)
	{
		printf("Grade B");
	}
	else if(n>=70 && n<=79)
	{
		printf("Grade C");
	}
	else if(n>=60 && n<=69)
	{
		printf("Grade D");
	}
	else
	{
		printf("Grade F");
	}
	return 0;
}
/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day09_Q18.c -o Day09_Q18 } ; if ($?) { .\Day09_Q18 }
95
Grade A
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day09_Q18.c -o Day09_Q18 } ; if ($?) { .\Day09_Q18 }
82
Grade B
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day09_Q18.c -o Day09_Q18 } ; if ($?) { .\Day09_Q18 }
68
Grade D
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day09_Q18.c -o Day09_Q18 } ; if ($?) { .\Day09_Q18 }
50
Grade F
PS D:\100 days of code> 

*/
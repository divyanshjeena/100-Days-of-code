/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main()
{
	float celsius;
	float fahrenheit;
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("fahrenheit=%f",fahrenheit);
	return 0;
}
/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day03_Q5.c -o Day03_Q5 } ; if ($?) { .\Day03_Q5 }
0
fahrenheit=32.000000
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day03_Q5.c -o Day03_Q5 } ; if ($?) { .\Day03_Q5 }
100
fahrenheit=212.000000
PS D:\100 days of code> 

*/
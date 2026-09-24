/*Q4: Write a program to calculate the area and circumference of a circle given its radius.


Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/


#include <stdio.h>

int main()
{	float r;
	float area;
	float circumference;
	scanf("%f",&r);
	area=3.14*r*r;
	circumference=2*3.14*r;
	printf("area=%f, circumference=%f",area,circumference);
	return 0;
}
/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day02_Q4.c -o Day02_Q4 } ; if ($?) { .\Day02_Q4 }
7
area=153.860001, circumference=43.959999
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day02_Q4.c -o Day02_Q4 } ; if ($?) { .\Day02_Q4 }
3
area=28.260000, circumference=18.840000
PS D:\100 days of code> 

*/
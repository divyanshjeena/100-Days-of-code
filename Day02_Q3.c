/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main()
{
	int a,b;
	int area;
	int perimeter;
	scanf("%d%d",&a,&b);
	area=a*b;
	perimeter=2*a+2*b;
	printf("area=%d,perimeter=%d",area,perimeter);
	return 0;
}
/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day02_Q3.c -o Day02_Q3 } ; if ($?) { .\Day02_Q3 }
5 10
area=50,perimeter=30
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day02_Q3.c -o Day02_Q3 } ; if ($?) { .\Day02_Q3 }
3 7
area=21,perimeter=20
PS D:\100 days of code> 

*/
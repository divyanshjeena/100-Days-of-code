/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


Sample Test Cases:
Input 1:
5 5 5
Output 1:
Equilateral

Input 2:
5 5 3
Output 2:
Isosceles

Input 3:
3 4 5
Output 3:
Scalene

*/

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(a == b && b == c)
    {
        printf("Equilateral");
    }
    else if(a == b || b == c || a == c)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day10_Q19.c -o Day10_Q19 } ; if ($?) { .\Day10_Q19 }
5 5 5
Equilateral
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day10_Q19.c -o Day10_Q19 } ; if ($?) { .\Day10_Q19 }
5 5 3
Isosceles
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day10_Q19.c -o Day10_Q19 } ; if ($?) { .\Day10_Q19 }
3 4 5
Scalene
PS D:\100 days of code> 

*/
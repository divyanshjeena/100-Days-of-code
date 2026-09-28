/*Q28: Write a program to print the product of even numbers from 1 to n.


Sample Test Cases:
Input 1:
6
Output 1:
48

Input 2:
10
Output 2:
3840

*/

#include <stdio.h>
int main()
{
    int n, product = 1;

    scanf("%d", &n);

    for(int i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }

    printf("%d", product);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day14_Q28.c -o Day14_Q28 } ; if ($?) { .\Day14_Q28 }
6
48
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day14_Q28.c -o Day14_Q28 } ; if ($?) { .\Day14_Q28 }
10
3840
PS D:\100 days of code>

*/
/*Q44: Write a program to find the sum of the series:
1 + 3/4 + 5/6 + 7/8 + ... up to n terms.


Sample Test Cases:
Input 1:
1
Output 1:
1.00

Input 2:
2
Output 2:
1.75

Input 3:
4
Output 3:
3.46

*/

#include <stdio.h>
int main()
{
    int n;
    float sum = 1.0;

    scanf("%d", &n);

    for(int i = 2; i <= n; i++)
    {
        sum = sum + (float)(2 * i - 1) / (2 * i);
    }

    printf("%.2f", sum);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day22_Q44.c -o Day22_Q44 } ; if ($?) { .\Day22_Q44 }
1
1.00
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day22_Q44.c -o Day22_Q44 } ; if ($?) { .\Day22_Q44 }
2
1.75
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day22_Q44.c -o Day22_Q44 } ; if ($?) { .\Day22_Q44 }
4
3.46
PS D:\100 days of code>

*/
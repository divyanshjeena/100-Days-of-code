/*Q45: Write a program to find the sum of the series:
2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.


Sample Test Cases:
Input 1:
1
Output 1:
0.67

Input 2:
2
Output 2:
1.24

Input 3:
4
Output 3:
2.32

*/

#include <stdio.h>
int main()
{
    int n;
    float sum = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + (float)(2 * i) / (4 * i - 1);
    }

    printf("%.2f", sum);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day23_Q45.c -o Day23_Q45 } ; if ($?) { .\Day23_Q45 }
1
0.67
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day23_Q45.c -o Day23_Q45 } ; if ($?) { .\Day23_Q45 }
2
1.24
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day23_Q45.c -o Day23_Q45 } ; if ($?) { .\Day23_Q45 }
4
2.32
PS D:\100 days of code>

*/
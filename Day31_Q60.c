/*Q60: Write a program to count positive, negative, and zero elements in an array.


Sample Test Cases:
Input 1:
5
10 -5 0 20 -3
Output 1:
Positive = 2
Negative = 2
Zero = 1

Input 2:
6
1 2 3 -4 -5 0
Output 2:
Positive = 3
Negative = 2
Zero = 1

Input 3:
4
0 0 0 0
Output 3:
Positive = 0
Negative = 0
Zero = 4

*/

#include <stdio.h>
int main()
{
    int n, positive = 0, negative = 0, zero = 0;

    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(array[i] > 0)
        {
            positive++;
        }
        else if(array[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d", zero);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day30_Q60.c -o Day30_Q60 } ; if ($?) { .\Day30_Q60 }
5
10 -5 0 20 -3
Positive = 2
Negative = 2
Zero = 1
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day30_Q60.c -o Day30_Q60 } ; if ($?) { .\Day30_Q60 }
6
1 2 3 -4 -5 0
Positive = 3
Negative = 2
Zero = 1
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day30_Q60.c -o Day30_Q60 } ; if ($?) { .\Day30_Q60 }
4
0 0 0 0
Positive = 0
Negative = 0
Zero = 4
PS D:\100 days of code>

*/
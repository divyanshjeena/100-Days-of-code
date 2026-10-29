/*Q58: Write a program to find the maximum and minimum element in an array.


Sample Test Cases:
Input 1:
5
10 20 5 40 30
Output 1:
Maximum = 40
Minimum = 5

Input 2:
4
8 2 15 6
Output 2:
Maximum = 15
Minimum = 2

Input 3:
3
-5 -2 -10
Output 3:
Maximum = -2
Minimum = -10

*/

#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int maximum = array[0];
    int minimum = array[0];

    for(int i = 1; i < n; i++)
    {
        if(array[i] > maximum)
        {
            maximum = array[i];
        }

        if(array[i] < minimum)
        {
            minimum = array[i];
        }
    }

    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d", minimum);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day29_Q58.c -o Day29_Q58 } ; if ($?) { .\Day29_Q58 }
5
10 20 5 40 30
Maximum = 40
Minimum = 5
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day29_Q58.c -o Day29_Q58 } ; if ($?) { .\Day29_Q58 }
4
8 2 15 6
Maximum = 15
Minimum = 2
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day29_Q58.c -o Day29_Q58 } ; if ($?) { .\Day29_Q58 }
3
-5 -2 -10
Maximum = -2
Minimum = -10
PS D:\100 days of code>

*/
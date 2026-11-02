/*Q62: Write a program to reverse an array without taking extra space.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
50 40 30 20 10

Input 2:
4
1 2 3 4
Output 2:
4 3 2 1

Input 3:
3
5 10 15
Output 3:
15 10 5

*/

#include <stdio.h>
int main()
{
    int n, temp;

    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n / 2; i++)
    {
        temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day31_Q62.c -o Day31_Q62 } ; if ($?) { .\Day31_Q62 }
5
10 20 30 40 50
50 40 30 20 10
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day31_Q62.c -o Day31_Q62 } ; if ($?) { .\Day31_Q62 }
4
1 2 3 4
4 3 2 1
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day31_Q62.c -o Day31_Q62 } ; if ($?) { .\Day31_Q62 }
3
5 10 15
15 10 5
PS D:\100 days of code>

*/
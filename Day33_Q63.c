/*Q63: Write a program to merge two arrays.


Sample Test Cases:
Input 1:
3
10 20 30
2
40 50
Output 1:
10 20 30 40 50

Input 2:
4
1 2 3 4
3
5 6 7
Output 2:
1 2 3 4 5 6 7

Input 3:
2
10 20
3
30 40 50
Output 3:
10 20 30 40 50

*/

#include <stdio.h>
int main()
{
    int n1, n2;

    scanf("%d", &n1);

    int array1[n1];

    for(int i = 0; i < n1; i++)
    {
        scanf("%d", &array1[i]);
    }

    scanf("%d", &n2);

    int array2[n2];
    int merge[n1 + n2];

    for(int i = 0; i < n2; i++)
    {
        scanf("%d", &array2[i]);
    }

    for(int i = 0; i < n1; i++)
    {
        merge[i] = array1[i];
    }

    for(int i = 0; i < n2; i++)
    {
        merge[n1 + i] = array2[i];
    }

    for(int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merge[i]);
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day32_Q63.c -o Day32_Q63 } ; if ($?) { .\Day32_Q63 }
3
10 20 30
2
40 50
10 20 30 40 50
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day32_Q63.c -o Day32_Q63 } ; if ($?) { .\Day32_Q63 }
4
1 2 3 4
3
5 6 7
1 2 3 4 5 6 7
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day32_Q63.c -o Day32_Q63 } ; if ($?) { .\Day32_Q63 }
2
10 20
3
30 40 50
10 20 30 40 50
PS D:\100 days of code>

*/
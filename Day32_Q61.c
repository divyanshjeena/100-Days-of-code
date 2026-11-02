/*Q61: Write a program to search for an element in an array using linear search.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
30
Output 1:
Element found at index 2

Input 2:
5
10 20 30 40 50
50
Output 2:
Element found at index 4

Input 3:
5
10 20 30 40 50
60
Output 3:
Element not found

*/

#include <stdio.h>
int main()
{
    int n, search, index = -1;

    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    scanf("%d", &search);

    for(int i = 0; i < n; i++)
    {
        if(array[i] == search)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        printf("Element found at index %d", index);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day31_Q61.c -o Day31_Q61 } ; if ($?) { .\Day31_Q61 }
5
10 20 30 40 50
30
Element found at index 2
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day31_Q61.c -o Day31_Q61 } ; if ($?) { .\Day31_Q61 }
5
10 20 30 40 50
50
Element found at index 4
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day31_Q61.c -o Day31_Q61 } ; if ($?) { .\Day31_Q61 }
5
10 20 30 40 50
60
Element not found
PS D:\100 days of code>

*/
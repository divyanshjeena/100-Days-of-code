/*Q48: Write a program to print the following pattern:

1
12
123
1234
12345


Sample Test Case:
Output:
1
12
123
1234
12345

*/

#include <stdio.h>
int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day24_Q48.c -o Day24_Q48 } ; if ($?) { .\Day24_Q48 }
1
12
123
1234
12345
PS D:\100 days of code>

*/
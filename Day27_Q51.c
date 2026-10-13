/*Q51: Write a program to print the following pattern:

    5
   45
  345
 2345
12345


Sample Test Case:
Output:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>
int main()
{
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j < i; j++)
        {
            printf(" ");
        }

        for(int j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day26_Q51.c -o Day26_Q51 } ; if ($?) { .\Day26_Q51 }
    5
   45
  345
 2345
12345
PS D:\100 days of code>

*/
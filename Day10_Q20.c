/*Q20: Write a program to display the day of the week based on a number (1-7) using switch-case.


Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
4
Output 2:
Thursday

Input 3:
7
Output 3:
Sunday

*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;

        default:
            printf("Invalid day");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day10_Q20.c -o Day10_Q20 } ; if ($?) { .\Day10_Q20 }
1
Monday
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day10_Q20.c -o Day10_Q20 } ; if ($?) { .\Day10_Q20 }
4
Thursday
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day10_Q20.c -o Day10_Q20 } ; if ($?) { .\Day10_Q20 }
7
Sunday
PS D:\100 days of code>

*/
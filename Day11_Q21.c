/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.


Sample Test Cases:
Input 1:
1
Output 1:
January - 31 days

Input 2:
2
Output 2:
February - 28 days

Input 3:
4
Output 3:
April - 30 days

Input 4:
12
Output 4:
December - 31 days

*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("January - 31 days");
            break;

        case 2:
            printf("February - 28 days");
            break;

        case 3:
            printf("March - 31 days");
            break;

        case 4:
            printf("April - 30 days");
            break;

        case 5:
            printf("May - 31 days");
            break;

        case 6:
            printf("June - 30 days");
            break;

        case 7:
            printf("July - 31 days");
            break;

        case 8:
            printf("August - 31 days");
            break;

        case 9:
            printf("September - 30 days");
            break;

        case 10:
            printf("October - 31 days");
            break;

        case 11:
            printf("November - 30 days");
            break;

        case 12:
            printf("December - 31 days");
            break;

        default:
            printf("Invalid month number");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day11_Q21.c -o Day11_Q21 } ; if ($?) { .\Day11_Q21 }
1
January - 31 days
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day11_Q21.c -o Day11_Q21 } ; if ($?) { .\Day11_Q21 }
2
February - 28 days
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day11_Q21.c -o Day11_Q21 } ; if ($?) { .\Day11_Q21 }
4
April - 30 days
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day11_Q21.c -o Day11_Q21 } ; if ($?) { .\Day11_Q21 }
12
December - 31 days
PS D:\100 days of code>

*/
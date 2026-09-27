/*Q23: Write a program to calculate library fine based on late days as follows:
First 5 days late: Rs.2/day
Next 5 days late: Rs.4/day
Next 20 days late: Rs.6/day
More than 30 days: Membership Cancelled.


Sample Test Cases:
Input 1:
4
Output 1:
Fine = Rs.8

Input 2:
8
Output 2:
Fine = Rs.22

Input 3:
15
Output 3:
Fine = Rs.60

Input 4:
35
Output 4:
Membership Cancelled

*/

#include <stdio.h>
int main()
{
    int days, fine;

    scanf("%d", &days);

    if(days <= 5)
    {
        fine = days * 2;
        printf("Fine = Rs.%d", fine);
    }
    else if(days <= 10)
    {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine = Rs.%d", fine);
    }
    else if(days <= 30)
    {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine = Rs.%d", fine);
    }
    else
    {
        printf("Membership Cancelled");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day12_Q23.c -o Day12_Q23 } ; if ($?) { .\Day12_Q23 }
4
Fine = Rs.8
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day12_Q23.c -o Day12_Q23 } ; if ($?) { .\Day12_Q23 }
8
Fine = Rs.22
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day12_Q23.c -o Day12_Q23 } ; if ($?) { .\Day12_Q23 }
15
Fine = Rs.60
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day12_Q23.c -o Day12_Q23 } ; if ($?) { .\Day12_Q23 }
35
Membership Cancelled
PS D:\100 days of code>

*/
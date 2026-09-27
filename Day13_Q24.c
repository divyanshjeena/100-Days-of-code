/*Q24: Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at Rs.5/unit
Next 100 units at Rs.7/unit
Next 100 units at Rs.10/unit
Above 300 units at Rs.12/unit


Sample Test Cases:
Input 1:
80
Output 1:
Electricity Bill = Rs.400

Input 2:
150
Output 2:
Electricity Bill = Rs.850

Input 3:
250
Output 3:
Electricity Bill = Rs.1700

Input 4:
350
Output 4:
Electricity Bill = Rs.2800

*/

#include <stdio.h>
int main()
{
    int units, bill;

    scanf("%d", &units);

    if(units <= 100)
    {
        bill = units * 5;
    }
    else if(units <= 200)
    {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else if(units <= 300)
    {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    printf("Electricity Bill = Rs.%d", bill);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day12_Q24.c -o Day12_Q24 } ; if ($?) { .\Day12_Q24 }
80
Electricity Bill = Rs.400
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day12_Q24.c -o Day12_Q24 } ; if ($?) { .\Day12_Q24 }
150
Electricity Bill = Rs.850
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day12_Q24.c -o Day12_Q24 } ; if ($?) { .\Day12_Q24 }
250
Electricity Bill = Rs.1700
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day12_Q24.c -o Day12_Q24 } ; if ($?) { .\Day12_Q24 }
350
Electricity Bill = Rs.2800
PS D:\100 days of code>

*/
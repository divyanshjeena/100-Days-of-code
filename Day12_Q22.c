/*Q22: Write a program to find profit or loss percentage given cost price and selling price.


Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit Percentage = 20.00%

Input 2:
1000 800
Output 2:
Loss Percentage = 20.00%

Input 3:
500 500
Output 3:
No Profit No Loss

*/

#include <stdio.h>
int main()
{
    float cp, sp, percentage;

    scanf("%f%f", &cp, &sp);

    if(sp > cp)
    {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit Percentage = %.2f%%", percentage);
    }
    else if(cp > sp)
    {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss Percentage = %.2f%%", percentage);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day11_Q22.c -o Day11_Q22 } ; if ($?) { .\Day11_Q22 }
1000 1200
Profit Percentage = 20.00%
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day11_Q22.c -o Day11_Q22 } ; if ($?) { .\Day11_Q22 }
1000 800
Loss Percentage = 20.00%
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day11_Q22.c -o Day11_Q22 } ; if ($?) { .\Day11_Q22 }
500 500
No Profit No Loss
PS D:\100 days of code>

*/
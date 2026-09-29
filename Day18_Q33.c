/*Q33: Write a program to check if a number is an Armstrong number.


Sample Test Cases:
Input 1:
153
Output 1:
Armstrong Number

Input 2:
370
Output 2:
Armstrong Number

Input 3:
123
Output 3:
Not Armstrong Number

*/

#include <stdio.h>
int main()
{
    int n, original, digit, sum = 0;

    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if(original == sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day17_Q33.c -o Day17_Q33 } ; if ($?) { .\Day17_Q33 }
153
Armstrong Number
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day17_Q33.c -o Day17_Q33 } ; if ($?) { .\Day17_Q33 }
370
Armstrong Number
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day17_Q33.c -o Day17_Q33 } ; if ($?) { .\Day17_Q33 }
123
Not Armstrong Number
PS D:\100 days of code>

*/
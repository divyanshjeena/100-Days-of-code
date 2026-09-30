/*Q41: Write a program to swap the first and last digit of a number.


Sample Test Cases:
Input 1:
12345
Output 1:
52341

Input 2:
9876
Output 2:
6879

Input 3:
1234
Output 3:
4231

*/

#include <stdio.h>
int main()
{
    int n, first, last, temp, place = 1, result;

    scanf("%d", &n);

    last = n % 10;

    temp = n;

    while(temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }

    first = temp;

    result = n - (first * place) - last;
    result = result + (last * place) + first;

    printf("%d", result);

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day21_Q41.c -o Day21_Q41 } ; if ($?) { .\Day21_Q41 }
12345
52341
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day21_Q41.c -o Day21_Q41 } ; if ($?) { .\Day21_Q41 }
9876
6879
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day21_Q41.c -o Day21_Q41 } ; if ($?) { .\Day21_Q41 }
1234
4231
PS D:\100 days of code>

*/
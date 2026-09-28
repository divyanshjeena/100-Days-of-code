/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


Sample Test Cases:
Input 1:
10 + 5
Output 1:
15

Input 2:
10 - 5
Output 2:
5

Input 3:
10 * 5
Output 3:
50

Input 4:
10 / 5
Output 4:
2

Input 5:
10 % 3
Output 5:
1

*/

#include <stdio.h>
int main()
{
    int a, b;
    char operator;

    scanf("%d %c %d", &a, &operator, &b);

    switch(operator)
    {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            printf("%d", a / b);
            break;

        case '%':
            printf("%d", a % b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}

/*

PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day13_Q25.c -o Day13_Q25 } ; if ($?) { .\Day13_Q25 }
10 + 5
15
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day13_Q25.c -o Day13_Q25 } ; if ($?) { .\Day13_Q25 }
10 - 5
5
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day13_Q25.c -o Day13_Q25 } ; if ($?) { .\Day13_Q25 }
10 * 5
50
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day13_Q25.c -o Day13_Q25 } ; if ($?) { .\Day13_Q25 }
10 / 5
2
PS D:\100 days of code> cd "d:\100 days of code\" ; if ($?) { gcc Day13_Q25.c -o Day13_Q25 } ; if ($?) { .\Day13_Q25 }
10 % 3
1
PS D:\100 days of code>

*/
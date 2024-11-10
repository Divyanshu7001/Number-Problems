// 16.Bouncy Number
//         Logic : A number whose digits are neither entirely increasing nor entirely decreasing.
//            Examples :
//                o 132 : The digits are not entirely increasing or decreasing.
//                o 253 : The digits go increasing from 2 to 5, then decreasing from 5 to 3.

#include <stdio.h>
#include <stdbool.h>
#include <stdbool.h>

_Bool isBouncyNumber(int number)
{
    int lastDigit = number % 10;
    number /= 10;
    _Bool increasing = false, decreasing = false;
    while (number > 0)
    {
        int currentDigit = number % 10;
        if (currentDigit < lastDigit)
            increasing = true;
        else if (currentDigit > lastDigit)
            decreasing = true;

        if (increasing && decreasing)
            return true;

        lastDigit = currentDigit;
        number /= 10;
    }
    return false;
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x < 100)
    {
        printf("Bouncy number must have at least 3 digits.\n");
    }
    else
    {
        isBouncyNumber(x)
            ? printf("The number is a Bouncy Number.\n")
            : printf("The number is not a Bouncy Number.\n");
    }

    return 0;
}

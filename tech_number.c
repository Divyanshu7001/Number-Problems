// 3.Tech Number
//     Logic : A number with an even number of digits that can be split into two parts,
//             and the square of their sum equals the number.
//          Examples :
//             o 2025 : Split into 20 and 25, Sum = 20 + 25 = 45,(45)² = 2025.
//             o 3025 : Split into 30 and 25,Sum = 30 + 25 = 55, (55)² = 3025.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

_Bool isTechNumber(int number, int noOfDigits)
{
    int halfDigits = noOfDigits / 2, divisor = pow(10, halfDigits), firstDigit = number / divisor, secondDigit = number % divisor;
    int sum = firstDigit + secondDigit;
    return (sum * sum == number);
}

int main()
{
    int x, count = 0;
    printf("Enter number: ");
    scanf("%d", &x);
    int num = x;
    while (x > 0)
    {
        count++;
        x /= 10;
    }
    if (num <= 0 || ((count % 2) != 0))
    {
        printf("Invalid Input");
        return -1;
    }
    isTechNumber(x, count)
        ? printf("The number is Tech Number.\n")
        : printf("The number is not Tech Number.\n");
    return 0;
}
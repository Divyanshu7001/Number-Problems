// 1. Spy Number
//     Logic : A number where the sum of the digits is equal to the product of the digits.Examples :
//     o 112 : Sum = 1 + 1 + 2 = 4,Product = 1 × 1 × 2 = 4
//     o 22 : Sum = 2 + 2 = 4, Product = 2 × 2 = 4
//     Both have sum = product.


#include <stdio.h>
#include <stdlib.h>

_Bool isSpyNumber(int number)
{

    int sumOfDigits = 0;
    int productOfDigits = 1;
    while (number > 0)
    {
        int digit = number % 10;
        sumOfDigits += digit;
        productOfDigits *= digit;
        number /= 10;
    }
    return sumOfDigits == productOfDigits;
}

int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    if (x <= 0)
    {
        printf("Invalid Input");
        return -1;
    }
    isSpyNumber((x))
        ? printf("The number is Spy Number.\n")
        : printf("The number is not Spy Number.\n");
    return 0;
}
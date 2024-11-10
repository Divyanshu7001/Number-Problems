// 12.Harshad Number
//     Logic : A number divisible by the sum of its digits.
//       Examples :
//            o 18 : Sum of digits = 1 + 8 = 9,and 18 ÷ 9 = 2.
//            o 24 : Sum of digits = 2 + 4 = 6, and24 ÷ 6 = 4.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

_Bool isHarshadNumber(int number)
{
    int sum = 0, temp = number;

    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return temp % sum == 0;
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
    isHarshadNumber((x))
        ? printf("The number is Harshad Number.\n")
        : printf("The number is not Harshad Number.\n");

    return 0;
}
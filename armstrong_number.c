// 10.Armstrong Number
//         Logic : A number where the sum of its digits each raised to the power of the number of digits equals the number itself.
//            Examples :
//                o 153 : 1³ + 5³ + 3³ = 1 + 125 + 27 = 153.
//                o 370 : 3³ + 7³ + 0³ = 27 + 343 + 0 = 370

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

_Bool isArmstrongNumber(int number)
{
    int sum = 0, count = 0, temp = number;

    while (temp > 0)
    {
        count++;
        temp /= 10;
    }
    temp = number;
    while (number > 0)
    {
        sum += pow(number % 10, count);
        number /= 10;
    }
    return sum == temp;
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
    isArmstrongNumber((x))
        ? printf("The number is Armstrong Number.\n")
        : printf("The number is not Armstrong Number.\n");

    return 0;
}
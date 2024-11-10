// 14.Dudeney Number
//     Logic : A number where the sum of the digits equals the cube root of the number.
//        Examples :
//             o 512 : Cube root of 512 = 8, Sum of digits = 5 + 1 + 2 = 8.
//             o 1 : Cube root of 1 = 1, Sum of digits = 1.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

_Bool isHarshadNumber(int number)
{
    int sum = 0, temp = number;

    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum == cbrt((double)temp);
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
        ? printf("The number is Dudeney Number.\n")
        : printf("The number is not Dudeney Number.\n");

    return 0;
}
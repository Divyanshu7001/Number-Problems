// 9. Neon Number
//     Logic : A number where the sum of the digits of its square is equal to the number itself.
//        Examples :
//            o 9 : 9² = 81, Sum of digits = 8 + 1 = 9.
//            o 1 : 1² = 1, Sum of digits = 1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

_Bool isNeonNumber(int number)
{
    int sum = 0, squaredvalue = pow(number, 2), i = 1;
    while (squaredvalue > 0)
    {
        sum += squaredvalue % 10;
        squaredvalue /= 10;
    }
    return sum == number;
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
    isNeonNumber((x))
        ? printf("The number is Neon Number.\n")
        : printf("The number is not Neon Number.\n");
    return 0;
}
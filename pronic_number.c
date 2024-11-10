// 11.Pronic Number
//     Logic : A number that is the product of two consecutive integers.
//        Examples :
//            o 12 : 3 × 4 = 12.
//            o 20 : 4 × 5 = 20.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

_Bool isPronicNumber(int number)
{
    int product = 0, i = 1;
    while (i <= number)
    {
        product = i * (i + 1);
        if (product == number)
        {
            return true;
        }
        i++;
    }
    return false;
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
    isPronicNumber((x))
        ? printf("The number is Pronic Number.\n")
        : printf("The number is not Pronic Number.\n");

    return 0;
}
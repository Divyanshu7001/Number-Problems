// 2. Duck Number
//     Logic : A number that contains at least one '0' but not at the beginning.
//           Examples :
//           o 203 : Contains a '0' but doesn’t start with it.
//           o 1405 : Contains a '0' in the middle.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
_Bool isDuckNumber(int number)
{
    int newDigit = 0;
    _Bool foundZero = false;
    while (number > 0)
    {
        newDigit = number % 10;
        foundZero = (newDigit == 0) ? true : foundZero;
        number /= 10;
    }
    // printf("The last digit: %d",newDigit);
    return foundZero && newDigit != 0;
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
    isDuckNumber((x))
        ? printf("The number is Duck Number.\n")
        : printf("The number is not Duck Number.\n");
    return 0;
}
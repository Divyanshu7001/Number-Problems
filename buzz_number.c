// 4.Buzz Number
//      Logic: A number divisible by 7 or ends with a 7.
//          Examples:
//                 o  49: Divisible by 7.
//                 o  27: Ends with 7.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

_Bool isBuzzNumber(int number)
{
    return number % 10 == 7 || number % 7 == 0;
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
    isBuzzNumber((x))
        ? printf("The number is Buzz Number.\n")
        : printf("The number is not Buzz Number.\n");
    return 0;
}
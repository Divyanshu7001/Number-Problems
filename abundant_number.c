// 8. Abundant Number
//     Logic : A number where the sum of its proper divisors(excluding itself) is greater than the number itself.
//         Examples :
//            o 12 : Divisors = 1, 2, 3, 4, 6; Sum = 1 + 2 + 3 + 4 + 6 = 16 > 12.
//            o 18 : Divisors = 1, 2, 3, 6, 9;Sum = 1 + 2 + 3 + 6 + 9 = 21 > 18

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

_Bool isAbundantNumber(int number)
{
    int sum = 0, i = 1;
    while (i < number)
    {
        (number % i) == 0 ? sum = sum + i : sum;
        i++;
    }
    return sum > number;
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
    isAbudantNumber((x))
        ? printf("The number is Abundant Number.\n")
        : printf("The number is not Abundant Number.\n");
    return 0;
}
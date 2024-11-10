// 7. Magic Number
//         Logic : A number where the sum of its digits repeatedly added together
//                 equals 1.
//             Examples :
//               o 1729 : 1 + 7 + 2 + 9 = 19, 1 + 9 = 10, 1 + 0 = 1.
//               o 19 : 1 + 9 = 10, 1 + 0 = 1.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

_Bool isMagicNumber(int number)
{
    int sum = 0;
    while (number >= 10)
    {
        int tempSum = 0;
        while (number > 0)
        {
            tempSum += number % 10;
            number /= 10;
        }
        number = tempSum;
        sum = tempSum;
    }
    return sum == 1;
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
    isMagicNumber((x))
        ? printf("The number is Magic Number.\n")
        : printf("The number is not Magic Number.\n");
    return 0;
}
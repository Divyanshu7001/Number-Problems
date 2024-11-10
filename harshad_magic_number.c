// 13.Harshad Magic Number
//     Logic : A Harshad number where the sum of the digits, when repeatedly added, equals 1.
//          Examples :
//               o 1729 : It's a Harshad number (as seen above), and 1 + 7 + 2 + 9 = 19 and 1729 divisible by 19 and now 1 + 9 = 10, 1 + 0 = 1.

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
    if (temp % sum == 0)
    {
        int finalSum = 0;
        while (sum >= 10)
        {
            int tempSum = 0;
            while (sum > 0)
            {
                tempSum += sum % 10;
                sum /= 10;
            }
            sum = tempSum;
            finalSum = tempSum;
        }
        return finalSum == 1 ? true : false;
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
    isHarshadNumber((x))
        ? printf("The number is Harshad Number.\n")
        : printf("The number is not Harshad Number.\n");

    return 0;
}
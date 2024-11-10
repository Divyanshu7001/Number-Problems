// 5. Disarium Number
//     Logic : A number where the sum of its digits powered by their respective
//             positions equals the number itself.
//          Examples :
//              o 175 : 1¹ + 7² + 5³ = 1 + 49 + 125 = 175.
//              o 89 : 8¹ + 9² = 8 + 81 = 89.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
_Bool isDisariumNumber(int number)
{
    int newDigit = 0, sum = 0, count = 0;
    int temp = number;
    while (temp > 0)
    {
        count++;
        temp /= 10;
    }
    temp = number;
    while (number > 0)
    {
        newDigit = number % 10;
        sum += (int)pow(newDigit, count);
        count--;
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
    isDisariumNumber((x))
        ? printf("The number is Disarium Number.\n")
        : printf("The number is not Disarium Number.\n");
    return 0;
}
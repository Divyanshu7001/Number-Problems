// 6.Tribonacci Number
// Logic : A number that is part of a sequence where each term is the sum of the preceding three terms,starting with 0,1,and1.
// Examples : o 4 : Sequence = 0,1,1,2,4...
//            o 13 : Sequence = 0, 1,1,2,4,7,13...

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void TribonacciNumber(int number)
{
    int a = 0, b = 1, c = 1, sum = 0;
    printf("%d, %d, %d, ", a, b, c);
    while (sum < number)
    {
        int newSum = a + b + c;
        if (newSum == number)
        {
            printf("%d", newSum);
            printf("\n%d found", number);
            return;
        }
        printf("%d, ", newSum);
        a = b;
        b = c;
        c = newSum;
        sum = newSum;
    }
    printf("\n%d not found", number);
}
int main()
{
    int x, count = 0;
    printf("Enter number: ");
    scanf("%d", &x);
    if (x <= 0)
    {
        printf("Invalid Input");
        return -1;
    }
    TribonacciNumber(x);
    return 0;
}
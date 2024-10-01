#include <stdio.h>

void main()
{
    int num;
    printf("Enter value of number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}
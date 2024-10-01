#include <stdio.h>

// Function prototype
int max(int a, int b);

void main()
{
    int x, y;

    printf("Enter first value: ");
    scanf("%d", &x);
    printf("Enter second value: ");
    scanf("%d", &y);

    printf("Max value is %d", max(x, y));
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

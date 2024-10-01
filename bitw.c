#include <stdio.h>

void main()
{
    int x = 7;
    int y = 4;

    printf("%d \n", x & y);
    printf("%d \n", x | y);
    printf("%d \n", x ^ y);
    printf("%d \n", x >> 1);
    printf("%d \n", x << 2);
}
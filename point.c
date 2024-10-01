#include <stdio.h>

void main(void)
{
    int x = 10;
    int *ptr;

    ptr = &x;
    *ptr = 50;

    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
}
#include <stdio.h>

void fn(int *x)
{
    *x = 10;
}

void main(void)
{
    int x = 20;
    fn(&x); // passing reference change the value of container
    printf("x is %d", x);
}
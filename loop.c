#include<stdio.h>

void main()
{
    int x = 0;
    while(x != 10)
    {
        printf("Try again \n");
        scanf("%d", &x);
    }
}
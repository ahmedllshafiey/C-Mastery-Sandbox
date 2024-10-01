#include <stdio.h>

void main(void)
{
    int list[5] = {0,0,0,0,0};
    for (int i = 1; i < sizeof(list) / sizeof(int); i++)
    {
        list[i] = i;
    }

    printf("%d", list[4]);
}
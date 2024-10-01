#include <stdio.h>

void main(void)
{
    int list[7] = {7, 9, 5, 4, 2, 4, 1};

    for (int i = 0; i < sizeof(list) / sizeof(int); i++)
    {
        if (list[i] > list[i + 1])
        {
            int keep = list[i + 1];
            list[i] = list[i + 1];
            list[i + 1] = keep;
        }
    }

    for (int i = 0; i < sizeof(list) / sizeof(int); i++)
    {
        printf("Index: %d, value: %d\n", i, list[i]);
    }
}
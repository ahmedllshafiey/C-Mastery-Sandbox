#include <stdio.h>

typedef struct Bit
{
    unsigned int a : 2;
    signed int b : 3;
    unsigned char c : 1;
} bt;

int main()
{
    bt usr = {2, 4, 1};
    printf("Size of bit is %lu\n", sizeof(bt));
    return 0;
}

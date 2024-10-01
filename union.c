#include <stdio.h>

// Define u8 as unsigned char for 8-bit integers
typedef unsigned char u8;

typedef union un
{
    struct Bit
    {
        u8 B0 : 1;
        u8 B1 : 1;
        u8 B2 : 1;
        u8 B3 : 1;
        u8 B4 : 1;
        u8 B5 : 1;
        u8 B6 : 1;
        u8 B7 : 1;
    } Bit;
    u8 Byte;
} un;

int main()
{
    return 0;
}

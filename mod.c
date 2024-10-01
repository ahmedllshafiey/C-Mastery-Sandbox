#include <stdio.h>

typedef unsigned char u16;
typedef signed int s32;

void main(void)
{
    // no specific order when handling data modifiers
    signed int x;          // only positive numbers
    unsigned int y;        // positive and negative numbers
    short int z;           // short size int
    long int v;            // long size int
    const float PI = 3.14; // const value

    // Storage Modifiers
    register int t; // use var that used alot in register to avoid non-needed process to complie
    static int r;   // var in ram only and used within file only can't used externally
    int g;          // let compilar descide ram or register
    extern int u;   // var from other file that defined in linking stage
}
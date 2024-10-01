#include <stdio.h>

enum fruits
{
    mango,
    apple,
    papaya
} taste;

int main(void)
{
    taste = apple;
    printf("Enum number is %d\n", taste);
    return 0;
}

#include <stdio.h>

int calculate_area(const int *d1, const int *d2)
{
    return *d1 * *d2;
}

void main(void)
{
    const int d1 = 3;
    const int d2 = 4;

    int area = calculate_area(&d1, &d2);

    printf("The area is %d \n", area);

    const int d1_new = 6;
    const int d2_new = 3;

    int area2 = calculate_area(&d1_new, &d2_new);

    printf("The area is %d \n", area2);
}

#include <stdio.h>

#define PI 3.14                   // Macro
#define ADD(x, y) (x + y)         // Macro-like function
#define MIN(a, b) (a < b ? a : b) // Macro-like function
#define PRI()      \
    printf("A\n"); \
    printf("H\n"); \
    printf("M\n"); \
    printf("E\n"); \
    printf("D\n");
// # undef PI // Remove definition of PI

void main(void)
{
    printf("PI value is %f\n", PI);
    printf("Minimun value is %d\n", MIN(10, 5));

    printf("File : %s\n", __FILE__);
    printf("Date : %s\n", __DATE__);
    printf("Time : %s\n", __TIME__);
    printf("Line : %d\n", __LINE__);
    printf("STDC : %d\n", __STDC__);

    PRI();
}
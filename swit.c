#include <stdio.h>

void main()
{
    char color;
    printf("Enter color you want(r-g-b-y): ");
    scanf("%c", &color);

    switch (color)
    {
    case 'r':
        printf("Color is red");
        break;
    case 'g':
        printf("Color is green");
        break;
    case 'b':
        printf("Color is blue");
        break;
    case 'y':
        printf("Color is yellow");
        break;
    default:
        printf("Color is not valid");
        break;
    }
}
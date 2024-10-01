#include <stdio.h>

void main(void)
{
    char name[50];
    printf("Enter your name: ");
    gets(name); // == scanf("%[^\n]s", name);
    printf("Your name is: ");
    puts(name);
}
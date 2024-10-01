#include <stdio.h>
#pragma pack(1) // avoid structure padding

struct User // Data type
{
    int id;
    char name[10];
    float salary;
};
typedef struct User usr;

typedef struct Student
{
    char name[50];
    int ID;
} stud;
_attribute_(packed); // avoid structure padding in specific structure

void main(void)
{
    usr u1 = {01, "Ahmed", 5000.0};
    usr *ptr = &u1;

    printf("User name is: %s \n", u1.name);
    printf("User ID is: %d\n", u1.id);
    printf("User salary is: %d\n", u1.salary);

    printf("User name is: %s \n", ptr->name);
    printf("User ID is: %d\n", ptr->id);
    printf("User salary is: %d\n", ptr->salary);
}
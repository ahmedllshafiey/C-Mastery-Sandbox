#include <stdio.h>

void func() __attribute__((constructor));
void func_exit() __attribute__((destructor));

void func() {
    printf("\nI am in func (called before main)");
}

void func_exit() {
    printf("\nI am in func_exit (called after main)");
}

int main() {
    printf("\nI am in main");
    return 0;
}

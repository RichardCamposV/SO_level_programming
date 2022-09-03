
#include <stdio.h>

int main() {
    int a = 5;
    int *pointer_a = &a;
    *pointer_a = 12;

    printf("Value pointer: %p\n", pointer_a);
    printf("Value where register: %i\n", *pointer_a);

}

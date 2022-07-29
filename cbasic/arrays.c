
#include <stdio.h>
#include <stdlib.h>

int main() {
    int length = 8;
    // Declarate pointer
    int *array = malloc(sizeof(int) * 8);

    for (int i = 0; i < length; i++) {
        array[i] = i + 1;
    }
    for (int i = 0; i < length; i++) {
        printf("Value array[%i] = %i\n", i, array[i]);
    }
    // Release memory pointer
    free(array);
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int nehelem = 4;
    int *arr = malloc(nehelem * sizeof(int));
    printf("Sizeof(*arr) (should be 16): %lu\n", sizeof(*arr));
    free(arr);
}
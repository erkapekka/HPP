#include <stdio.h>

int myMult(int x, int y) {
    return x * y;
}

int main() {
    char numOne[2];
    char numTwo[2];
    printf("Enter a number: ");
    fgets(numOne, 2, stdin);
    printf("And now the second number: ");
    fgets(numTwo, 2, stdin);
    printf("\nThe result of these two multiplied: %d", myMult((int) numOne[0], (int) numTwo[0]));
    getchar();
}
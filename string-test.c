#include <stdio.h>

int main() {
    char string[10];
    fgets(string, 10, stdin);
    printf("The string: %s\n", string);
    if(string[9] == '\0') {
        printf("Last character null terminator\n");
    }
    getchar();
}

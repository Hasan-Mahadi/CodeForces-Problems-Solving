#include <stdio.h>

int main() {
    char X;
    scanf(" %c", &X);

    if (X >= 'a' && X <= 'z') {
        // lowercase to uppercase
        printf("%c\n", X - 32);
    } else {
        // uppercase to lowercase
        printf("%c\n", X + 32);
    }

    return 0;
}
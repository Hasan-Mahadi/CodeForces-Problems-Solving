#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int x;
    scanf("%d", &x);

    int max = x;  // assume first value is max

    for(int i = 1; i < N; i++) {
        scanf("%d", &x);

        if(x > max) {
            max = x;
        }
    }

    printf("%d\n", max);

    return 0;
}
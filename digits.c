#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        if(N == 0) {
            printf("0\n");
        }
        else {
            for(; N > 0; N = N / 10) {
                printf("%d ", N % 10);
            }
            printf("\n");
        }
    }

    return 0;
}
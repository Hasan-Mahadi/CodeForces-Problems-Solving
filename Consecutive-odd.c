#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int t = 1; t <= T; t++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int sum = 0;

        // ensure correct range
        int start, end;

        if(X < Y) {
            start = X + 1;
            end = Y - 1;
        } else {
            start = Y + 1;
            end = X - 1;
        }

        for(int i = start; i <= end; i++) {
            if(i % 2 != 0) {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
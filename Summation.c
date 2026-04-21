#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    long long sum = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < N; i++) {
        sum = sum + A[i];
    }

    if(sum < 0) {
        sum = -sum;
    }

    printf("%lld\n", sum);

    return 0;
}
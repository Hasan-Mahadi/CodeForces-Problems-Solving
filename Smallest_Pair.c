#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        int N;
        scanf("%d", &N);

        int arr[N];

        for(int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        int min = 1000000000; // large value

        for(int i = 0; i < N; i++) {
            for(int j = i + 1; j < N; j++) {
                int sum = arr[i] + arr[j] + (j - i);

                if(sum < min) {
                    min = sum;
                }
            }
        }

        printf("%d\n", min);
    }

    return 0;
}
#include <stdio.h>

int main(){
   
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++){

        int N;
        scanf("%d", &N);

        long long fact = 1;

        for (int i = 1; i <= N; i++){
            fact = fact * i;
        }

        printf("%lld\n", fact);
    }

    return 0;
}
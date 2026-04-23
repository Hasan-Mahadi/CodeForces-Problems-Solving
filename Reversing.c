#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    };

    int left = 0;
    int right = N - 1;

    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
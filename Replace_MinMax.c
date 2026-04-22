#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < N; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }

        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    // swap in array
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    // print array
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
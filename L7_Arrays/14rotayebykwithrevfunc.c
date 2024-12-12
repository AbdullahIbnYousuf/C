#include <stdio.h>
void rev(int arr[], int a, int b)
{

    for (int i = a, j = b; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    return;
}

int main()
{
    int a, b, k;
    int arr[5] = {0, 1, 2, 3, 4};
    int n = 5;

    printf("Enter num of rotation term: ");
    scanf("%d", &k);

    if (k > n)
    {
        k = k % n;
    }

    rev(arr, 0, n - 1);
    rev(arr, 0, k - 1);
    rev(arr, k, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
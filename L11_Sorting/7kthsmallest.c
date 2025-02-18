#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[5] = {6, 8, 2, 7, 5};
    int n = 5, k = 2;

    for(int i = 0; i < k; i++)
    {
        int min = INT_MAX, mindx = i;
        for(int j = i; j < n; j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
                mindx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mindx];
        arr[mindx] = temp;   
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", arr[k - 1]);

    return 0;
}
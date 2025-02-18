#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[10] = {5,0,2,0,0,4,1,3,0};
    int res[10] = {0};
    int n = 9;

    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if(arr[j])
        {
            res[i] = arr[j];
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", res[i]);
    }

    return 0;
}
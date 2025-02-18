#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[5] =  {5, 2, 6, 4, 1};
    int n = 5, count = 0; 
    
    for (int i = 0; i < n - 1; i++)
    {
        int min_indx  = i, min = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if(min > arr[j])
            {
                min_indx = j;
                min = arr[j];
            }
        }
        if (min_indx != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_indx];
            arr[min_indx] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
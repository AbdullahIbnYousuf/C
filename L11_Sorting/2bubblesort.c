#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[5] =  {1, 2, 3, 4, 5};
    
    for (int i = 0; i < 5 - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < 5 - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag) break; 
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
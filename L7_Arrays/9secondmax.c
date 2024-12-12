#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[10]={1,9,-3,4,8,6,-7,9,-10,8};
    int max= INT_MIN, second_max;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>max)     
        {
            second_max=max;
            max=arr[i];
        }
        else if (arr[i]>second_max && arr[i]!=max)
        {
            second_max=arr[i];
        }
        
         
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     if (arr[i]>second_max && arr[i]!=max)     
    //     {
    //         second_max=arr[i];
    //     }
        
    // }

    printf("second max = %d", second_max);

    
    return 0;
}
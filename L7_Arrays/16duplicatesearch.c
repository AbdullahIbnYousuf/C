#include <stdio.h>
int main()
{
    int arr[10]= {0,0,2,3,9,5,0,7,8,9};
    int n=10;

    for (int  i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                printf("%d has duplicate %d %d \n", arr[i], i, j);
                break;
            }
            
        }
        
    }

    return 0;
}
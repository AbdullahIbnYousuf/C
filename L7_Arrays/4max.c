#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[5]={15, 12, 9, 5, 2};
    // int max=INT_MIN;
    int max=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    printf("%d", max);


    return 0;
}
//1int = 4bytes =32 bits so -2^31 to 2^31-1
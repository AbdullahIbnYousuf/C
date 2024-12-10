#include <stdio.h>
int main()
{
    int arr[20];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter num%d : \n", i+1);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]);
    }
    

    return 0;
}
#include <stdio.h>
void rev(int arr[], int a, int b)
{
    for (int i = a, j = b; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int arr[5]= {0,1,2,3,4}, a, b;
    printf("Enter range1 : \n");
    scanf("%d", &a);
    printf("Enter range2 : \n");
    scanf("%d", &b);

    rev(arr,a,b);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
    

    return 0;
}
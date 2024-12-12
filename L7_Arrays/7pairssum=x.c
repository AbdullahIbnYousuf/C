//its not the best answer, hash map needed for that;

#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10}, x, count = 0;
    printf("Enter the int : ");
    scanf("%d", &x);

    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                count++;
                printf("(%d,%d) ", arr[i], arr[j]);
            }
            
        }
        
    }
    
printf("\ncount = %d", count);

    return 0;
}
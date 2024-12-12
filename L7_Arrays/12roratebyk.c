#include <stdio.h>
int main()
{
    int k, size=6, n=size-1, ar[6]={0,1,2,3,4,5};
    printf("Enter steps: ");
    scanf("%d", &k);

    if (k>size)
    {
        k=k%size;
    }
    

    for (int j = 0; j < k; j++)
    {
        int temp = ar[n];
        for (int i = 0; i <= n; i++)
        {
            ar[n-i] = ar[n-1-i];
        }
        ar[0] = temp;
        
    }
    
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", ar[i]);
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    int n=5, palendrome=0;
    int arr[]={0,1,2,1,0};

    for (int i = 0; i < n/2; i++)
    {
        if (arr[i]!=arr[n-1-i])
        {
            palendrome++;
        }
        
    }
    if (palendrome)
    {
        printf("Not");
    }
    else
    {
        printf("Yes");
    }
    
    

    return 0;
}
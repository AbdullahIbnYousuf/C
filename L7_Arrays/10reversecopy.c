#include <stdio.h>
int main()
{
    int n=11;
    int arr1[]={0,1,2,3,4,5,6,7,8,9,10};
    int arr2[n];

    for (int i = 0; i < n; i++)
    {

//reversing same array;

        // int temp=arr1[i];
        // arr1[i]=arr1[n-1-i];
        // arr1[n-1-i]=temp;

//reversecopy in different arry

        arr2[n-1-i]=arr1[i];
        
    }


    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr2[i]);
    }
    
    

    return 0;
}
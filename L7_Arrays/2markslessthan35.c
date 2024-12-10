#include <stdio.h>
int main()
{
    int mark[10]={50,60,80,60,30,20,10,15,90,100};

    for (int i = 0; i < 10; i++)
    {
        if (mark[i]<35)
        {
            printf("%d\n", i+1);
        }
        
    }
    //int takes consecutive 4bytes, char 1 byte
    //arr[n]=(n+1)th element
    //if no values given it will show garbeg values

    return 0;
}
#include <stdio.h>
#include <limits.h>

int main()
{
    int ar[3][3]={ 
    1, 2, 3,
    4, 5, 6,
    7, 8, 9
    };
    int maxsum= INT_MIN, r;
    for (int i = 0; i < 3; i++)
    {
        int rowsum=0;
        for (int j = 0; j < 3; j++)
        {
            rowsum+=ar[i][j];
        }
        if (rowsum>maxsum)
        {
            maxsum=rowsum;
            r = i;

        }
        
    }
    printf("%d \n", maxsum);
    printf("%d", r);

    return 0;
}
#include <stdio.h>
int main()
{
    int ar1[3][3]={1, 1, 1,
    1, 1, 1,
    1, 1, 1};
    int ar2[3][3]={1, 1, 1,
    1, 1, 1,
    1, 1, 1};

    int ar3[3][3];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ar3[i][j] = ar1[i][j]+ar2[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ar3[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
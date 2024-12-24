#include <stdio.h>
int main()
{
   int r,c;
    printf("Enter the number of rows:");
    scanf("%d", &r);
    printf("Enter the number of columns:");
    scanf("%d", &c);

    int arr[r][c], trans[c][r];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

 for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            trans[i][j]=arr[j][i];
        }
        
    }
 for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
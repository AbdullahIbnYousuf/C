#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows:");
    scanf("%d", &r);
    printf("Enter the number of columns:");
    scanf("%d", &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // printf("Enter (%d %d) : ", i, j);
            scanf("%d", &arr[i][j]);
            // arr[i][j]=10;
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
        
    }
    

    return 0;
}
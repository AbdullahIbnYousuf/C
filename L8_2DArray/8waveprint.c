#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows:");
    scanf("%d", &r);
    printf("Enter the number of columns:");
    scanf("%d", &c);

    int mat[r][c];
    printf("Enter the elements of matrix : \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    

    printf("the resultant matrix is: \n");
    for (int i = 0; i < r; i++)
    {
        if (i%2==0)
        {
            for (int j = 0; j < c; j++)
            {
                
                printf("%d ", mat[i][j]);
            }
            
        }
        else
        {
            for (int j = c-1; j >= 0; j--)
            {
                
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
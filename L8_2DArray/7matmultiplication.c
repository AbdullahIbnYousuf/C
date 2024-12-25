#include <stdio.h>
int main()
{
    int r1,c1;
    printf("Enter the number of rows:");
    scanf("%d", &r1);
    printf("Enter the number of columns:");
    scanf("%d", &c1);

    int mat1[r1][c1];
    printf("Enter the elements of matrix 1: \n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    int r2,c2;
    printf("Enter the number of rows:");
    scanf("%d", &r2);
    printf("Enter the number of columns:");
    scanf("%d", &c2);

    int mat2[r2][c2];
    printf("Enter the elements of matrix 2: \n");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }


    int res[r1][c2];

    if (c1==r2)
    {
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
           res[i][j] =0;
           for (int k = 0; k < c1; k++)
           {
            res[i][j] += mat1[i][k]*mat2[k][j];
           }
        }
    }
    }
    else
    {
        printf(" Can not be multiplied");
    }
    

    printf("the resultant matrix is: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
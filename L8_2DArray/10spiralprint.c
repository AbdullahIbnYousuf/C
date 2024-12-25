#include <stdio.h>
int main()
{
    int r, c;
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

    // int mat[3][3]={ 
    // 1, 2, 3,
    // 4, 5, 6,
    // 7, 8, 9
    // }, c=3,r=3;

    int min_c = 0, max_c = c-1, min_r = 0, max_r = r-1;
    printf("the spiral matrix is: \n");
    int count = 0;
    int n = r*c;
    while (count < n)

    {
        for (int i = min_c; i <= max_c && count < n; i++)
        {
            printf("%d ", mat[min_r][i]);
            count++;
        }
        min_r++;

        for (int i = min_r; i <= max_r && count < n; i++)
        {
            printf("%d ", mat[i][max_c]);
            count++;
        }
        max_c--;

        for (int i = max_c; i >= min_c; i--)
        {
            printf("%d ", mat[max_r][i]);
            count++;
        }
        max_r--;
        for (int i = max_r; i >= min_r; i--)
        {
            printf("%d ", mat[i][min_c]);
            count++;
        }
        min_c++;
    }
    printf("\ncount = %d", count);

    return 0;
}
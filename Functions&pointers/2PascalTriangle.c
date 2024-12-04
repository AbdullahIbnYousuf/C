#include <stdio.h>
int fact(int n){
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
       fact= fact*i;
    }
    return fact;
}

int comb(int n, int r)
{

    int ncr=fact(n)/(fact(r)*fact(n-r));

    return ncr;
}

int main()
{
    int i, j, n;
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++)
    {
        for ( j = 1; j < n-i; j++)
        {
            printf(" ");
        }
        for ( j = 0; j <= i; j++)
        {
            printf("%2d", comb(i,j));
        }
        printf("\n");
    }

    return 0;
}
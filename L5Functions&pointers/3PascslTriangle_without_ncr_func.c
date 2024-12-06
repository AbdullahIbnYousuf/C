
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    for ( int i = 0; i < n; i++)
    {
        for ( int j = 1; j <= n-i-1; j++)
        {
            printf(" ");
        }
        int ncr=1;
        for ( int j = 0 ; j <= i; j++)
        {
            printf("%2d", ncr);
            ncr=ncr*(i-j)/(j+1);
        }
        printf("\n");
    }

    return 0;
}
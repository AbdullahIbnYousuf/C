#include <stdio.h>
int fact(int n){
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
       fact= fact*i;
    }
    return fact;
}

int main()
{
    int n,r,ncr;

    scanf("%d", &n);
    scanf("%d", &r);

    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("%d", ncr);

    return 0;
}
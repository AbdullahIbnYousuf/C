#include <stdio.h>
int sum(int n){

if (n==1) return 1;

    int rec=n+sum(n-1);

    return rec;
}
int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d", &n);

    printf("%d", sum(n));

    return 0;
}
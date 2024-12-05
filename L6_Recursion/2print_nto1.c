#include <stdio.h>
void nto1(int n){
    if (n==0)
    return;

    printf("%d ", n);
    nto1(n-1);
    
    return;
}

int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d", &n);

    nto1(n);

    return 0;
}
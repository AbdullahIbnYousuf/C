#include <stdio.h>
void sum(int n, int a){
    if (n==0){
        printf("%d",a);
    return;
    }
    sum(n-1,a+n);
    return ;
    
}

int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d", &n);

    sum(n,0);

    return 0;
}   
#include <stdio.h>
int fact(int n){
    if (n==0)
    return 1;
    
    return n*fact(n-1);
}

int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d", &n);

    printf("Enter num: %d", fact(n));

    return 0;
}
#include <stdio.h>
void Decreasing(int n, int a){
    if (a>n)
    return;
    Decreasing(n,a+1);
    printf("%d \n", a);
    return;
    
}
int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d", &n);

    Decreasing(n,1);

    return 0;
}   
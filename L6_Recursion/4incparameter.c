#include <stdio.h>
void increasing(int x, int n){
    if (x>n)
    return;

    printf("%d ", x);
    increasing(x+1, n);
    
    return;
}

int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d", &n);

    increasing(1,n);

    return 0;
}
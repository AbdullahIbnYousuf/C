#include <stdio.h>
void Dec_Inc(int n){

    if (n==0)
    return;
    
    printf("%d \n", n);
    Dec_Inc(n-1);
    printf("%d \n", n);
}

int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d", &n);

    Dec_Inc(n);

    return 0;
}
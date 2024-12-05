#include <stdio.h>
int fact(int a){
    int fact=1;
    for (int i = a; i > 1; i--)
    {
        fact=fact*i;
    }
    return fact;
    
}
int main()
{
    int n;
    printf("Enter the num: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("factorial of %d is %d \n", i, fact(i));
    }

    return 0;
}
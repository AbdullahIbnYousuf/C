#include <stdio.h>
int power(int a, int b){
    if (b==0) return 1;
    int pwr;
    int p= power(a,b/2);
    if(b%2==0) pwr = p*p;
    else pwr=p*p*a;
    return pwr;
}

int main()
{
    int a,b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);

    printf("%d", power(a,b));

    return 0;
}
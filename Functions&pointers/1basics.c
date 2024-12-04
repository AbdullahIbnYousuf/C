#include <stdio.h>
int add(int a, int b){
    return (a+b);
}
int main()
{
    int a,b,sum;
    scanf("%d", &a);
    scanf("%d", &b);
    sum= add(a,b);
    printf("%d", sum);

    return 0;
}
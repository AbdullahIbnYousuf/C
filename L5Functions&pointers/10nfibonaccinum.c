#include<stdio.h>

void fibo(int a){

    int first=0, second=1, fibo;
    printf("Fibo Seq: ");

    for (int i = 0; i < a; i++)
    {
        printf("%d ", first);
        fibo=first+second;
        first=second;
        second=fibo;

    }
    
    return;
}

int main()
{
    int n;
    printf("Enter the num: ");
    scanf("%d", &n);

        fibo(n);

    return 0;
}
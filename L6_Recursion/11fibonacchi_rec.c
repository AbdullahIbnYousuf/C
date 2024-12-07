#include<stdio.h>
int fibo(int n){
    if (n<0) {printf("input positive integer");
    return  0;
    }
    
    else if(n==1 || n==2) return 1;

    else{
    int f=fibo(n-1)+fibo(n-2);
    return f;
    }
}

int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d", &n);

    printf("%d", fibo(n));

    return 0;
}
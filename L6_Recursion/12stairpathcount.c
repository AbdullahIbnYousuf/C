#include<stdio.h>
int stair(int n){
    if (n<=0) {printf("input positive integer");
    return  0;
    }
    
    else if(n==1 || n==2) return n;

    else{
    int f=stair(n-1)+stair(n-2);
    return f;
    }
}

int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d", &n);

    printf("%d", stair(n));

    return 0;
}
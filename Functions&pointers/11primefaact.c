#include<stdio.h>
int prime(int a){
   int prime=1;

    for (int i = 2; i*i <= a; i++)
    {
        if (a%i==0)
        prime=0;  
    }

    return prime;
}

void prime_fact(int a){
    for (int i = 2; i <= a; i++)
    {
        if (prime(i) && a%i==0)
        {
            printf("%d ", i);
        }
        
    }

    return;

}

int main()
{
    int n;
    printf("Enter the num: ");
    scanf("%d", &n);

        prime_fact(n);

    return 0;
}
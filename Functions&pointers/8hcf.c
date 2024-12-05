#include <stdio.h>
int min(int a, int b){
    if (a<b)
    return a;
    else return b;
    
}


int hcf(int a, int b){
    int hfc;
    for (int i = min(a,b); i >= 1 ; i--)
    {
        if (a%i==0 && b%i==0)
        {
            hfc=i;
        }
        break;
        
    }

    return hfc;
    
}


int main()
{
    int a, b;
    printf("Enter 1st num:");
    scanf("%d", &a);
    printf("Enter 2nd num:");
    scanf("%d", &b);

  

    printf("Hcf=%d", hcf(a,b));

    return 0;
}
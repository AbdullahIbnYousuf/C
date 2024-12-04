#include <stdio.h>
int main()
{
     int a,b,c;

     printf("Enter 1st num:");
     scanf("%d", &a);
     printf("Enter 2nd num:");
     scanf("%d", &b);

     a=a+b;
     b=a-b;
     a=a-b;

     printf("1st =%d\n",a);
     printf("2nd =%d",b);


    return 0;
}
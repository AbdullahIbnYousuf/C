#include <stdio.h>
void swap(int *x, int *y){

    int temp=*x;
    *x=*y;
    *y=temp;
     
     return;
}
int main()
{
     int a,b,c;

     printf("Enter 1st num:");
     scanf("%d", &a);
     printf("Enter 2nd num:");
     scanf("%d", &b);

     swap(&a,&b);


     printf("1st =%d\n",a);
     printf("2nd =%d",b);


    return 0;
}
#include <stdio.h>
int main()
{
    int a=5;
    int* x=&a; // int * integers address
    printf("&a=%p\n", &a);
    printf("x=%p\n", x);
    printf("*x=%d\n", *x);
    *x=7;
    printf("a=%d\n", a); // a is changed
    int **y=&x; // int ** -> int*'s address (Double pointer)
    int ***z=&y;
    printf("y=%p\n", y);
    printf("a=%d\n", a);
    printf("*x=%d\n", *x);
    printf("**y=%d\n", **y);
    printf("***z=%d\n", ***z);



    return 0;
}
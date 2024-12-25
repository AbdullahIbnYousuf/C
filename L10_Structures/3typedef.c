#include <stdio.h>
typedef float realnum;
typedef int Integer;
int main()
{
    Integer x = 500;
    realnum y = 10.50;

    printf("%.2f\n", y);
    printf("%d", x);
    
    return 0;
}
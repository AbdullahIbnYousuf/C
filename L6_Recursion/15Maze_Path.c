#include <stdio.h>
int maze (int r, int c){
    if(r==1 || c==1) return 1;

    int t= maze(r-1,c)+maze(r,c-1);
    return t;
}

int main()
{
    int a=5;
    printf("%d", maze(2,3));

    return 0;
}
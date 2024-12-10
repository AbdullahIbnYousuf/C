#include <stdio.h>
int main()
{
    char str[10]="Tonmoy";
    int n=3;

    for (int i = 6; i >= n; i--)
    {
        str[i+1]=str[i];
    }
    str[n]='o';
    printf("%s", str);

    return 0;
}
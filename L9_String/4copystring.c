#include <stdio.h>
#include <string.h>
int main()
{
    // char s1[] = "Physics Wallah";
    // char *s2=s1;//not a deep copy, shallow copy
    // s1[0]='M';
    // printf("%s", s2);

    char *s3= "physics";
    char *s4;
    s4="Math";

    printf("%s", s3);

    return 0;
}
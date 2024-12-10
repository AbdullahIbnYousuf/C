#include <stdio.h>
int main()
{
    char str[]= "Abu Abdullah";
    // printf("%p \n", &str[0]);
    // printf("%p", str); // both same

    // char *ptr="alal";
    char *ptr=str;
    // ptr="rahim";
     //ptr points to ptr[0] 
     //its read only, not editable  individually but entirely can be edited
    *ptr='k';

    // char str[]="alal"; //this way with array is editable
    // str[0]='j';
    // printf("%s", str);

    printf("%s", ptr);

    // printf("%c", *ptr);

    // printf("%s", str);

    // int i=0;
    // while(*ptr!='\0'){
    //     printf("%c", *ptr);
    //     i++;
    //     ptr++;
    // }

    return 0;
}
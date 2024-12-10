#include <stdio.h>
#include <string.h>
int main()
{
    // char str []= "CollegeWallah";

    char str[40];
    // scanf("%s", str); //only first word considered
    // gets(str); // full sentence
    scanf("%[^\n]s", str); // also takes full sentence




    // str[1] = 'b';

        // printf("%s", str);
        puts(str);
        // puts("Hello");

    // int i = 0;
    // while(str[i]!='\0'){
        // printf("%c", str[i]); //all of these works
        // printf("%c", i[str]);
        // printf("%c", *(i+str));

        // i++;

    // }

    return 0;
}
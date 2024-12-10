#include <stdio.h>
#include <string.h>
int main()
{
    //strlen
    // char * str= "Tonmoy";
    // int x = strlen(str);
    // printf("%d", x);

    char s1 [20]="Tonmoy";
    char s2 [20]="gslfk";

    //strcpy
    // strcpy(s2,s1);
    // s2[0]='M';
    // printf("%s", s2);

    //strcat
    // strcat(s1,s2);
    // printf("%s", s1);

    //strcmp
    // if (strcmp(s1,s2))
    //     {
    //         printf("No");
    //     }
    // else 
    //     {
    //         printf("Yes");
    //     }
    // printf("%d", strcmp(s1,s2));



    //strncpy
    strncpy(s1, s2, 3);
    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}


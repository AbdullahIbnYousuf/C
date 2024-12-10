#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], rstr[100]={'\0'};
    puts("Enter a string");
    gets(str);
    puts("The reverse is :");


    for (int i = 0; i <= 5; i++)
    {
        rstr[5-i]=str[i];
    }
    
    puts(rstr);

    return 0;
}
// for (int i = 0, j=5; i <= j; i++, j--)
// {
//     char temp=str[i];
//     str[i]=str[j];
//     str[j]=temp;
// }
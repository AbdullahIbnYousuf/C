#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct person
    {
        char name[15];
        float salary;
        int age;

    } p ;

    p p1;
    p1.age = 50;
    p1.salary = 50000.50;
    strcpy(p1.name, "Rahim");
    
    printf("%d\n", p1.age);
    puts(p1.name);

    return 0;
}
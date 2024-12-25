#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct person
    {
        char name[15];
        float salary;
        int age;

    } person ;

    person a,b;
    a.age = 50;
    a.salary = 50000.50;
    strcpy(a.name, "Rahim");

    b=a; // deep copy
    strcpy(b.name, "Karim");

    printf("%d\n", b.age);
    printf("%s", b.name);
    
    return 0;
}
#include <stdio.h>
#include <string.h>

typedef struct student{

    int roll;
    char name[15];
    char dept[20];
    char course[20];
    int year;
} student;

void check (student a, student b){
    
    if (!strcmp(a.course,b.course))
    {
        printf("Same Dept");
    }
    return;
    
}

int main()
{
    
    student a;
    a.roll=246;
    strcpy(a.name, "Abdullah");
    strcpy(a.dept, "CSE");
    strcpy(a.course, "CSE");
    a.year=2023;

    student b;
    b.roll=246;
    strcpy(b.name, "Abdullah");
    strcpy(b.dept, "CSE");
    strcpy(b.course, "CSE");
    b.year=2023;

    check(a,b);

    return 0;
}
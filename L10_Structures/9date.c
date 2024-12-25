#include <stdio.h>
#include <stdbool.h>

int main()
{
    
typedef struct date{
    int date;
    int month;
    int year;
} date;
date a,b;

a.date=5;
a.month=12;
a.year=1999;

b.date=5;
b.month=12;
b.year=1999;

bool flag = true;
if(a.date!=b.date) flag = false;
if(a.month!=b.month) flag = false;
if(a.year!=b.year) flag = false;

if (flag == true)
{
    printf("Same");
}
else
{
    printf("Different");
}

    return 0;
}
#include <stdio.h>
#include <string.h>
struct book
{
    char name[50];
    int total_page;
    float price;
} a, b, c;

struct specialbook
{
    float VATandCustom;
    struct book x;
};

int main()
{

    struct specialbook HarryPotter;
    HarryPotter.x.price = 1010.25;

    a.total_page = 100;
    a.price = 411.5;
    strcpy(a.name, "Secret Seven");

    puts(a.name);
    printf("Harry Potter price: %f", HarryPotter.x.price);

    return 0;
}
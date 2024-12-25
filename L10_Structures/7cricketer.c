#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct cricketer
    {
        char name[15];
        int age;
        int matches;
        float average;
    } cricketer;

    cricketer arr[2];

    for (int i = 0; i < 2; i++)
    {
        scanf("%[^\n] ", arr[i].name);
        scanf("%d", &arr[i].age);
        scanf("%d", &arr[i].matches);
        scanf("%f", &arr[i].average);
        getchar();  //Buffer issue
    }
    
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        printf("name: %s\n", arr[i].name);
        printf("age : %d\n", arr[i].age);
        printf("matches : %d\n", arr[i].matches);
        printf("average : %.2f\n", arr[i].average);
        printf("\n");
    }
    

    return 0;
}
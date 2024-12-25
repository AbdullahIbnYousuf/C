#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon{
        int attack;
        int hp;
        int speed;
        char tier;
        char name[15];
    } pokemon;

    pokemon arr[3];

    strcpy(arr[0].name,"Pikachu");
    arr[0].attack=50;
    arr[0].hp=100;
    arr[0].speed = 30;
    arr[0].tier='A';

    strcpy(arr[1].name,"Charizard");
    arr[1].attack=50;
    arr[1].hp=100;
    arr[1].speed = 30;
    arr[1].tier='S';

    strcpy(arr[2].name,"Mewtwo");
    arr[2].attack=50;
    arr[2].hp=100;
    arr[2].speed = 30;
    arr[2].tier='G';

    for (int i = 0; i < 3; i++)
    {
        printf("name : %s\n", arr[i].name);
        printf("attack : %d\n", arr[i].attack);
        printf("hp : %d\n", arr[i].hp);
        printf("speed : %d\n", arr[i].speed);
        printf("tier : %c\n", arr[i].tier);
        printf("\n");
    }
    

    return 0;
}
#include <stdio.h>
#include <string.h>

typedef union pokemon
{
    int hp;
    int attack;
    int speed;
    char name[10];
    char tier;

} pokemon;
 


int main()
{
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu"); // only the last one will be stored


    printf("%d \n", pikachu.hp);
    printf("%d \n", pikachu.attack);
    printf("%d \n", pikachu.speed);
    printf("%c \n", pikachu.tier);
    printf("%s \n", pikachu.name);



    return 0;
}
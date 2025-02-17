#include <stdio.h>
#include <string.h>

typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char name[10];
    char tier;

} pokemon;

void change (pokemon p){
    
}


int main()
{
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");


    pokemon*x = &pikachu;

    // printf("%p \n", x);
    // printf("%p \n", &pikachu.hp);
    // printf("%p \n", &pikachu.attack);
    // printf("%p \n", &pikachu.speed);
    // printf("%p \n", &pikachu.name);
    // printf("%p \n", &pikachu.tier);

    printf("%d \n", pikachu.hp);
     (*x).hp=70;
    printf("%d \n", pikachu.hp);


    return 0;
}
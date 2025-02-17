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

void change (pokemon* p){
    // (*p).hp=70; // same as below
    p->hp = 70;
    // (*p).attack=80;
    p->speed=110;
    (*p).speed=110;
    (*p).tier='B';
    strcpy((*p).name,"Raichu");
}


int main()
{
    // pokemon pikachu;
    // pikachu.hp=60;
    // pikachu.attack=70;
    // pikachu.speed=100;
    // pikachu.tier='A';
    // strcpy(pikachu.name,"Pikachu");
    pokemon pikachu = {60,70,100,"Pikachu",'A'};


    pokemon*x = &pikachu;
    
    // printf("%c \n", &pikachu.tier); // prints the address
    // printf("%s \n", &pikachu.name);

    // printf("%d \n", pikachu.hp); // changes the value
    //  (*x).hp=70;
    // printf("%d \n", pikachu.hp);


    printf("%d \n", pikachu.hp);
    printf("%d \n", pikachu.attack);
    printf("%d \n", pikachu.speed);
    printf("%c \n", pikachu.tier);
    printf("%s \n", pikachu.name);
    
    change(&pikachu);


    printf("%d \n", pikachu.hp);
    printf("%d \n", pikachu.attack);
    printf("%d \n", pikachu.speed);
    printf("%c \n", pikachu.tier);
    printf("%s \n", pikachu.name);


    return 0;
}
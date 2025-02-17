#include <stdio.h>
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

void fun (pokemon p){
    printf("%d \n", p.hp);
    return;
}

void change (pokemon p){
    p.hp=70;
    p.attack=60;
    p.speed=110;
    return;
}

int main()
{
    pokemon p;
    p.hp=100;
    fun(p);
    change(p);

    printf("%d\n", p.hp);
    printf("%d", p.attack);

    return 0;
}
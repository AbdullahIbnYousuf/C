#include <stdio.h>
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

void fun (pokemon p){
    printf("%d", p.hp);
    return;
}

int main()
{
    pokemon p;
    p.hp=100;
    fun(p);

    return 0;
}
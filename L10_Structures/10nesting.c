#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    typedef struct legendarypokemon{
        pokemon normal;
        char ability[10];
    } legendarypokemon;

    typedef struct godpokemon{
        int specialattack;
        legendarypokemon legend;
    } godpokemon;



    legendarypokemon mewtwo;
    mewtwo.normal.attack=180;
    strcpy(mewtwo.ability, "Pressure");

    godpokemon arceus;
    arceus.legend.normal.attack=1000;

    printf("%d", arceus.legend.normal.attack);

    return 0;
}
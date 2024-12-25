#include <stdio.h>
struct pokemon
{

    int hp;
    int speed;
    int attack;
    char tiar;
} pikachu, charizard, mewtwo;

int main()
{
    // struct pokemon pikachu;
    printf("Enter pikachu hp: ");
    scanf("%d", &pikachu.hp);
    // pikachu.hp=50;
    pikachu.attack = 60;
    pikachu.speed = 100;
    pikachu.tiar = 'A';

    // struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tiar = 'S';

    // struct pokemon mewtwo;
    mewtwo.attack = 170;
    mewtwo.hp = 150;
    mewtwo.speed = 200;
    mewtwo.tiar = 'G';

    printf("%d", pikachu.hp);

    return 0;
}
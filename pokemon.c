#include <stdio.h>
#include "pokemon.h"

struct tp_atributos{
    int HP;
    int ataque;
    int defesa;
    int ataque_especial;
    int defesa_especial;
    int velocidade;
};

struct pokemon_{
    char nome [50];
    char tipo_primario [20];
    char tipo_secundario [20];
    struct tp_atributos atributos;
    //struct tp_ataque ataque;
}
pokemon;

void cadastrar_pokemon(POKEMON *pokedex, int i){
    scanf("%s", pokedex[i].nome);
    scanf("%s", pokedex[i].tipo_primario);
    scanf("%s", pokedex[i].tipo_secundario);
    scanf("%d", &pokedex[i].atributos.HP);
    scanf("%d", &pokedex[i].atributos.ataque);
    scanf("%d", &pokedex[i].atributos.defesa);
    scanf("%d", &pokedex[i].atributos.ataque_especial);
    scanf("%d", &pokedex[i].atributos.defesa_especial);
    scanf("%d", &pokedex[i].atributos.velocidade);
}

void mostrar_pokemon(POKEMON *pokedex,int i){
    printf("Nome do Pokemon: %s\n", pokedex[i].nome);
    printf("Tipo primario: %s\n", pokedex[i].tipo_primario);
    printf("Tipo secundario: %s\n", pokedex[i].tipo_secundario);
    printf("Status:\n");
    printf("\tHP: %d\n", pokedex[i].atributos.HP);
    printf("\tAtaque: %d\n", pokedex[i].atributos.ataque);
    printf("\tDefesa: %d\n", pokedex[i].atributos.defesa);
    printf("\tAtaque Especial: %d\n", pokedex[i].atributos.ataque_especial);
    printf("\tDefesa Especial: %d\n",pokedex[i].atributos.defesa_especial);
    printf("\tVelocidade: %d\n\n", pokedex[i].atributos.velocidade);
}

#include <stdio.h>
#include "ataque.h"

struct ataque_{
    char nome[20];
    int poder_base;
    char classe[1];
    float acuracia;
}ataque;

void cadastrar_ataque(ATAQUE *pokedex, int i){
    scanf("%s", pokedex[i].nome);
    scanf("%f", &pokedex[i].acuracia);
    scanf("%d", &pokedex[i].poder_base);
    scanf("%s", pokedex[i].classe);
}
void mostrar_ataque(ATAQUE *pokedex, int i){
    printf("Nome do Ataque: %s\n", pokedex[i].nome);
    printf("Poder base: %d\n", pokedex[i].poder_base);
    printf("Acuracia: %f\n", pokedex[i].acuracia);
    printf("Classe: %s\n\n", pokedex[i].classe);
}
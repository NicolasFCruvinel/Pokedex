#include "pokemon.h"
#include "ataque.h"
#include <stdio.h>

int len(POKEMON vector[]){
    int i = 0;
    while (vector[i] != 0)
        i++;
    return(i);
}

int main() {

    POKEMON pokemons[4] = {0};
    ATAQUE ataques[12]={0};
    int i = 10;

    while (i!=0){
        printf("Menu Pokedex:");
        printf("1. Adicionar pokemon.");
        printf("2. Ver pokemon.");
        printf("3. Adcionar habilidade.");
        printf("4. Ver habilidade");
        scanf("%d", &i);
        switch (i) {
            case 0 :
                i = 5;
                break;
            case 1 :
                cadastrar_pokemon(pokemons[i]);
                break;
            case 2 :
                mostrar_pokemon(pokemons[i]);
                break;
            case 3 :
                cadastrar_ataque();
                break;
            case 4 :
                mostrar_ataque();
                break;
            default :
                printf("Valor invalido!\n");
                break;
        }
        getch();
    }

    return 0;
}
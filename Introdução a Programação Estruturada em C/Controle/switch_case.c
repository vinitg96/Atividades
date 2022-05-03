#include <stdio.h>

void main () {

    int opcao;

    printf("Escolha um numero: \n");
    scanf("%i", &opcao);

    switch(opcao){
        case 1: {
            printf("Numero 1 \n");
            break;
        }
        case 2: {
            printf("Numero 2 \n");
            break;
        }

        default: printf("è um numero");
    }


    printf("Final do programa");
}
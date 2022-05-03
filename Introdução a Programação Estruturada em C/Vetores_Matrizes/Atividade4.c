#include <stdio.h>
//Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. 
//Copie para um segundo vetor de 50 números inteiros cada elemento do primeiro, 
//observando as seguintes regras:



void main(){
    const int vector_size = 5;
    int list1[vector_size];
    int list2[vector_size];
    int i;

    for (i =0; i<vector_size; i+=1){
        printf("Digite o elemnto %i da lista\n", i);
        scanf("%i", &list1[i]);

        if (list1[i] % 2 == 0){
            list2[i] = list1[i] + 1;
        } else {
            list2[i] = list1[i] - 1;
        }

    }
    printf("\nElementos escolhidos:\n");
    for (i = 0; i < vector_size; i+=1){
        printf("\nLista 1: %i | Lista 2: %i\n", list1[i], list2[i]);
    }


}



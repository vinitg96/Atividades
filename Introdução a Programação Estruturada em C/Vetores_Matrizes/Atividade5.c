#include <stdio.h>

//Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor.
//Na sequência, leia uma lista de 10 números inteiros e verifique se cada um deles está contido em alguma posição do vetor. 
//Em caso positivo, mostre a posição do vetor em que ele se encontra.

void main(){
    const int size = 5;
    int vector[size];
    int i1;
    int i2;
    int to_ver[size*2];

    printf("Digite elementos de um vetor de tamanho %i", size);
    for (i1 = 0; i1<size; i1+=1){
        scanf("%i", &vector[i1]);4
        
    }

    printf("Digite elementos de um vetor de tamanho %i", size*2);
    for (i2 = 0; i2 < size*2; i2+=1){
        scanf("%i", &to_ver[i2]);

        for (i1 = 0; i1<size; i1 +=1){
            if (to_ver[i2] == vector[i1]) {
                printf("Elemento %i da verificação está na posição %i da lista original", i2,i1);

            } 
        }

    }


}
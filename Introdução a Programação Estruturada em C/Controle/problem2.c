#include <stdio.h>
// desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles.

void main(){

    int num, maior, i;

    maior = 0;

    for(i=1; i <=15; i+=1){
        printf("Digite um número: ");
        scanf("%i", &num);

        if (num > maior){
            maior = num;
        }
    }

    printf("O maior número é: %i\n", maior);
}
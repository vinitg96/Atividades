#include <stdio.h>

// Faça um programa que leia 10 números inteiros e mostre-os na ordem inversa em que foram lidos.
// Comentarios consideram enunciado com 3 números, facilita visualização

void main(){

    int i, lista[11]; //três numeros [0],[1] e [2], lista[3] = \0
    
    printf("Digite três número: \n");

    for(i = 0; i<10; i+=1){  // 0, 1 e 2
        scanf("%d", &lista[i]);
    }

    printf("Ordem inversa: \n");
    for (i = 9; i>=0; i-=1){      //2,1,0. O [3] seria um numero aletaroio. o [10] é aleatorio, começa do 9
        printf("%i\n", lista[i]);

    }
   
}
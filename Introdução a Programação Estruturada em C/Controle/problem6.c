#include<stdio.h>
// desenvolva um programa que leia um número N e, em seguida, 
//uma lista de N números inteiros. Este programa também deve calcular e 
//mostrar a soma dos números pares e dos números ímpares da lista.

void main(){
    int i, N, num, parSum, imparSum;
    parSum= 0;
    imparSum = 0;
    printf("Tamanho da lista: ");
    scanf("%i", &N);

    for(i=1; i <= N; i+=1){
        printf("\nNumero a adicionar: ");
        scanf("%i", &num );
        if (num % 2 == 0){
            parSum+=num;
        } else{
            imparSum+=num;
        }
    }
    printf("\nA soma dos numeros pares é: %i", parSum);
    printf("\nA soma dos numeros impares é: %i\n", imparSum);
}
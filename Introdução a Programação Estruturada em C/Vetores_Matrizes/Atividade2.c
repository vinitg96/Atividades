#include <stdio.h>

//Faça um programa que leia a nota de 20 alunos da turma e mostre as que são iguais ou 
//superiores à média da turma.

void main(){
    const int num_notas = 5;
    float notas[num_notas+1], soma, media;
    int i;
    soma = 0;
    

    printf("Digite as notas\n");

    for (i = 0; i<num_notas; i+=1){
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma / num_notas;

    for (i = 0; i <num_notas; i+=1){
        if (notas[i] > media){
            printf("Nota %.2f foi maior que a média\n", notas[i]);
        }
    }
}
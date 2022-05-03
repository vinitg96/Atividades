#include<stdio.h>

//2º problema: desenvolva um programa que leia 3 notas de 40 alunos, 
//calcule e mostre a média aritmética e a situação de aprovação de cada aluno. 
//Lembre-se que apenas a média igual ou acima de 7 aprova o aluno.

void main(){
    int i;
    float nota1,nota2,nota3,media;

    i = 1;
    while(i <=4){

        printf("\nInsira a primeira nota do aluno %i: ", i);
        scanf("%f", &nota1);

        printf("Insira a segunda nota do aluno %i: ", i);
        scanf("%f", &nota2);

        printf("Insira a primeira nota do aluno %i: ", i);
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3)/3;

        if (media >= 7){
            printf("O aluno %i foi aprovado com média %2.f\n", i, media);
        } else {
            printf("O aluno %i foi reprovado com média %2.f\n", i, media);
        }
        i+=1;
    }

}
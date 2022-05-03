#include<stdio.h>
// desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada um deles. Lembre-se que apenas a média igual ou acima de 7 aprova o aluno.


void main(){
    int i;
    float nota1, nota2, nota3, media;

    for(i=1;i < 4; i+=1){
        printf("Primeira Nota do Aluno %i: ", i);
        scanf("%f", &nota1);

        printf("Segunda Nota do Aluno %i: ", i);
        scanf("%f", &nota2);

        printf("Terceira Nota do Aluno %i: ", i);
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        if (media >= 7){
            printf("Aluno %i aprovado com média %.2f\n\n", i,media);
        } else {
            printf("Aluno %i reporvado com média %.2f\n\n", i,media);
        }
    }
}


#include<stdio.h>

// desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos salários dos 
//funcionários de uma empresa. Na sequência, deve ler o salário de cada um dos 50 
//funcionários, calcular e mostrar o novo salário reajustado, aplicando a porcentagem de 
//ajuste sobre os respectivos salários atuais.
// Ao final, o maior salário reajustado da empresa deve ser apresentado na tela.

void main(){
    float reajuste, salario, novo_salario, maior;
    int i;

    printf("Determine o reajuste em %%: ");
    scanf("%f", &reajuste);
    reajuste = reajuste / 100;
    maior = 0;

    for(i=1; i<6; i+=1){
        printf("\n\nSalário do funcionário %i: "  ,i );
        scanf("%f", &salario);

        novo_salario = (salario * reajuste) + salario;
        printf("Salário Reajustado do funcionário %i: %2.f" , i, novo_salario);

        if (novo_salario > maior){
            maior = novo_salario;
        }
    }

    printf("\n\nO maior salário é %2.f", maior);

}


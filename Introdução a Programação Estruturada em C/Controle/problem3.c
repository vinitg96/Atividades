#include<stdio.h>

//desenvolva um programa que leia o salário de 10 funcionários de uma empresa, calcule e mostre o maior salário e a média salarial da empresa.

void main(){
    int i; 
    float salario, cumsum, maior; 
    cumsum, maior = 0;

    for (i=1; i <=10; i+=1){
        printf("Salário do Funcionário %i: ", i);
        scanf("%f", &salario);
        cumsum += salario;
        if (salario > maior){
            maior = salario;
        }
    }

    printf("A média salarial é: %.2f e o maior salário é: %.2f \n", cumsum / i, maior);

}
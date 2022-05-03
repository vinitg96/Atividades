#include <stdio.h>
void main(){
    char nome[5]; //char[4] = \0 quero 4 caracteres V[0] I[1] N[2] I[3] \0[4] -> tamanho 5 
    printf("\nDigite seu nome: ");
    scanf(" %s", nome); // sem o apontador para endereço (&)    
    printf("Seu nome: %s\n\n", nome);

}
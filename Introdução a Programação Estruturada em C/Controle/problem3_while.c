#include <stdio.h>

//3º problema: desenvolver um programa que leia uma sequência de letras (a... z) terminada em ponto (.) 
//e que mostre quantas vezes cada vogal (a, e, i, o, u) apareceu na lista.

void main(){
    
    char letra; 
    int vogal, consoante;
    vogal = 0;
    consoante =0;

    while (letra != '.'){
        printf("Favor insira uma letra: ");
        scanf(" %c", &letra);

        printf("Letra Selecionada: %c\n\n", letra);

        if( letra == 'a' || letra == 'e' || letra=='i' || letra == 'o' || letra == 'u' ){
            vogal +=1;
        } else {
            consoante +=1;
        }
    }

    printf("Número de vogais escrita: %i\n", vogal);
    printf("Número de consoantes escrita: %i\n", consoante);


}
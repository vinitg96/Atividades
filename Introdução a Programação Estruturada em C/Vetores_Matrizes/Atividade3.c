#include <stdio.h>
//Leia uma sequência de letras, terminada na letra (”z”), 
//e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu.

void main() {
    int vogais[5] = {0,0,0,0,0};
    char letra;

    printf("Digite uma letra, z para sair\n");
    while (letra != 'z'){
        scanf(" %c", &letra);

        switch (letra) {
            case 'a':
            vogais[0] +=1;
            break;

            case 'e':
            vogais[1] +=1;
            break;

            case 'i':
            vogais[2] +=1;
            break;

            case 'o':
            vogais[3] +=1;
            break;

            case 'u':
            vogais[4] +=1;
            break; 
            }

        }
    printf("a: %i\n", vogais[0]);
    printf("e: %i\n", vogais[1]);
    printf("i: %i\n", vogais[2]);
    printf("o: %i\n", vogais[3]);
    printf("u: %i\n", vogais[4]);

}



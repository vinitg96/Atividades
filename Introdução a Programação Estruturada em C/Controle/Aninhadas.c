#include <stdio.h>

void main(){
    int numero;
    printf("Digite um número: \n");

    scanf("%i", &numero);

    if (numero >= 0) {
        if (numero == 0){
            printf("Numero Zero");
            } else { printf("Numero Positivo");
            }
    } else {
        printf("Numero Negativo \n");
    }
}
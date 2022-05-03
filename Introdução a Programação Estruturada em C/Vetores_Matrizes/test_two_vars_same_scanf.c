#include <stdio.h>

void main(){
    float altura,peso,imc;
    printf("Entre com sua altura e seu peso: \n");
    scanf("%f %f", &altura,&peso);
    imc = (peso/altura) / altura;
    printf("Seu IMC vale %f", imc);
}


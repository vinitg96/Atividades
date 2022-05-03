#include <stdio.h>

void main(){
    float num1;
    float num2;
    printf("Favor insira dois números\n");
    scanf("%f %f", &num1, &num2);
    printf("A soma de %.1f e %.1f é %.1f\n", num1,num2,num1+num2);
}
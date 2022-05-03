#include <stdio.h>

int main() {

    char opcao;
    int cadastrado, ativo, logado = 0;

    printf("Deseja cadastrar o cliente? S/N \n");
    scanf(" %c", &opcao);
    if (opcao == 'S'){
        cadastrado = 1;
    }

    printf("Deseja ativar o cliente? S/N \n");
    scanf(" %c", &opcao);
    if (opcao == 'S'){
        ativo = 1;
    }

    printf("Deseja logar o cliente? S/N \n");
    scanf(" %c", &opcao);
    if (opcao == 'S');
    logado = 1;

    if( (cadastrado == 1) && (ativo == 1) && (logado == 1) ){
        printf("Bem vindo\n");
    } else {
        printf("Cadastro incorreto\n");
    }    
}

// cadastrado ativo e logado
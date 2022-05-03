#include<stdio.h>

int main(){

   int cadastrado, ativo, logado;

   char opcao;

   cadastrado = ativo = logado = 0;



   printf ("deseja cadastrar sua conta? S/N \n");

   scanf (" %c", &opcao);



      if(opcao == 'S'){

      cadastrado = 1;

      printf("\n conta cadastrada.\n");

   }   



      printf ("deseja ativar sua conta? S/N \n");

   scanf ("%c", &opcao);



      if(opcao == 'S'){

         ativo = 1;

      printf ("\n conta ativada. \n ");

   }   



   printf ("deseja logar sua conta? S/N \n");

   scanf ("%c", &opcao);



      if(opcao == 'S'){

         logado = 1;

      printf("\n conta logada. \n ");

}



   if((cadastrado == 1) && (ativo == 1) && (logado == 1)){

      printf("Seja Bem Vindo \n");

   }else {

   printf("\nAlgo deu Errado. \n");   



}



}
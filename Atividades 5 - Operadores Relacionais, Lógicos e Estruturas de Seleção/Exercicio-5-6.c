/*6. Codifique um programa que lê um número inteiro. 
A seguir o programa deve imprimir uma mensagem para o usuário dizendo se o número digitado é par. 
Se o número não for par, o programa não deve fazer nada.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int numero;

/*=============Execução==============*/
int main(){

    printf("escreva um numero \n");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Esse numero e par !!! \n");
    }    
}
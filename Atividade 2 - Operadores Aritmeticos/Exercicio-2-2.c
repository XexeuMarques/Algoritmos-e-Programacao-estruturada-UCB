/*Escreva um programa que receba um número qualquer e mostre o seu dobro.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int numero;
int dobro;

/*=============Execução==============*/
int main(){
    printf("Digite um numero\n");
    scanf("%d", &numero);

    dobro = numero * 2;

    printf("O dobro desse numero e %d", dobro);
    return 0;
}
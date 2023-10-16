/*Crie um programa que le  6 valores inteiros e, em seguida mostre na tela os valores lidos*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int valor[5];
/*=============Execução==============*/
int main(){

    for (int i = 0; i < 6; i++) {
        printf("\nDigite o valor para a posição %d:", i + 1);
        scanf("%d", &valor[i]);
    }

    for (int i = 0; i < 6; i++) {
        printf("\n%d", valor[i]);
    }
}
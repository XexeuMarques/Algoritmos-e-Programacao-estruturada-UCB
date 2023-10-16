/*Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int vetor[5];

/*=============Execução==============*/
int main(){

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero natural para a posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("os numeros digitados de traz pra frente e:\n");
    for (int i = 4; i > -1; i--) {
        printf("posição %d = %d \n",i + 1, vetor[i]);
    }
}
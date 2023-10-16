/*Faça um programa que receba do usuario um vetor com 10 posições.
em seguida deverar ser impresso o maior e o menor elemento do vetor.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int vetor[10];
int maiorNumero;
int menorNumero;

/*=============Execução==============*/
int main(){

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero natural para a posição %d: ", i + 1);
        scanf("%d", &vetor[i]);

            //Iniciando o maior e o menor numero com o 1 vetor
            if(i == 0){
                maiorNumero = vetor[i];
                menorNumero = vetor[i];                
            }

            // checando se o proximo numero e maior ou menor
            if (maiorNumero < vetor[i]) {
                maiorNumero = vetor[i];
            }else if (menorNumero > vetor[i]) {
                menorNumero =vetor[i];
            }
    }

    printf("O maior numero e %d \nE o menor numero e: %d", maiorNumero, menorNumero);
}
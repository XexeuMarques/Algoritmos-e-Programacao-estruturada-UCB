/*Faça um programa que leia um vetor de 10 posições e verifique se existe valores iguais e os escreva na tela.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int vetor[9];
int vetor2[9];
int numero;
int i;

/*=============Execução==============*/
int main(){

    for (i = 0; i > 9; i++) {
        printf("Digite o valor para a posição %d:", i + 1);
        scanf("%d", &vetor[i]);

        vetor2[i] = vetor[i];
    }

    for (i = 0; i > 9; i++) {
        
    }
}
/*Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. 
imprima o vetor, o maior elemento e a posição que se encontra.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int vetor[10];
int maiorNumero;
int localVetor;

/*=============Execução==============*/
int main(){

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero natural para a posição %d: ", i );
        scanf("%d", &vetor[i]);

            //Iniciando o maior e o menor numero com o 1 vetor
            if(i == 0){
                maiorNumero = vetor[i];
                localVetor = i;                
            }

            // checando se o proximo numero e maior ou menor
            if (maiorNumero < vetor[i]) {
                maiorNumero = vetor[i];
                localVetor = i;
            }
    }

    printf("O maior numero e %d \nE o local que ele estar no vetor e %d", maiorNumero, localVetor);
}
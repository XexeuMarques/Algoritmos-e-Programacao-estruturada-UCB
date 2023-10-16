/*Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos jusntamente com o maior e o menor e a media dos valores.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int vetor[5];
int maiorNumero;
int menorNumero;
int media;

/*=============Execução==============*/
int main(){

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero para a posição %d: ", i + 1);
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
        
        media += vetor[i];
    }

    media = media / 5;

    printf("O maior numero e %d \nE o menor numero e: %d \nE a media e %d", maiorNumero, menorNumero, media);
}
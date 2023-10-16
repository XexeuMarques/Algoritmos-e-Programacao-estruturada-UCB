/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int vetor[5];
int posicaoMaiorNumero;
int posicaMenorNumero;
int maiorNumero;
int menorNumero;

/*=============Execução==============*/
int main(){

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero para a posição %d: ", i + 1);
        scanf("%d", &vetor[i]);

            //Iniciando o maior e o menor numero com o 1 vetor
            if(i == 0){
                maiorNumero = vetor[i];
                menorNumero = vetor[i];   
                posicaoMaiorNumero = i + 1;
                posicaMenorNumero = i +1;                             
            }

            // checando se o proximo numero e maior ou menor
            if (maiorNumero < vetor[i]) {
                maiorNumero = vetor[i];
                posicaoMaiorNumero = i + 1;
            }else if (menorNumero > vetor[i]) {
                menorNumero = vetor[i];
                posicaMenorNumero = i + 1;  
            }
    }


    printf("A posição do maior numero e %d \nA posição do menor numero e: %d ", posicaoMaiorNumero, posicaMenorNumero);
}
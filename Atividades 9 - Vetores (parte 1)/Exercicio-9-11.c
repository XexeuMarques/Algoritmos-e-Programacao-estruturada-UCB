/*Faça um programa que preencha um vetor com 10 numeros reais, 
calcule e mostre a quantidade de numeros negativos e a soma dos numeros positicos desse vetor*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int vetor[10];
int contadorNegativos;
int soma;

/*=============Execução==============*/
int main(){

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero natural para a posição %d: ", i + 1);
        scanf("%d", &vetor[i]);

        //Adicionando contador negativos
        if (vetor[i] < 0) {
            contadorNegativos++;
        }else if (vetor[i] > 0) {
            soma+= vetor[i];
        }
    }

    printf("Existem %d numeros negativos \nE a soma dos positivos e %d", contadorNegativos, soma);
    
    
}
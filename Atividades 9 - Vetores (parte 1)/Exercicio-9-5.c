/*Leia um vetor de 10 posições. contar e escrever quantos valores pares ele possui.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int vetor[10];
int numeroDePar = 0;
/*=============Execução==============*/
int main(){

    for (int i = 0; i < 10; i++) {
    printf("Digite o numero natural para a posição %d: ", i + 1);
    scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            numeroDePar++;
        }
    }

    printf("Neste vetor existem %d numeros pares!!", numeroDePar);
    
}
/*Faça um programa que leia um vetor de 9 posições e, em seguida, 
leia tambem dois valores X e Y quaisquer correspondentes a duas posições no vetor.
ao final seu prograna deverar escrever a soma dos valores encontrados nas respectivas posições X e Y. */
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int vetor[8];
int x;
int y;

/*=============Execução==============*/
int main(){

        for (int i = 0; i < 9; i++) {
        printf("Digite o numero natural para a posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
        }

        printf("Escolha uma posição: ");
        scanf("%d", &x);

        //Validador de possição x
        while(x < 1 || x > 9){
            printf("Posição invalida!! \n Digite uma possição existete (de 1 a 9): ");
            scanf("%d", &x);
        }

        printf("Escolha outra posição: ");
        scanf("%d", &y);

        //Validador de possição y
        while(y < 1 || y > 9){
            printf("Posição invalida!! \n Digite uma possição existete (de 1 a 9): ");
            scanf("%d", &y);
        }
    
        printf("A soma da posição %d = (%d) com a posição %d = (%d) e:\n %d", x, vetor[x], y, vetor[y], vetor[x] + vetor[y]);
}
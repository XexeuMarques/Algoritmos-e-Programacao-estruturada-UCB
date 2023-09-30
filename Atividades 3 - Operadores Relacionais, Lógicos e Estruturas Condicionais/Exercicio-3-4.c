/*Leia o peso e imprima se é menor que 60kg*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int peso;

/*=============Execução==============*/
int main(){

    printf("Qual e o seu peso? \n");
    scanf("%d", &peso);

    if (peso < 60) {
        printf("Seu peso não e maior que 60Kg \n");
    }
    else {
        printf("Seu peso e maior que 59Kg \n");
    }
}
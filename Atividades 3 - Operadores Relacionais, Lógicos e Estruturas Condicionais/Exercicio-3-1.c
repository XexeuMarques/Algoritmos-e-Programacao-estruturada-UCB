/*Leia a idade e imprima se a pessoa é maior*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int idade;

/*=============Execução==============*/
int main(){

    printf("Qual e a sua idade? \n");
    scanf("%d", &idade);

    if (idade > 18) {
        printf("Parabems voce e maior de idade \n");
    }
    else if (idade <= 0) {
        printf("Voce ainda nem naceu \n");
    }
    else {
        printf("então voce e menor de idade \n");
    }
}
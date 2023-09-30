/*Leia a altura e imprima se é maior que 1.8m*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
float altura;

/*=============Execução==============*/
int main(){

    printf("Qual e a sua altura? \n");
    scanf("%f", &altura);

    if (altura <= 1.8) {
        printf("Voce não e mais alto e 1.80 m \n");
    }else {
        printf("Voce e mais alto do que 1.80 metros \n");
    }
}
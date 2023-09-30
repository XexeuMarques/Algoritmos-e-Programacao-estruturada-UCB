/*Leia o salário e imprima se ganha mais que o salário mínimo*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
float salario;
float salarioMinimo = 1300.20; // Salario 2023

/*=============Execução==============*/
int main(){

    printf("Qual e o seu salario? \n");
    scanf("%f", &salario);

    if (salario <= salarioMinimo) {
        printf("Voce não recebe mais que um salario minimo \n");
    }else {
        printf("Parabem!! Voce recebe mais que um salario minimo \n");
    }
}
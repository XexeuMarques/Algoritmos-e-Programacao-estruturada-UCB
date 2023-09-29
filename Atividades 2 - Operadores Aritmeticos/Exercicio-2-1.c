/*Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int numero1;
int numero2;
int soma, subitracao, resto;
float divisao, mutiplicacao;

/*=============Execução==============*/
int main(){

    printf("Escreva a primeiro numero:\n");
    scanf("%d", &numero1);
    printf("escreva o segundo numero:\n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subitracao = numero1 - numero2;
    divisao = numero1 / numero2;
    mutiplicacao = numero1 * numero2;
    resto = numero1 % numero2;

    printf("A SOMA, SUBITRAÇÃO, DIVISÃO, MUTIPLICAÇÂO e o RESTO, da soma destes dois numeros estão asseguir segundo a ordem:\n %d \n %d \n %.2f \n %.2f \n %d \n", soma, subitracao, divisao, mutiplicacao, resto);

}
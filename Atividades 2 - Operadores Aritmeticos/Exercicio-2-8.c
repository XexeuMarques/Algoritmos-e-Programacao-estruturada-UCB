/*Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. 
Calcular e escrever o valor do novo salário.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
float salario;
int percentualDeAjuste;
float salarioReajustado;

/*=============Execução==============*/
int main(){

    printf("qual o seu salario mensal?\n");
    scanf("%f", &salario);

    printf("Qual percentual de ajuste deseja?\n");
    scanf("%d", &percentualDeAjuste);

    salarioReajustado = salario + (salario * percentualDeAjuste / 100);

    printf("O salario reajustado com %d %% de almento e:\n $ %.2f Reais.\n", percentualDeAjuste, salarioReajustado);
}
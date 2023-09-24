/*Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. 
Calcular e escrever o valor do novo salário.*/
#include <stdio.h>

int main(){
    float salario;
    int percentualDeAjuste;
    float salarioReajustado;

    printf("qual o seu salario mensal?\n");
    scanf("%f", &salario);

    printf("Qual percentual de ajuste deseja?\n");
    scanf("%d", &percentualDeAjuste);

    salarioReajustado = salario + (salario * percentualDeAjuste / 100);

    printf("O salario reajustado com %d %% de almento e:\n $ %.2f Reais.\n", percentualDeAjuste, salarioReajustado);
}
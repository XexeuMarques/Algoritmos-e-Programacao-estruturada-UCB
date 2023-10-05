/*1. Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x). 
f(x) = 5x + 3 / √x² - 16
*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>
#include <math.h>
/*=============VARIAVEIS=============*/
double x, resutadoDeX;

/*=============Execução==============*/
int main(){

    printf("Digite o valor de X: \n");
    scanf("%lf", &x);

    resutadoDeX = (5 * x + 3) / sqrt(x * x - 16);

    printf("o valor de f(x) e: %lf \n", resutadoDeX);
}
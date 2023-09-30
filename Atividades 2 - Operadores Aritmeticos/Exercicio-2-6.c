/*Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
float raio;
float area;

/*=============Execução==============*/
int main(){

    printf("qual o tamaho do raio do circulo?\n");
    scanf("%f", &raio);

    area = 3.1415 * (raio * raio);

    printf("A area deste circulo e de:\n %.2f", area);
}
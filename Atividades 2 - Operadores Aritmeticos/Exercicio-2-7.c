/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, 
meses e dias e escreva a idade dessa pessoa expressa apenas em dias. 
Considerar ano com 365 dias e mês com 30 dias.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int anoNacimento;
int diaNacimento;
int mesNacimento;
int diasVividos;

/*=============Execução==============*/
int main(){

    printf("voce naceu em que ano?\n");
    scanf("%d", &anoNacimento);

    printf("Voce naceu em que mes?\n exemplo: mes ->1, 2, 3 \n");
    scanf("%d", &mesNacimento);

    printf("Voce naceu em que dia?\n");
    scanf("%d", &diaNacimento);

    diasVividos = 365 * (2023 - anoNacimento) + (mesNacimento * 30) - (30 - diaNacimento);

    printf("Voce tem aproximadamente %d dias vividos", diasVividos);
}
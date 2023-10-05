/*2. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. */
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
float chicoAltura = 1.50;
float zeAltura = 1.10;
int anos = 0;

/*=============Execução==============*/
int main(){

    while (zeAltura < chicoAltura) {
        chicoAltura += 0.02;
        zeAltura += 0.03;
        anos++;
    }

    printf("depois %d anos ze passou a altura de chico \n", anos);
    printf("Agora ze tem %.2f e chico tem %.2f de altura \n", zeAltura, chicoAltura);
}
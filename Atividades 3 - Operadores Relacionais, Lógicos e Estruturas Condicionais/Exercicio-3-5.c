/*Avalie a relação abaixo:
10 % 5 ∗ 2 != 5 ∗ 2 + 1
O resultado seria verdadeiro ou falso?*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============Execução==============*/
int main(){

    if (10 % 5 * 2 != 5 * 2 + 1) {
        printf("Verdadeiro");
    }else {
        printf("Falso");
    }
}
/*Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor).*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int A, B, C;

/*=============Execução==============*/
int main(){

    printf("Escreva um numero (A): \n");
    scanf("%d", &A);
    
    printf("Escreva outro numero (B): \n");
    scanf("%d", &B);
    
    printf("Escreva outro numero (C): \n");
    scanf("%d", &C);
    
    if (A > B && A > C) {
        printf("A ordem Decrecente desse numero e: \n");
        printf("%d , ", A);

        if (B > C) {
            printf("%d , %d \n", B, C);
        }
        else {
            printf("%d , %d \n", C, B);
        }
    }
    else if (B > A && B > C) {
        printf("A ordem Decrecente desse numero e: \n");
        printf("%d , ", B);

        if (A > C) {
            printf("%d , %d \n", A, C);
        }
        else {
            printf("%d , %d \n", C, A);
        }
    }
    else {
        printf("A ordem Decrecente desse numero e: \n");
        printf("%d , ", C);

        if (A > B) {
            printf("%d , %d \n", A, B);
        }
        else {
            printf("%d , %d \n", B, A);
        }
    }
}
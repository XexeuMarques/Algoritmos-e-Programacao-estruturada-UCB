/*Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int A, B, C, D;

/*=============Execução==============*/
int main(){

    printf("Digite um numero (A) \n"); 
    scanf("%d", &A);

    printf("Digite outro numero difrente(B) \n");
    scanf("%d", &B);

    printf("Digite outro numero difrente(C) \n");
    scanf("%d", &C);

    printf("Digite outro numero difrente(D) \n");
    scanf("%d", &D);

    if (A > B && A > C && A > D) {
        printf("O %d e o maior numero \n", A);

        if (B < C && B < D) {
            printf("e o %d e o menor numero. \n", B);
        }
        else if (C < D && C < B) {
            printf("e o %d e o menor numero. \n", C);
        }
        else {
            printf("e o %d e o menor numero", D);
        }
    }
    else if (B > A && B > C && B > C) {
        printf("O %d e o maior numero \n", B);

        if (A < C && A < D) {
            printf("e o %d e o menor numero. \n", A);
        }
        else if (C < A && C < D) {
            printf("e o %d e o menor numero. \n", C);
        }
        else {
            printf("e o %d e o menor numero", D);
        }
    }  
    else if (C > A && C > B && C > D) {
        printf("O %d e o maior numero \n", C);

        if (A < B && A < D) {
            printf("e o %d e o menor numero. \n", A);
        }
        else if (B > A && B < D) {
            printf("e o %d e o menor numero. \n", B);
        }
        else {
            printf("e o %d e o menor numero", D);
        }
    }
    else {
        printf("O %d e o maior numero \n", D);

        if (A < B && A < C) {
            printf("e o %d e o menor numero. \n", A);
        }
        else if (B > A && B < C) {
            printf("e o %d e o menor numero. \n", B);
        }
        else {
            printf("e o %d e o menor numero", C);
        }
    }
}
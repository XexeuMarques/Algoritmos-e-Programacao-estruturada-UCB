/*Faça um programa que possua um vetor denominado A que amazene 6 numeros inteiros.
O programa deve executar os seguintes passos:
(A) Atibua os seguintes valores ao vetor: 1, 0, 5, -2, -5, 7.
(B) Armazene em uma variavel inteira (simples) a soma entre os valores nas possição:
A[0], A[1] e A[5] do vetor e mostre a tela esta soma
(C) Modifique o vetor na posição 4, atribuindo esta posição ao valor 100.
(D) Mostre na tela cada valor do vetor A um em cada linha.*/
// 
//Michel Marques dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int A[6] = {1, 0, 5, -2, -5, 7};
int soma;

/*=============Execução==============*/
int main(){

    soma = A[0] + A[1] + A[5];
    printf("A soma e %d \n", soma);

    A[4] = 100;

    for (int contador = 0; contador < 6; contador++) {
        printf("%d \n", A[contador]);
    } 
    
}
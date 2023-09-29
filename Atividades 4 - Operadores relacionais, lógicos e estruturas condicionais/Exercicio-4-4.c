/*Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor).*/
#include <stdio.h>

int A, B, C;

int main(){
    printf("Escreva trez numeros: \n");

    printf("Digite o primeiro numero (A): \n");
    scanf("%d", &A);

    printf("Digite o Segundo numero (B): \n");
    scanf("%d", &B);

    printf("Digite o Terceiro numero (C): \n");
    scanf("%d", &C);

    printf("Os numeros estão a segunte ordem Crecente: \n");
    //inicio A
    if (A > B) {
        if (B > C) {
            printf("%d - %d - %d", A, B, C );
        } else if (C > B) {
            printf("%d - %d - %d", A, C, B );
        }else {
                printf("%d - %d - %d \n O segundo e o Terceiro numeros são iguais", A, C, B );
        }
    }
    //inicio B
    else if (B > A) {
            if (A > C) {
                printf("%d - %d - %d", B, A, C );
            }else if (C > A) {
                printf("%d - %d - %d", B, C, A );
            }else {
                    printf("%d - %d - %d \n O Primeiro e o Terceiro numeros são iguais", A, C, B );
            }
    }
    //inicio C 
    else if (C > A) {
                if (A > B) {
                    printf("%d - %d - %d", C, A, B );
                } else if (B > A) {
                    printf("%d - %d - %d", C, B, A );
                } else {
                    printf("%d - %d - %d \n O Primeiro e o Terceiro numeros são iguais", A, C, B );
                }
            
    }
    else {
        printf("Todos dos numeros são iguais \n");
    }
}
/*Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, 
se está no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores. */
#include <stdio.h>

int numero;

int main(){
    printf("Escreva um numero: \n");
    scanf("%d", &numero);

    switch (numero) {
        case 5:
            printf("O numero e igual a 5 \n");
            break;
        
        case 200:
            printf("O numero e igual a 200 \n");
            break;
        
        case 400:
            printf("o numero e igual a 400 \n");
            break;

        default:
            printf("O numero não e 5 nem 200 nem 400 \n");
            break;
    }

    if (numero >= 5 && numero <= 200) {
        printf("O numero esta entre 5 e 200 \n");
    }
    else if (numero >= 200 && numero <= 400) {
        printf("O numero esta ente 200 e 400 \n");
    }
    else if(numero >= 500 && numero <= 1000){
        printf("O numero esta no intervalo de 500 a 1000 \n");
    }else{
        printf("O numero %d não: \n", numero);
        printf(" Esta entre 5 a 200 \n Esta entre 200 e 400 \n É ou esta entre 500 a 1000 \n");
    }
}
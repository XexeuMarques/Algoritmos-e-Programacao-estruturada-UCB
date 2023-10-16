/*3. Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo,
e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
float A, B, C; 

/*=============Execução==============*/
int main(){

    printf("Digite o tamanho do lado A: ");
    scanf("%f", &A);
    
    printf("Digite o tamanho do lado B: ");
    scanf("%f", &B);

    printf("Digite o tamanho do lado A: ");
    scanf("%f", &B);

    if (A + B > C && A + C > B && B + C > A) {
        printf("e possivel fazer um triangulo!!\n");

        if (A == B && B == C) { //"Triângulo equilátero"
            printf("Isso e um triangulo equilatero");

        }else if (A == B != C || A == C != B || B == C != A) { //Triângulos isósceles
           printf("Isso e um triangulo isósceles");
        }

    }else {
        printf("Não e possivel fazer um triangulo :( ");
    }
}
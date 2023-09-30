/*Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>
#include <math.h>

/*=============VARIAVEIS=============*/
double numero;
double raizQuadradaNumero;
double quadradoNumero;

/*=============Execução==============*/
int main(){
    
    printf("Escreva um numero \n");
    scanf("%lf", &numero);

    raizQuadradaNumero = sqrt(raizQuadradaNumero);
    quadradoNumero = pow(quadradoNumero, 2);

    if (raizQuadradaNumero >= 0) {
        printf("A raiz quadrada do %.1lf e %.1lf", numero, raizQuadradaNumero);
    }else {
        printf("O quadrado do %.1lf e %.1lf", numero, quadradoNumero);
    }
    
}
/*=============Debug==============*/
// Para o uso da biblioteca math.h
// ao copilar em um sistema linux com o gcc adicione parametro -lm ex:. 'gcc -o ./output/Exercicio-4-1 Exercicio-4-1.c -lm'


/*4. Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, 
e se for classificá-los (imprimi-los) segundo os ângulos. 
(Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>
#include <math.h>


/*=============VARIAVEIS=============*/
float a;
float b;
float c;
float cos1;
float cos2;
float cos3;

/*=============Execução==============*/
int main(){

    printf("\nQual o tamanho dos 3 lados do triangulo?? ");
    printf("\nLado 'a': ");
    scanf("%f", &a);
    printf("\nLado b: ");
    scanf("%f", &b);
    printf("Lado c: ");
    scanf("%f", &c);

        if((a < b + c) && (b < a + c) && (c < c + b)){
        printf("Esses tamanho correspondem a um triangulo !!!");
        cos1 = (pow(b, 2) + pow(c, 2) - pow(a, 2))/ (2 * b * c);
        cos2 = (pow(a, 2) + pow(c, 2) - pow(b, 2))/ (2 * a * c);
        cos3 = (pow(a, 2) + pow(b, 2) - pow(c, 2))/ (2 * a * b );
            if(fabs(cos1) < 0.0001 || fabs(cos2) <0.0001 || (cos3) < 0.0001){
                printf("\nEstes tamanhos correspondem a um triangulo retangulo");
            }else if(cos1 < 0.0 || cos2 < 0.0 || cos3 < 0.0){
                printf("\nEstes tamanhos correspondem a um triangulo obtusangulo ");
            }else{
                printf("\nEstes tamanhos correspondem a um triangulo acutangulo");
            }

        }else{
            printf("Estes tamanos nao correspondem a um triangulo");
        }
    
    return 0;
    
}

// use o parametro -lm ao copilar em algums linux
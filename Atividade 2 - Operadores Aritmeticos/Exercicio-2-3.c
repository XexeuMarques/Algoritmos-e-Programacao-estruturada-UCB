/*Dadas as medidas de uma sala, informe sua área.*/
#include <stdio.h>

int main(){
    float lado1;
    float lado2;
    float areaQuadrada;

    printf("Digite os metros de um lado da sala\n");
    scanf("%f", &lado1);
    printf("Digite quantos metros tem o outro lado da sala:\n");
    scanf("%f", &lado2);

    areaQuadrada = lado1 * lado2;

    printf("A sala tem %.2f metros quadrados !!", areaQuadrada);

    return 0;
}
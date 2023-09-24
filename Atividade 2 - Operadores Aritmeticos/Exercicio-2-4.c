/* Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.*/
#include <stdio.h>

int main(){
    float reais;
    float valorEmDolar;
    float cotacaoDolar = 4.87;

    printf("Quantos reais voce quer converter em dolar?\n");
    scanf("%f", &reais);

    valorEmDolar = reais / cotacaoDolar;

    printf("$ %.2f em reais vale $ %.2f em dolar ;)", reais, valorEmDolar);
}
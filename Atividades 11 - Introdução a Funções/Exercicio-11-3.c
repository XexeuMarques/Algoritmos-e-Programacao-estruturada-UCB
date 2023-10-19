/*Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a
retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0),
sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>
/*========= Prototipos das Funções ========*/
float FahrenheitParaCelsius(float Fahrenheit);

/*============== EXECUÇÃO ================*/

    int main(){
//======= VARIAVEIS 
    float Celsius;
    float Fahrenheit;

//======= ESCOPO
    printf("Qual a temperatura em Fahrenheit? ");
    scanf("%f", &Fahrenheit);

    Celsius = FahrenheitParaCelsius(Fahrenheit);

    printf("A temprestura %.2f° F e %.2f° C em Celsius \n", Fahrenheit, Celsius);

    }

/*=============== FUNÇõES =============== */

//--> Função converte Fahrenheit em Celsius
    float FahrenheitParaCelsius(float Fahrenheit){
        
        float Celsius = (Fahrenheit - 32.0) * (5.0 / 9.0);

        return Celsius;
    }
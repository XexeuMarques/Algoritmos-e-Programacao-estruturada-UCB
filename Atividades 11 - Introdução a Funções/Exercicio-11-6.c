/*Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule
e retorne o IMC (Índice de Massa Corporal) dessa pessoa:
IMC = peso / (altura * altura)
*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>
/*========= Prototipos das Funções ========*/
float imcNumero(float quilos, float altura);

/*============== EXECUÇÃO ================*/

    int main(){
//======= VARIAVEIS 
    float peso;
    float altura;
    float imc;

//======= ESCOPO
    printf("Qual o seu peso em quilos? ");
    scanf("%f", &peso);
    printf("Qual a sua altura em metros? ");
    scanf("%f", &altura);

    imc = imcNumero(peso, altura);

    printf("Seu IMC e de: %f \n", imc);

    return 0;

    }

/*=============== FUNÇõES =============== */

//---> Função retorna o IMC
    float imcNumero(float quilos, float altura){
        float imc;

        imc = quilos / (altura * altura);

        return imc;
    }
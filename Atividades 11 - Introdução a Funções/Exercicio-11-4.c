/*Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e
retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio da
seguinte fórmula:
V = π * raio² * altura
em que π = 3.1414592 */
//
//Michel Marques Dos Santos
//
#include <stdio.h>
/*========= Prototipos das Funções ========*/
float volumeDoCilindro(float raio, float altura);

/*============== EXECUÇÃO ================*/

    int main(){
//======= VARIAVEIS 
    float volume;
    float altura;
    float raio;

//======= ESCOPO
    printf("Digite o raio do seu seu cilindro: ");
    scanf("%f", &raio);
    printf("Digite a altura do seu seu cilindro: ");
    scanf("%f", &altura);

    volume = volumeDoCilindro(raio, altura);

    printf("O volume do seu cilindro e: %.2f", volume);

    return 0;

    }

/*=============== FUNÇõES =============== */

//---> Função medir volume de um cilindro
    float volumeDoCilindro(float raio, float altura){

    float volume;
    float pi = 3.1414592; // caso queria mudar pi

    volume = pi * (raio * raio) * altura;
    
    return volume;

    }
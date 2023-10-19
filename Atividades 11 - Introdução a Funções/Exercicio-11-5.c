/*Escreva uma função para o cálculo do volume de uma esfera
V = 4 / 3π * r^3
em que π = 3.1414592 valor do raio r deve ser passado por parâmetro.
*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>
/*========= Prototipos das Funções ========*/
float volumeDaEsfera(float raio);

/*============== EXECUÇÃO ================*/

    int main(){
//======= VARIAVEIS 
    float volume;
    float raio;
        
//======= ESCOPO

    printf("Digite o raio do sua esfera: ");
    scanf("%f", &raio);

    volume = volumeDaEsfera(raio);

    printf("O volume da sua esfera e %.2f", volume);
    }

/*=============== FUNÇõES =============== */

//---> Função medir volume de uma esfera
    float volumeDaEsfera(float raio){
        float volume;
        float pi = 3.1414592; // caso queiram mudar pi

        volume = 4 / (3* pi) * (raio * raio * raio);

        return volume;
    }
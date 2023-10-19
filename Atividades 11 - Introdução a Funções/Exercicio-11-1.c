/* Escreva uma função que receba por parâmetro dois números e retorne o maior deles.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>
/*========= Prototipos das Funções ========*/
int maiorDeles(int n1, int n2);

/*============== EXECUÇÃO ================*/

    int main(){
//======= VARIAVEIS 
    int numero1;
    int numero2;
    int Maior;

//======= ESCOPO
    printf("Escreva um numero:");
    scanf("%d", &numero1);
    printf("Escreva outro numero:");
    scanf("%d", &numero2);

    Maior = maiorDeles(numero1, numero2);

    printf("O maior numero e o %d", Maior);

    return 0;
    }

/*=============== FUNÇõES =============== */

//---> Função retorna o numero maior
    int maiorDeles(int n1, int n2){

        if (n1 > n2) {
            return n1;
        }else {
            return n2;
        }

        return 0;
    }
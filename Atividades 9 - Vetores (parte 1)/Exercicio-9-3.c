/*Ler um conjunto de numeros reais, armazenando-o em um vetor e calcular o quadrado dos componentes deste vetor,
armazenando o resultado em outro vetor. Os conjuntos tem 10 elemantos cada. imprima todos os conjuntos.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int vetor[9];
int vetor2[9];
/*=============Execução==============*/
int main(){

    for (int i = 0; i < 9; i++) {
        printf("Digite o numero natural para a posição %d: ", i + 1);
        scanf("%d", &vetor[i]);

        // Verificar se um numero e natural
        while (vetor[i] < 0) {
           printf("esse não e um numero natural, digite um numero natural !! :");
           scanf("%d", &vetor[i]);           
         }

        vetor2[i] = vetor[i] * vetor[i];
    }

    for (int i = 0; i < 9; i++) {
        printf("O quadrado do numero %d na posição %d e: %d\n", vetor[i], i + 1, vetor2[i]);
    }
}
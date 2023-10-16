/*Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a media geral*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
float notas[15];
float media;
/*=============Execução==============*/
int main(){

    for (int i = 0; i < 15; i++) {
        printf("Digite o numero natural para a posição %d: ", i + 1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media = media / 15;

    printf("A media das notas dos alunos e: %.2f", media);
}
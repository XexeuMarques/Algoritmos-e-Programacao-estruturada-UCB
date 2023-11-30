/*7. Faça um algoritmo que leia as três notas de 30 alunos de uma turma. 
Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10

Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", 
caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.*/
//
//Michel Marques Dos Santos
//

#include <stdio.h>

/*=============VARIAVEIS=============*/
float nota1, nota2, nota3, mediaGeral = 0, mediaPonderada, mediaDaTurma;

/*=============Execução==============*/
int main(){

    for (int i; i < 29; i++) {
    
        printf("-------------------");
        printf("Aluno numero %d de 30", i + 1);

        printf("\nPrimeira nota: ");
        scanf(" %f", &nota1);

        printf("Segunda nota: ");
        scanf(" %f", &nota2);

        printf("Terceira nota: ");
        scanf(" %f", &nota3);

        mediaPonderada= (nota1*2 + nota2*4 + nota3*3) / 10;

        if(mediaPonderada >= 7.0){
            printf("Media de: %.2f Aprovado", mediaPonderada);
        }else{
            printf("Media de: %.2f Reprovado", mediaPonderada);
        }

        mediaGeral = mediaGeral + mediaPonderada;
    }

    mediaDaTurma = mediaGeral / 30;

    printf("A media deral da turma foi de %.2f", mediaDaTurma);

    return 0;
}
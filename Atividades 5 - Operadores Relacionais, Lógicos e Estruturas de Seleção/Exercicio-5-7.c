/*7. Faça um algoritmo que calcule a media ponderada das notas de 3 provas. 
A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. 
Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. 
A nota para aprovação deve ser igual ou  superior a 7.0 pontos. */
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
float nota1, nota2, nota3, media;

/*=============Execução==============*/
int main(){

    printf("Digite a nota da primeira prova: \n");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova: \n");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira prova: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + 2 * nota3) / 4;
    printf("A sua media foi de %.2f \n", media);

    if (media >= 7) {
        printf("Voce foi aprovado, parabems !!! \n");
    }
    else {
        printf("Voce foi reprovado :( \n");
    }
}
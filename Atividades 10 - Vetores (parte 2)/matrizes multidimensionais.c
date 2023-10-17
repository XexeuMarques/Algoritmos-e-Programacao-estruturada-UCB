//matrizes multidimensionais
#include<stdio.h>

char nomes[3][20]; // matriz 2 linhas e 20 colunas
float notas [3][3]; // cada linha vai armazenar 3 notas ->
float media;

int main(){

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome:");
        //fgets pega textos
        fgets(nomes[i], 20, stdin);// 1 - indereço da memoria 2 - quantidades entrada de dados 3 - entrada de dados
    }

    for (int i = 0; i < 3; i++) // percorre cada linha -> i
    {
        for (int j = 0; j < 3; j++) // percorrer a colunas das linhas -> j
        {
            printf("Digite as notas do aluno:");
            scanf("%f", &notas[i][j]); // linha i posição(coluna) j
        }
    }
    
    // medias
        for (int i = 0; i < 3; i++) // percorre cada linha -> i
    {
        media = 0; // começa uma media nova quando iniciar um novo -> i
        for (int j = 0; j < 3; j++) // percorrer a colunas das linhas -> j
        {
            media += notas[i][j]; // for esta percorrendo o -> j
        }
        media = media / 3;
        printf("A media de %s e %2.f ", nomes[i], media);
        
    }
}
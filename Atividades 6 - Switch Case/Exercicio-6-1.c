/*Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence,
considerando só os seguintes valores: 
61 - Brasília 
71 - Salvador 
11 - São Paulo 
21 - Rio de Janeiro 
32 - Juiz de Fora 
19 - Campinas 
27 - Vitória 
31 - Belo Horizonte 
Qualquer outro - uma cidade no Brasil sem identificação 
*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int ddd;

/*=============Execução==============*/
int main(){

    printf("Qual e o ddd da sua cidade? \n");
    scanf("%d", &ddd);

    switch (ddd) {
        case 61:
            printf("Voce e de Brasilia!!! \n");
            break;

        case 71:
            printf("Voce e de Salvador!!! \n");
            break;

        case 11:
            printf("Voce e de São Paulo!!! \n");
            break;

        case 21:
            printf("Voce e de Rio de Janeiro!!! \n");
            break;

        case 32:
            printf("Voce e de Juiz de Fora!! \n");
            break;

        case 19:
            printf("Voce e de Campinas!! \n");
            break;
            
        case 27:
            printf("Voce e de Vitória!!! \n");
            break;

        case 31:
            printf("Voce e de Belo Horizonte!!! \n");
            break;

        default:
            printf("Uma cidade sem identificação \n");
            break;
    }
    
}
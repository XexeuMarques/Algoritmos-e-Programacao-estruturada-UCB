/*10. Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. 
Foram obtidos os seguintes dados:  

- código da cidade

- estado (RS, SC, PR, SP, RJ, ...)

- número de veículos de passeio (em 1992)

- número de acidentes de trânsito com vítimas (em 1992)

Deseja-se saber:

a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem

b) qual a média de veículos nas cidades brasileiras

c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============Prototipos==============*/
void ddds(int);

/*=============VARIAVEIS=============*/
int codigoDaCidade, numeroDeVeiculos, numeroDeAcidentes, opcao, menorIndice, menorIndiceDDD, maiorIndice, maiorIndiceDDD;
int acidentesRS = 0, contadorRS = 0;

/*=============Execução==============*/
int main(){

    do {
        printf("\nQual o codigo DDD da sua cidade?\n");
        scanf("%d", &codigoDaCidade);

        printf("\nQuantos veiculos de passeio tem nessa cidade em 1992?");
        scanf("%d", &numeroDeVeiculos);

        printf("\nQuantos acidentes de trancio com vitima ocorreu em 1992?");
        scanf("%d", &numeroDeAcidentes);

        if(numeroDeAcidentes < menorIndice){
            menorIndice = numeroDeAcidentes;
            menorIndiceDDD = codigoDaCidade;
        }

        if(numeroDeAcidentes > maiorIndice){
            maiorIndice = numeroDeAcidentes;
            maiorIndiceDDD = codigoDaCidade;
        }

        if (codigoDaCidade == 54 || codigoDaCidade == 51 || codigoDaCidade == 55) {
            acidentesRS = acidentesRS + numeroDeAcidentes;
            contadorRS++;
        }

        printf("Digite 0 para terminar a pesquisa: ");
        scanf("%d", &opcao);

    }while (opcao != 0);

    printf("O maior indice de acientes com nitimas e da cidade: ");
    ddds(codigoDaCidade);

    return 0;
}

void ddds(int codigoDaCidade){
    switch (codigoDaCidade) {
        case 61:
        printf("Brasilia\n");
        break;

        case 62: case 64: 
        printf("Goiás\n");
        break;

        case 67:
        printf("Mato Grosso\n");
        break;

        case 82:
        printf("Alagoas\n");
        break;

        case 71: case 73: case 74: case 75: case 77:
        printf("Bahia\n");
        break;

        case 85: case 88:
        printf("Ceará\n");
        break;

        case 98: case 99:
        printf("Maranhão\n");
        break;

        case 83:
        printf("Paraíba\n");
        break;

        case 81: case 87:
        printf("Paraíba\n");
        break;

        case 86: case 89:
        printf("Piauí\n");
        break;

        case 86: case 89:
        printf("Piauí\n");
        break;
    }
}
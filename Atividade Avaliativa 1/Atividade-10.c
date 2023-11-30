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
int ddds(int);

/*=============VARIAVEIS=============*/
int codigoDaCidade, numeroDeVeiculos, numeroDeAcidentes, opcao, menorIndice, menorIndiceDDD, maiorIndice, maiorIndiceDDD;
int acidentesBrasil = 0, contadorBrasil; 
int acidentesRS = 0, contadorRS = 0;
float mediaBrasil, mediaRS; 

/*=============Execução==============*/
int main(){

    do {

        int i = 1;
        while(i == 1){
        printf("\nQual o codigo DDD da sua cidade?\n");
        scanf("%d", &codigoDaCidade);
        i = ddds(codigoDaCidade);
        }

        printf("\nQuantos veiculos de passeio tem nessa cidade em 1992?\n");
        scanf("%d", &numeroDeVeiculos);
        

        printf("\nQuantos acidentes de transio com vitima ocorreu em 1992?\n");
        scanf("%d", &numeroDeAcidentes);

        contadorBrasil++;
        acidentesBrasil = acidentesBrasil + numeroDeAcidentes;

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

        printf("Digite 0 -> para terminar a pesquisa \nOu digite qualquer outra para terminar a pesquisa ");
        scanf("%d", &opcao);

    }while (opcao != 0);

    printf("O maior indice de acientes com nitimas e de uma cidade de ");
    ddds(maiorIndice);
    printf(" com %d acidentes.", maiorIndice);

    printf("\ne o menor indice de acidente e uma cidade de ");
    ddds(menorIndiceDDD);
    printf(" com %d acidentes.", menorIndice);

    mediaRS = acidentesRS / contadorRS;
    printf("\nA média de acidentes com vítimas nas cidades do Rio Grande do Sul e %f", mediaRS);

    mediaBrasil = acidentesBrasil / contadorBrasil;
    printf("\nA média de veículos nas cidades brasileiras e %f", mediaBrasil);

    return 0;
}

int ddds(int codigoDaCidade){
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

        case 84:
        printf("Rio Grande do Norte\n");
        break;

        case 79:
        printf("Sergipe\n");
        break;

        case 68: 
        printf("acre\n");
        break;

        case 96:
        printf("Amapá\n");
        break;

        case 92: case 97:
        printf("Amazonas\n");
        break;

        case 91: case 93: case 94:
        printf("Pará\n");
        break;

        case 69:
        printf("Rondônia\n");
        break;

        case 95:
        printf("Roraima\n");
        break;

        case 63:
        printf("Tocantins\n");
        break;

        case 27: case 28: 
        printf("Espírito Santo\n");
        break;

        case 31: case 32: case 33: case 34: case 35: case 37: case 38:
        printf("Minas Gerais\n");
        break;

        case 21: case 22: case 24:
        printf("Rio de Janeiro\n");
        break;

        case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19:
        printf("São Paulo\n");
        break;

        case 41: case 42: case 43: case 44: case 45: case 46:
        printf("Paraná\n");
        break;

        case 51: case 53: case 54: case 55:
        printf("Rio Grande do Sul\n");

        break;

        case 47: case 48: case 49:
        printf("Santa Catarina\n");
        break;

        default:
        printf("Cidade não encontrada");
        return 1;
        break;
        
    }

    return 0;
}
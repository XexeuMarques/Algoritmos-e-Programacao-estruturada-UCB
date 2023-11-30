/*9. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. 
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  

- 1,2,3,4 = voto para os respectivos candidatos;

- 5 = voto nulo;

- 6 = voto em branco;

Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:

- total de votos para cada candidato;

- total de votos nulos;

- total de votos em branco;

Como finalizador do conjunto de votos, tem-se o valor 0.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int voto, opcao;
int totalVotos1 = 0, totalVotos2 = 0, totalVotos3 = 0, totalVotos4 = 0, totalDeVotosNulos = 0, totalVotosBranco = 0;

/*=============Execução==============*/
int main(){
    
    printf(" Digite o numero para votar no cadidato que voce quer: \n");
    printf(" Candidato -> 1\n Candidato -> 2\n Candidato -> 3\n Candidato -> 4\n Voto Nulo -> 5\n Voto em Branco -> 6");

    do{
        printf("\n Por favor digite o codigo desejado");
        scanf("%d", &voto);

        switch (voto){
        case 1:
            totalVotos1++;
            break;
         case 2:
            totalVotos2++;
            break;
        case 3:
           totalVotos3++;
            break;
        case 4:
            totalVotos4++;
            break;
        case 5:
            totalDeVotosNulos++;
            break;
        case 6:
            totalVotosBranco++;
            break;
        default:
            printf("codigo nao encontrada \n");
            break;
        }

        printf("Deseja continuar a votacao?? Digite: \n");
        printf(" 1 -> Sim\n 0 -> Nao \n");
        scanf("%d", &opcao);

    }while(opcao > 0);

    printf("Total de votos para 1: %d \n", totalVotos1);
    printf("Total de votos para 2: %d \n", totalVotos2);
    printf("Total de votos para 3: %d \n", totalVotos3);
    printf("Total de votos para 4: %d \n", totalVotos4);
    printf("Votos nulos: %d \n", totalDeVotosNulos);
    printf("Votos em branco: %d \n", totalVotosBranco);
    
}
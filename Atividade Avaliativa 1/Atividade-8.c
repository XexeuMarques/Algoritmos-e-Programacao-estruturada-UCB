/*8. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. 
A prefeitura deseja saber:  

a) média do salário da população;

b) média do número de filhos;

c) maior salário;

d) percentual de pessoas com salário até R$100,00.

O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while) .*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
float salario = 0, totalSalario = 0, mediaSalario, mediaFilhos, maiorSalario = 0, percentualDePessoas;
int filhos, pessoas = 0, totalFilhos = 0, contadorSalario100 = 0;

/*=============Execução==============*/
int main(){
    do{

            pessoas ++;

            printf("Salario: ");
            scanf("%f", &salario);

            if (salario < 0) {
            break; 
        }

            printf("Numero de filhos: ");
            scanf("%d", &filhos);
            
            totalSalario += salario;
            totalFilhos += filhos;

            if(salario > maiorSalario){
                maiorSalario = salario;
            }
            if(salario < 100){
                contadorSalario100 ++;
            }

            printf("\nInforme um valor negativo para encerrar ou um positivo para continuar: \n--> ");
            scanf("%f", &salario);

        }while(salario > 0);

        mediaSalario = totalSalario/ pessoas;
        mediaFilhos = (float) totalFilhos/ pessoas;
        percentualDePessoas= (float) contadorSalario100 /pessoas * 100;

        printf("\nMedia do salario da populacao: %.2f", mediaSalario);
        printf("\nMedia do numero de filhos da populacao: %.2f", mediaFilhos);
        printf("\nMaior salario informado: %.2f", maiorSalario);
        printf("\nPercentual de pessoas com o salario ate R$100.00: %.2f %%", percentualDePessoas);

        return 0;
    
}
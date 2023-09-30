/*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, 
mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. 
Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, 
o salário fixo e o valor que ele recebe por carro vendido. 
Calcule e escreva o salário final do vendedor.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int numeroDeCarros;
float salarioFixo;
float comicaoFixa;
float ValorTotalDosCarro;
float salarioFinal;

/*=============Execução==============*/
int main(){

    printf("Quantos carros que você vendeu? \n");
    scanf("%d", &numeroDeCarros);

    printf("Qual valor total de todas suas vendas? \n");
    scanf("%f", &ValorTotalDosCarro);

    printf("Qual e o seu salario fixo? \n");
    scanf("%f", &salarioFixo);

    printf("Qual e sua comição por cada carro vendido? \n");
    scanf("%f", &comicaoFixa);

    salarioFinal = salarioFixo + (comicaoFixa * numeroDeCarros) + (5 * ValorTotalDosCarro / 100);

    printf("Seu salario final e de R$ %.2f reais \n", salarioFinal);
}
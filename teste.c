#include <stdio.h>

// Protótipos das funções
int validaQuantidade(int quantidade);
float calculaSalario(int quantidade);

// Função principal
int main() {
    // Variáveis
    int quantidade;
    char continuar;

    // Loop para processar vários funcionários
    do {
        // Solicitar a quantidade de peças fabricadas
        printf("Digite a quantidade de pecas fabricadas: ");
        scanf("%d", &quantidade);

        // Validar a quantidade de peças
        while (validaQuantidade(quantidade) == 0) {
            printf("Quantidade invalida. Digite novamente: ");
            scanf("%d", &quantidade);
        }

        // Calcular e mostrar o salário
        printf("O salario do funcionario e: R$ %.2f\n", calculaSalario(quantidade));

        // Perguntar se deseja processar outro funcionário
        printf("Deseja processar outro funcionario? (S para sim, N para nao): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    return 0;
}

// Função para validar a quantidade de peças
int validaQuantidade(int quantidade) {
    return quantidade >= 0;
}

// Função para calcular o salário
float calculaSalario(int quantidade) {
    // Constantes
    float salarioBase = 600.00;
    float adicional50a80 = 0.50;
    float adicionalAcima80 = 0.75;

    // Calcula o salário com base na quantidade de peças
    if (quantidade <= 50) {
        return salarioBase;
    } else if (quantidade <= 80) {
        return salarioBase + (adicional50a80 * (quantidade - 50));
    } else {
        return salarioBase + (adicional50a80 * 30) + (adicionalAcima80 * (quantidade - 80));
    }
}
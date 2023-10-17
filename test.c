   #include<stdio.h>

// prototipo das funções -> caso crie a funções depois do main
void somar(int n1, int n2); //declarando parametros (Variaveis)

/*================= MAIN =====================*/
    int main()
    {
        int numero1;
        int numero2;

        printf("Digite o primeiro numero:");
        scanf("%d", &numero1);

        printf("Digite o segundo numero:");
        scanf("%d", &numero2);

        //chamando a função soma que criei
        somar(numero1, numero2);
    }
    
/*==================== FUNÇõES =============== */
    void somar(int n1, int n2){ // função soma dois numeros e imprime a soma
        // variaveis locais
        int soma = n1 + n2;

        printf("%d", soma);
    }

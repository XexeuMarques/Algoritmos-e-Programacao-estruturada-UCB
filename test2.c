   #include<stdio.h>

// prototipo das funções -> caso crie a funções depois do main
void maior(int n1, int n2); //declarando parametros (Variaveis)

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
        maior(numero1, numero2);
    }
    
/*==================== FUNÇõES =============== */
    void maior(int n1, int n2){ // função soma dois numeros e imprime a soma
        // variaveis locais
        int maior;

        if(n1 > n2){
            printf("O maior numero e: %d", n1);
        }else if (n2 > n1)
        {
            printf("O %d e maior", n2);
        }else{
            printf("Os valores são iguais");
        }
        
    }

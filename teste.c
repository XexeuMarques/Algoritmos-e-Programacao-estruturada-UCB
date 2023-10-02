#include<stdio.h>

int main(){

    char sexo, olhos, cabelos;
    int totalHabitantes = 0, totalEspecifico = 0, totalM = 0, totalF = 0, idade, opcao;
    float salario, porcentagem;

    //cadastrar um habitante em cada repeticao
    do{
        //contagem de cada habitante
        //preencher e validar o campo sexo

        do{
            fflush(stdin);
            printf("\n Digite o sexo: (m ou f)  ");
            scanf("%c", &sexo);
           if(sexo != 'm' && sexo != 'f'){
                printf("\nOpcao invalida");
            }
            if(sexo == 'm'){
                totalM++;
            }else if(sexo == 'f'){
                totalF++;
            }
       
        }while(sexo != 'm' && sexo != 'f');

        //preencher e validar o campo olhos
        do{
            fflush(stdin);
            printf("Digite a cor dos olhos: a (azuis), v (verdes), c (castanhos), p (pretos)");
            scanf("%c", &olhos);
            if(olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v'){
                 printf("\nOpcao invalida");
            }
        }while(olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v');

            //preencher e validar o campo cabelos
        do{
            fflush(stdin);
            printf("Digite a cor dos cabelos");
            scanf("%c", &cabelos);
            if(cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r'){
                printf("\nOpcao invalida");
            }
        }while(cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r');

            //preencher e validar o campo idade
        do{
            fflush(stdin);
            printf("Digite a idade");
            scanf("%d", &idade);
            if(idade < 10 || idade > 100){
                printf("\nOpcao invalida");
            }
        }while(idade < 10 || idade > 100);

        //preencher e validar o campo salario
        do{
            fflush(stdin);
            printf("Digite o salario");
            scanf("%f", &salario);
            if(salario < 0){
                printf("\nOpcao invalida");
            }
        }while(salario < 0);

        if(sexo == 'f' && olhos == 'c' && cabelos == 'c' && (idade > 18 && idade < 35)){
            totalEspecifico++;
        }

        totalHabitantes++;

        printf("Deseja cadastrar um novo habitante: 1 SIM -1 NAO");
        scanf("%d",&opcao);
    }while(opcao != -1);

    porcentagem =(float)totalEspecifico/totalHabitantes*100;

    printf("\nTotal de habitantes cadastrados: %d", totalHabitantes);
    printf("\nTotal de homens cadastrados: %d", totalM);
    printf("\nTotal de mulheres cadastrados: %d", totalF);
    printf("\nPorcentagem de Pessoas com caracteristicas especificas: %.2f", porcentagem);
}
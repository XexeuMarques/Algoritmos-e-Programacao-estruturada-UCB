/*5. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, 
p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, 
mostrando 4 casas decimais após a vírgula, segundo a fórmula: 
Distancia = √(x2 - x1)² + (y2 - y1)² */
//
//Michel Marques Dos Santos
//
#include <stdio.h>
#include <math.h>

/*=============VARIAVEIS=============*/
float coordenadaX1, coordenadaY1, coordenadaX2, coordenadaY2, distancia;

/*=============Execução==============*/
int main(){

    printf("Quais são os valores do ponte de em um objeto plano? ");
    printf("\nPonto 1 eixo X: ");
    scanf("%f", &coordenadaX1);
    printf("\nPonto 1 eixo y: ");
    scanf("%f", &coordenadaY1);
    printf("\nPonto 2 eixo x: ");
    scanf("%f", &coordenadaX2);
    printf("\nPonto 2 eixo y: ");
    scanf("%f", &coordenadaY2);

    distancia= sqrt(pow((coordenadaX2 - coordenadaX1), 2) + pow((coordenadaY2 - coordenadaY1), 2));

    printf("A distancia entre os pontos e igual a %.4f", distancia);

    return 0;
}

// -----> !!! ???? <--------
// Por algum motivo não conseguir utiliza o nome "y1" na variavel
// use o parametro -lm ao copilar em algums linux
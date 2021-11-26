#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void euler(){

    printf("\nResolução da EDO por meio do método de Euler de primeira ordem");

    double h, x0 = 0, x1, y0 = 0.25, y1;
    h = x1 - x0;

    printf("\nInsira o valor de x para qual a EDO deve ser resolvida: ");
    scanf("%lf", &x1);

    y1 = y0 + (h*(pow(x0,2)-2*y0))/1;

    printf("O resultado final será: %f\n",y1);

}

void rungekutta(){

    printf("\nResolução da EDO por meio de Runge-Kutta de quarta ordem");

    double h, x0 = 0, x1, y0 = 0.25, y1, k1, k2, k3, k4;

    printf("\nInsira o valor de x para qual a EDO deve ser resolvida: ");
    scanf("%lf", &x1);

    printf("\n");

    h = (x1-0.25);

    k1 = h*(pow(x0,2)-2*y0);
    k2 = h*(pow((x0+h/2),2)-2*(y0+(k1/2)));
    k3 = h*(pow((x0+h/2),2)-2*(y0+(k2/2)));
    k4 = h*(pow((x0+h),2)-2*(y0+k3));

    y1 = y0 + (k1 + 2*k2+2*k3+k4)/6;
    printf("O resultado final será: %f\n",y1);

}

int main(){

    /* Declaração de variáveis e configurando teclado brasileiro */

    setlocale(LC_ALL, "Portuguese");
    int teste = 1;
    char op;

    printf("Trabalho 5 de Cálculo Numérico e Programação Matemática\n");
    printf("Resolução de EDO's de PVI's (exercício 1, ASR 12)\n\n");

    printf("Observação: os decimais devem ser separados por vírgula\n\n");

    printf("Selecione 0 para o Método de Euler e 1 para Runge-Kutta de quarta ordem\n");
    printf("Determine o método a ser utilizado: ");

    do{

        scanf("%c", &op);

        if(op == '0' || op == '1'){
            teste = 0;
        }

    }while(teste);

    switch(op) {
            case '0':   euler();
                        break;
            case '1':   rungekutta();
                        break;
            default:    break;
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    double aux, e, j, x;
    double euler = 2.718281828459045;

    printf("Resolução da atividade semanal remota 2 de Cálculo Numérico e Programação Matemática\n\n");

    printf("Ex.1 Encontrando uma das raízes com erro relativo a 10^-2");

    printf("\n\na. (x^3) + 2x - 9 = 0\n\n");

    x = 2;
    e = 0.01;
    j = 1;

    for(int i = 0; j >= e; i++){

            aux = x;

            x = x - (pow(x,3)+(2*x)-9)/((3*pow(x,2))+2);
            printf("Cálculo de número %d: %f\n", (i+1), x);

            j = fabs(x - aux)/fabs(x);

            printf("Erro relativo de número %d: %f\n\n", (i+1), j);
    }

    printf("Resposta:\nPortanto, temos que uma das raízes será %f\n", x);

    printf("\nb. x + e^x = 0\n\n");

    x = -0.5;
    e = 0.01;
    j = 1;

    for(int i = 0; j >= e; i++){

            aux = x;

            x = x - (x + pow(euler,x));
            printf("Cálculo de número %d: %f\n", (i+1), x);

            j = fabs(x - aux)/fabs(x);

            printf("Erro relativo de número %d: %f\n\n", (i+1), j);
    }

    printf("Resposta:\nPortanto, temos que uma das raízes será %f\n", x);

    printf("\nEx.2 Encontrando uma das raízes da equação cúbica de Van-Der-Walls, utilizando como x inicial o 4,5\n\n");

    x = 4.5;
    e = 0.05;
    j = 1;

    for(int i = 0; j >= e; i++){

            aux = x;

            x = x - ((10*pow(x,3))-(24.73*pow(x,2))+(3.952*x)-0.169936)/((30*pow(x,2))-(49.46*x)+3.952);
            printf("Cálculo de número %d: %f\n", (i+1), x);

            j = fabs(x - aux)/fabs(x);

            printf("Erro relativo de número %d: %f\n\n", (i+1), j);
    }

    printf("Resposta:\nPortanto, temos que uma das raízes será %f\n", x);

    return 0;
}

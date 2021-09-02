#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    printf("Resolução da atividade semanal remota 1 de Cálculo Numérico e Programação Matemática\n\n");
    printf("Encontrando uma das raízes da equação x+ln(x)=0, utilizando como x inicial o 0,5\n\n");

    double x = .5;

    for(int i = 0; i < 4; i++){
            x = x - (x + log(x))/((x+1)/x);
            printf("Cálculo de número %d: %f\n", (i+1), x);
    }

    printf("\nPortanto, temos que uma das raízes será %f\n", x);


    return 0;
}

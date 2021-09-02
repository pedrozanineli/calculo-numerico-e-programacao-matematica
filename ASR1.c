#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    printf("Resolu��o da atividade semanal remota 1 de C�lculo Num�rico e Programa��o Matem�tica\n\n");
    printf("Encontrando uma das ra�zes da equa��o x+ln(x)=0, utilizando como x inicial o 0,5\n\n");

    double x = .5;

    for(int i = 0; i < 4; i++){
            x = x - (x + log(x))/((x+1)/x);
            printf("C�lculo de n�mero %d: %f\n", (i+1), x);
    }

    printf("\nPortanto, temos que uma das ra�zes ser� %f\n", x);


    return 0;
}

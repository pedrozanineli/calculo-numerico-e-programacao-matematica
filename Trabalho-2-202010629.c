#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    /* Configurando teclado brasileiro */

    setlocale(LC_ALL, "Portuguese");

    printf("Trabalho 2 de C�lculo Num�rico e Programa��o Matem�tica\n");
    printf("Algoritmo para o M�todo de Lagrange\n\n");

    printf("Observa��o: os decimais devem ser separados por v�rgula\n\n");

    int l, k, n;
    double x[50], y[50], xin, yin, L;

    printf("Informe o n�mero total de pontos dispon�veis: ");
    scanf("%d", &n);

    printf("\n");

    for(int i = 0; i <= (n-1); i++){
        printf("Insira o valor de x[%d]: ", (i+1));
        scanf("%lf", &x[i]);

        printf("Insira o valor de y[%d]: ", (i+1));
        scanf("%lf", &y[i]);

        printf("\n");
    }

    printf("Informe agora o valor de x para a interpola��o: ");
    scanf("%lf", &xin);

    yin = 0;

    for(k = 0; k <= (n-1); k++){
        L = 1;
        for(int i = 0; i <= (n-1); i++){
            if(i != k){
                L = L * ((xin - x[i])/(x[k]-x[i]));
            }
        }
        yin = L * y[k] + yin;
    }

    printf("\nPara %lf, teremos portanto %lf\n", xin, yin);

    return 0;
}

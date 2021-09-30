#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    /* Configurando teclado brasileiro */

    setlocale(LC_ALL, "Portuguese");

    printf("Trabalho 2 de Cálculo Numérico e Programação Matemática\n");
    printf("Algoritmo para o Método de Lagrange\n\n");

    printf("Observação: os decimais devem ser separados por vírgula\n\n");

    // Definição das variáveis a serem utilizadas
    int l, k, n;
    double x[50], y[50], xin, yin, L;

    // Registrar a quantidade de pontos existentes
    printf("Informe o número total de pontos disponíveis: ");
    scanf("%d", &n);

    printf("\n");

    // Armazenar os valores de pontos disponíveis
    for(int i = 0; i <= (n-1); i++){
        printf("Insira o valor de x[%d]: ", (i+1));
        scanf("%lf", &x[i]);

        printf("Insira o valor de y[%d]: ", (i+1));
        scanf("%lf", &y[i]);

        printf("\n");
    }

    // Armazenar o valor a ser interpolado
    printf("Informe agora o valor de x para a interpolação: ");
    scanf("%lf", &xin);

    yin = 0;

    // Cálculo dos produtos para L
    for(k = 0; k <= (n-1); k++){
        L = 1;
        for(int i = 0; i <= (n-1); i++){
            if(i != k){
                L = L * ((xin - x[i])/(x[k]-x[i]));
            }
        }
        yin = L * y[k] + yin;
    }

    // Informar o valor final
    printf("\nPara %lf, teremos portanto %lf\n", xin, yin);

    return 0;
}

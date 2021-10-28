#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("Trabalho 3 de Cálculo Numérico e Programação Matemática\n");
    printf("Algoritmo de ajustamento com retas (ax + b)\n\n");

    printf("Observação: os decimais devem ser separados por ponto\n\n");

    // Definição das variáveis a serem utilizadas
    int n;

    printf("Informe o número de pontos a serem usados: ");
    scanf("%d", &n);
    printf("\n");

    double x[n], y[n], somax=0, somay=0, somaxq=0, somaxy=0;

    // Definindo os pontos a serem utilizados
    for(int i=0; i<n; i++){
        printf("Informe o valor de x[%d]: ", (i+1));
        scanf("%lf", &x[i]);

        printf("Informe o valor de y[%d]: ", (i+1));
        scanf("%lf", &y[i]);

        printf("\n");
    }

    // Realizando o ajustamento
    for(int i=0; i<n; i++){
        somax = somax + x[i];
        somay = somay + y[i];
        somaxq = somaxq + x[i]*y[i];
        somaxy = somaxy + x[i]*y[i];
    }

    // Calculando por fim os coeficientes
    double a = (n * somaxy - somax*somay)/(n*somaxq - somax*somax);
    double b = (somay - b*somax)/n;

    printf("A reta que melhor ajusta os pontos é %fx + %f\n", a, b);

    return 0;
}

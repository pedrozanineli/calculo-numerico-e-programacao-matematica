#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("Trabalho 3 parte 2 de Cálculo Numérico e Programação Matemática\n");
    printf("Algoritmo de ajustamento para C1 + C2/x\n\n");

    printf("Observação: os decimais devem ser separados por ponto\n\n");

    // Definição das variáveis a serem utilizadas
    int n;

    printf("Informe o número de pontos a serem usados: ");
    scanf("%d", &n);
    printf("\n");

    float a, b, x[n], y[n], soma1sobrex=0, somay=0, somaxq=0, somaxy=0;

    // Definindo os pontos a serem utilizados
    for(int i=1; i<=n; i++){
        printf("Informe o valor de x[%d]: ", i);
        scanf("%f", &x[i]);

        printf("Informe o valor de y[%d]: ", i);
        scanf("%f", &y[i]);

        printf("\n");
    }

    // Realizando o ajustamento
    for(int i=1; i<=n; i++){
        soma1sobrex = soma1sobrex + (1/x[i]);
        somay = somay + y[i];
        somaxq = somaxq + ((1/x[i])*(1/x[i]));
        somaxy = somaxy + (y[i]/x[i]);
    }

    // Calculando por fim os coeficientes
    a = (somaxq*somay - soma1sobrex*somaxy)/(somaxq*n - soma1sobrex*soma1sobrex);
    b = (somaxy - a*soma1sobrex)/somaxq;

    printf("A reta que melhor ajusta os pontos é y = %0.2fx + %0.2f\n", a, b);

    return 0;
}

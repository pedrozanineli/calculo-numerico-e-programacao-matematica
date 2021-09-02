#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void newton(){

    printf("\nRealizando o cálculo pelo Método de Newton\n");

    // Para utilizar o Método de Newton, apenas é necessário um valor inicial e o erro desejado
    // Ainda é utilizada a variável erroaux como forma de comparação do erro

    double precisao, inicial, aux, erroaux = 1, j = 1;

    printf("\nInsira a precisão desejada: ");
    scanf("%lf", &precisao);

    printf("Insira o valor inicial: ");
    scanf("%lf", &inicial);

    printf("\n");

    for(int i = 0; j >= precisao; i++){

            aux = inicial;

            inicial = inicial - ((10*pow(inicial,3))-(24.73*pow(inicial,2))+(3.952*inicial)-0.169936)/((30*pow(inicial,2))-(49.46*inicial)+3.952);
            printf("Cálculo de número %d: %f\n", (i+1), inicial);

            j = fabs(inicial - aux)/fabs(inicial);

            printf("Precisão relativa de número %d: %f\n\n", (i+1), j);
    }

    printf("O resultado final será: %f\n",inicial);
}

void secantes(){

    printf("\nRealizando o cálculo pelo Método das Secantes\n");

    // Para utilizar o Método das Secantes, é necessário dois valores iniciais e o erro desejado
    // Ainda é utilizada a variável erroaux como forma de comparação do erro

    double precisao, x1, x2, aux, erroaux = 1, j = 1;

    printf("\nInsira a precisão desejada: ");
    scanf("%lf", &precisao);

    printf("Insira o primeiro valor inicial: ");
    scanf("%lf", &x1);

    printf("Insira o segundo valor inicial: ");
    scanf("%lf", &x2);

    printf("\n");

    for(int i = 0; j >= precisao; i++){

            aux = x2;

            x2 = x2 - (x2 - x1)/((((10*pow(x2,3))-(24.73*pow(x2,2))+(3.952*x2)-0.169936)/((30*pow(x2,2))-(49.46*x2)+3.952))-(((10*pow(x1,3))-(24.73*pow(x1,2))+(3.952*x1)-0.169936)/((30*pow(x1,2))-(49.46*x1)+3.952)))*(((10*pow(x2,3))-(24.73*pow(x2,2))+(3.952*x2)-0.169936)/((30*pow(x2,2))-(49.46*x2)+3.952));

            printf("Cálculo de número %d: %f\n", (i+1), x2);

            j = fabs(x2 - aux)/fabs(x2);

            printf("Precisão relativa de número %d: %f\n\n", (i+1), j);
    }

    printf("O resultado final será: %f\n",x2);

}

int main(){

    /* Declaração de variáveis e configurando teclado brasileiro */

    setlocale(LC_ALL, "Portuguese");
    int teste = 1;
    char op;

    printf("Trabalho 1 de Cálculo Numérico e Programação Matemática\n");
    printf("Encontrando uma das raízes da equação cúbica de Vander-Der-Walls (ASR2-Ex.2)\n\n");

    /* Determinando o método a ser utilizado (Newton ou Secantes) */

    printf("Selecione 0 para Método de Newton e 1 para Método das Secantes\n");
    printf("Determine o método a ser utilizado: ");

    // scanf("%c", &op);

    do{

        scanf("%c", &op);

        if(op == '0' || op == '1'){
            teste = 0;
        }

    }while(teste);

    switch(op) {
            case '0':   newton();
                        break;
            case '1':   secantes();
                        break;
            default:    break;
    }

    return 0;
}

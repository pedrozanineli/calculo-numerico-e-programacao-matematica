#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void newton(){

    printf("\nRealizando o c�lculo pelo M�todo de Newton\n");

    // Para utilizar o M�todo de Newton, apenas � necess�rio um valor inicial e o erro desejado
    // Ainda � utilizada a vari�vel erroaux como forma de compara��o do erro

    double precisao, inicial, aux, erroaux = 1, j = 1;

    printf("\nInsira a precis�o desejada: ");
    scanf("%lf", &precisao);

    printf("Insira o valor inicial: ");
    scanf("%lf", &inicial);

    printf("\n");

    for(int i = 0; j >= precisao; i++){

            aux = inicial;

            inicial = inicial - ((10*pow(inicial,3))-(24.73*pow(inicial,2))+(3.952*inicial)-0.169936)/((30*pow(inicial,2))-(49.46*inicial)+3.952);
            printf("C�lculo de n�mero %d: %f\n", (i+1), inicial);

            j = fabs(inicial - aux)/fabs(inicial);

            printf("Precis�o relativa de n�mero %d: %f\n\n", (i+1), j);
    }

    printf("O resultado final ser�: %f\n",inicial);
}

void secantes(){

    printf("\nRealizando o c�lculo pelo M�todo das Secantes\n");

    // Para utilizar o M�todo das Secantes, � necess�rio dois valores iniciais e o erro desejado
    // Ainda � utilizada a vari�vel erroaux como forma de compara��o do erro

    double precisao, x1, x2, aux, erroaux = 1, j = 1;

    printf("\nInsira a precis�o desejada: ");
    scanf("%lf", &precisao);

    printf("Insira o primeiro valor inicial: ");
    scanf("%lf", &x1);

    printf("Insira o segundo valor inicial: ");
    scanf("%lf", &x2);

    printf("\n");

    for(int i = 0; j >= precisao; i++){

            aux = x2;

            x2 = x2 - (x2 - x1)/((((10*pow(x2,3))-(24.73*pow(x2,2))+(3.952*x2)-0.169936)/((30*pow(x2,2))-(49.46*x2)+3.952))-(((10*pow(x1,3))-(24.73*pow(x1,2))+(3.952*x1)-0.169936)/((30*pow(x1,2))-(49.46*x1)+3.952)))*(((10*pow(x2,3))-(24.73*pow(x2,2))+(3.952*x2)-0.169936)/((30*pow(x2,2))-(49.46*x2)+3.952));

            printf("C�lculo de n�mero %d: %f\n", (i+1), x2);

            j = fabs(x2 - aux)/fabs(x2);

            printf("Precis�o relativa de n�mero %d: %f\n\n", (i+1), j);
    }

    printf("O resultado final ser�: %f\n",x2);

}

int main(){

    /* Declara��o de vari�veis e configurando teclado brasileiro */

    setlocale(LC_ALL, "Portuguese");
    int teste = 1;
    char op;

    printf("Trabalho 1 de C�lculo Num�rico e Programa��o Matem�tica\n");
    printf("Encontrando uma das ra�zes da equa��o c�bica de Vander-Der-Walls (ASR2-Ex.2)\n\n");

    /* Determinando o m�todo a ser utilizado (Newton ou Secantes) */

    printf("Selecione 0 para M�todo de Newton e 1 para M�todo das Secantes\n");
    printf("Determine o m�todo a ser utilizado: ");

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

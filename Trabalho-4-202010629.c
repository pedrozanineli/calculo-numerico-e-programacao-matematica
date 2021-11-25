#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void rtc(){

    printf("\nRealizando a integração numérica pela Regra dos Trapézios Composta");

    int sub;
    double h, sup, inf, res = 0;

    printf("\nInsira o número de subdivisões: ");
    scanf("%d", &sub);

    printf("\nInsira o limite inferior da integração: ");
    scanf("%lf", &inf);

    printf("Insira o limite superior da integração: ");
    scanf("%lf", &sup);

    h = (sup-inf)/sub;

    printf("\n");

    for(int i = 0; i <= sub; i++){

            if(i == 0 || i == sub){
                res = res + exp(inf + (h*i));
            }else{
                res = res + 2*exp(inf + (h*i));
            }

    }

    res = res*(h/2);
    printf("O resultado final será: %f\n",res);

}

void rsc(){

    printf("\nRealizando a integração numérica pela Regra de Simpson Composta");

    int sub;
    double h, sup, inf, res = 0;

    printf("\nInsira o número de subdivisões: ");
    scanf("%d", &sub);

    printf("\nInsira o limite inferior da integração: ");
    scanf("%lf", &inf);

    printf("Insira o limite superior da integração: ");
    scanf("%lf", &sup);

    h = (sup-inf)/sub;

    printf("\n");

    for(int i = 0; i <= sub; i++){

        if(i == 0 || i == sub){
            res = res + exp(inf + (h*i));
        }else{
            if(i%2 == 1){
                res = res + 4*exp(inf + (h*i));
            }else{
                res = res + 2*exp(inf + (h*i));
            }
        }
    }

    res = (res*h/3);
    printf("O resultado final será: %f\n",res);

}

int main(){

    /* Declaração de variáveis e configurando teclado brasileiro */

    setlocale(LC_ALL, "Portuguese");
    int teste = 1;
    char op;

    printf("Trabalho 4 de Cálculo Numérico e Programação Matemática\n");
    printf("Integração Numérica para a função e^x\n\n");

    printf("Observação: os decimais devem ser separados por vírgula\n\n");

    printf("Selecione 0 para a Regra dos Trapézios Composta e 1 para Regra de Simpson Composta\n");
    printf("Determine o método a ser utilizado: ");

    do{

        scanf("%c", &op);

        if(op == '0' || op == '1'){
            teste = 0;
        }

    }while(teste);

    switch(op) {
            case '0':   rtc();
                        break;
            case '1':   rsc();
                        break;
            default:    break;
    }

    return 0;
}

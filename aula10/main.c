#include <stdio.h>

int main(){
//    printf("%tipo_de_saida", valor_a_ser_impresso);
//    printf("%tipo1 %tipo2, var1, var2");

    int num = 1111;
    printf("%i\n", num);

    float f = 2.3;
    printf("%f\n", f);

    //integer %i ou %d
    //float / double %f
    //char %c
    //string %s

    //%u módulo de um número
    //%p endereço da memória
    //%e ou %E para imprimir número com notação científica
    //%% para imprimir somente UM sinal de porcentagem

    int x = 10;
    printf("%i\n", x);

    float ff = 4.12;
    printf("%f\n", ff);
 
    printf("%i - %f", x, ff);

    return 0;
}
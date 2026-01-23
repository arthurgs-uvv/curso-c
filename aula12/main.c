#include <stdio.h>
#include <stdlib.h>

int main(){

    //scanf("tipo_de_entrada", &variavel_que_recebera);

    int var1;
    float var2;
    printf("Por favor, digite dois numeros: \n");
    scanf("%i%f", &var1, &var2);
    
    printf("%i e %.2f", var1, var2);

    return 0;
}
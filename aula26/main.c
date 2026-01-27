#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char c;
    printf("Digite o numero 1: \n");
    c = getchar();

    if(c == '1'){
        printf("O caracter digitado esta correto.\n");
    } else{
        printf("\n O valor digitado e invalido.\n");
        printf("Voce digitou o caracter >%c<", c);
    }


    return 0;    
}
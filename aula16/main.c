#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char c;

    printf("Digite um caractere em letra minúscula: ");
    scanf("%c", &c);
    
    if(c >= 'a'){
        printf("\nSegue a letra que você digitou maiúscula: > %c <", toupper(c));
    }

    return 0;
}
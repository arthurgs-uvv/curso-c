#include <stdio.h>

int main() {
    int i = 1; //caso não declarar valor será qualquer valor
    char a, b;

    a = '1';
    b = '2';

    printf("%d", i);

    return 0;
}

/*

    1) Toda variável possui um nome
    2) Toda variável possui um tipo
    3) Toda variável possui um tamanho
    4) Toda variável possui um valor

    a) é temporário
    b) quando um programa é fechado ou o pc é desligado, tudo que estiver na memória será removido
    c) valores armazenados na memória são voláteis
    d) o valor antigo da nossa var, sempre será sobreposto
*/
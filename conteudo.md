# Linguagem C
gcc main.c -o main
```
| Comando    | O que faz             |
| ---------- | --------------------- |
| `dir`      | Lista arquivos/pastas |
| `cd pasta` | Entra na pasta        |
| `cd ..`    | Volta                 |
| `cls`      | Limpa terminal        |
```
## Bibliotecas
```
#include <stdio.h>  
#include <stdlib.h>  
#include <ctype.h>  
```

## Data types
```
1- char             &c
2- int              &i
3- float            &f
4- double           &lf
5- void (vazio)  
```

## Comentário
`// ou /* */`  

## Operadores Lógicos
``` 
Positivo -> 1  
Negativo -> 0    
  
== : comparação positiva  
!= : comparação negativa  
!  : negacao  
```

## Operadores Relacionais
```
>  : maior que  
<  : menor que  
&& : and  
|| : or  
``` 

## Modificadores de Type
```
signed   -> + e -
unsigned -> +
long     -> aumentar a capacidade de armazenamento da nossa variável
short    -> nos queremos diminuir o tamanho de armazenamento
```

## Condições
```
if (condicao){
    codigo 
} else if (condicao 2){
    codigo
} else {
    codigo
}


switch (expressao){
    case(expressao):
        break; //sai do switch
    case(expressao):
        break;
    default:   //executada caso nenhuma expressao seja atendida ou caso não haja break
}

```

## Laços
```
while (condicao){   //loop q executa while a condicao for true
    codigo
}


do{                 //loop q executa no minimo uma vez
    codigo
} while (condicao)


for(variavel; condicao; incrementação){ //loop definido
    codigo
}


break;      //interrompe o for (sai dos ciclos)
continue;   //interrompe o nosso laço
```

## Operadores de Atribuição
```
x = x + 1;
x++    : pós-incremento;
++x    : pré-incremento;
x += y : soma por y;
-= : subtração;
*= : multiplicação;
/= : divisão;
%= : resto da divisão;
```

## Associatividade de Operadores
```
/Associação da esquerda para direita
1 - ()
2 - *, /, %
3 - +, -
4 - <, <=, >, >=
5 - ==, !=

/Associação da direita para esquerda
1 - ++, --
2 - =, +=, -=, *=, /=, %=
```

## Constantes
Valores que não serão alterados.
```
#[comando] [nome_da_const] [valor] //antes do main
Ex: #define x 8

const [type] [name] = [valor];
```

## Alguns que não sei
``` 
sizeof(x) : retorna o tamanho da variável
system("pause") : parar o programa
system("cls") : limpar a tela
getch() : recebe um unico caractere mas não mostra
getche() : recebe um unico caractere mas mostra
``` 

## Operação Ternária
```
([expressão]) ? [valorTrue] : [valorFalse];
EX: x = (a==1) ? 1 :
        (a==2) ? 2 : -1;
```
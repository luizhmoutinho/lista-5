// 7. Implemente uma fun��o `fatorial` que calcula e retorna o fatorial de um n�mero inteiro n�o negativo.

#include <stdio.h>
#include <stdlib.h>

int fatorial(int numero){
    int resultado = 1;

    if(numero > 0){
        for (int i = numero; i > 0; i--)
        {
            resultado *= i;
        }
        
    }else{
        return 0;
    }


    return resultado;
}

int main(){

    printf("%d", fatorial(4));
    return 0;
}

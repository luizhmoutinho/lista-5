// 9. Desenvolva uma fun��o `calculaMedia` que recebe tr�s notas e retorna a m�dia aritm�tica.

#include <stdio.h>
#include <stdlib.h>

float calculaMedia(int nota1, int nota2, int nota3){
    return (nota1 + nota2 + nota3)/3;
}

int main(){

    printf("media: %.2f", calculaMedia(10, 8, 9));
    return 0;
}

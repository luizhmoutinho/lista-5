// 16.  Implemente uma função `operacoesBasicas` que recebe dois números e retorna, através de parâmetros por referência, a soma, subtração, multiplicação e divisão.

#include <stdio.h>

void operacoesBasicas(float a, float b, float *soma, float *sub, float *mult, float *div) {
    *soma = a + b;
    *sub = a - b;
    *mult = a * b;
    *div = b != 0 ? a / b : 0;
}

int main() {
    float x = 10, y = 2, s, sb, m, d;
    operacoesBasicas(x, y, &s, &sb, &m, &d);
    printf("Soma: %.2f\nSubtração: %.2f\nMultiplicação: %.2f\nDivisão: %.2f\n", s, sb, m, d);
    return 0;
}

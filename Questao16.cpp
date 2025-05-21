// 16.  Implemente uma fun��o `operacoesBasicas` que recebe dois n�meros e retorna, atrav�s de par�metros por refer�ncia, a soma, subtra��o, multiplica��o e divis�o.

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
    printf("Soma: %.2f\nSubtra��o: %.2f\nMultiplica��o: %.2f\nDivis�o: %.2f\n", s, sb, m, d);
    return 0;
}

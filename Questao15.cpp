// 15. Escreva uma fun��o recursiva `somaRecursiva` que calcula a soma dos n�meros de `1` at� `N`.

#include <stdio.h>

int somaRecursiva(int n) {
    if (n == 1)
        return 1;
    else
        return n + somaRecursiva(n - 1);
}

int main() {
    int n = 5;
    printf("Soma de 1 at� %d: %d\n", n, somaRecursiva(n));
    return 0;
}

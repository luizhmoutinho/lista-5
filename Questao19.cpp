// 19.  Implemente uma fun��o recursiva `fibonacci` que retorna o `n`-�simo termo da sequ�ncia de Fibonacci.

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 8;
    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    return 0;
}

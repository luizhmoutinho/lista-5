// 12. Implemente uma fun��o `buscaElemento` que recebe um array, seu tamanho e um valor, retornando a posi��o do valor no array ou `-1` se n�o encontrado.

#include <stdio.h>

int buscaElemento(int arr[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == valor)
            return i;
    }
    return -1;
}

int main() {
    int v[5] = {4, 7, 10, 2, 5};
    int pos = buscaElemento(v, 5, 10);
    printf("Posi��o do valor: %d\n", pos);
    return 0;
}

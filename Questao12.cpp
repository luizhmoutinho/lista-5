// 12. Implemente uma função `buscaElemento` que recebe um array, seu tamanho e um valor, retornando a posição do valor no array ou `-1` se não encontrado.

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
    printf("Posição do valor: %d\n", pos);
    return 0;
}

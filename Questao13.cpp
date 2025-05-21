// 13. Crie um procedimento `ordenaCrescente` que recebe um array de inteiros e seu tamanho, ordenando-o em ordem crescente.

#include <stdio.h>

void ordenaCrescente(int v[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
}

int main() {
    int v[5] = {5, 1, 4, 2, 3};
    ordenaCrescente(v, 5);
    for (int i = 0; i < 5; i++) printf("%d ", v[i]);
    return 0;
}

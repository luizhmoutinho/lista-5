// 17. Crie uma função `somaMatrizes` que recebe duas matrizes `3x3` e retorna (em uma terceira matriz) a soma delas.

#include <stdio.h>

void somaMatrizes(int a[3][3], int b[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            resultado[i][j] = a[i][j] + b[i][j];
}

int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int r[3][3];

    somaMatrizes(a, b, r);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", r[i][j]);
        printf("\n");
    }
    return 0;
}

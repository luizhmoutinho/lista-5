// 18.  Desenvolva uma função `criaData` que recebe dia, mês e ano e retorna uma struct `Data`.

#include <stdio.h>

struct Data {
    int dia, mes, ano;
};

struct Data criaData(int d, int m, int a) {
    struct Data nova;
    nova.dia = d;
    nova.mes = m;
    nova.ano = a;
    return nova;
}

int main() {
    struct Data hoje = criaData(21, 5, 2025);
    printf("Data: %02d/%02d/%04d\n", hoje.dia, hoje.mes, hoje.ano);
    return 0;
}

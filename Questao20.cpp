// 20.  Crie um programa modular com as seguintes funções:
// - `lerDados`: lê um array de structs `Aluno` (com nome e nota).
// - `calculaMediaTurma`: retorna a média da turma.
// - `melhorAluno`: retorna o nome do aluno com a maior nota.
// - `imprimeResultados`: exibe os resultados formatados.

#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    float nota;
};

void lerDados(struct Aluno alunos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }
}

float calculaMediaTurma(struct Aluno alunos[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) soma += alunos[i].nota;
    return soma / n;
}

char* melhorAluno(struct Aluno alunos[], int n) {
    int melhor = 0;
    for (int i = 1; i < n; i++) {
        if (alunos[i].nota > alunos[melhor].nota)
            melhor = i;
    }
    return alunos[melhor].nome;
}

void imprimeResultados(struct Aluno alunos[], int n) {
    printf("\nResultados:\n");
    for (int i = 0; i < n; i++)
        printf("Aluno: %s - Nota: %.2f\n", alunos[i].nome, alunos[i].nota);

    printf("Média da turma: %.2f\n", calculaMediaTurma(alunos, n));
    printf("Melhor aluno: %s\n", melhorAluno(alunos, n));
}

int main() {
    struct Aluno turma[3];
    lerDados(turma, 3);
    imprimeResultados(turma, 3);
    return 0;
}

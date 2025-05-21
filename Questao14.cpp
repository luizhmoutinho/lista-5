// 14. Implemente uma fun��o `contaVogais` que recebe uma string e retorna o n�mero de vogais.

#include <stdio.h>
#include <string.h>

int contaVogais(char s[]) {
    int cont = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            cont++;
    }
    return cont;
}

int main() {
    char texto[100];
    printf("Digite uma frase: ");
    scanf(" %[^\n]", texto);
    printf("N�mero de vogais: %d\n", contaVogais(texto));
    return 0;
}

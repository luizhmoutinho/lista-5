//2. Crie uma fun��o `imprimirNumero` que recebe um inteiro como par�metro e o imprime na tela.

#include<stdio.h>

void imprimirNumero(int numero){
	printf("O numero e: %d\n", numero);
}

int main(){
	int valor;
	printf("Insira um numero inteiro qualquer: ");
	scanf("%d", &valor);
	imprimirNumero(valor);
	return 0;
}

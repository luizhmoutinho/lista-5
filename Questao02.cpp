//2. Crie uma função `imprimirNumero` que recebe um inteiro como parâmetro e o imprime na tela.

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

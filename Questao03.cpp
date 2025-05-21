//3. Desenvolva uma função `soma` que recebe dois números inteiros e retorna a soma deles.

#include<stdio.h>

int soma(int num1, int num2){
	return num1 + num2;
}

int main(){
	int num1, num2, resultado;
	printf("Insira dois numeros inteiros:\n");
	scanf("%d %d", &num1, &num2);
	resultado = soma(num1,num2);
	printf("O resultado da soma: %d", resultado);
	return 0;
}

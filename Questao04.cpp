//4. Implemente uma função `maior` que recebe dois números e retorna o maior deles.

#include<stdio.h>

void maior(int num1, int num2){
	if (num1 > num2){
		printf("Maior: %d\n", num1);
		printf("Menor: %d", num2);
	} else {
		printf("Maior: %d\n", num2);
		printf("Menor: %d", num1);
	}
}

int main (){
	int num1, num2;
	printf("Insira dois numeros inteiros quaisquer:\n");
	scanf("%d %d", &num1, &num2);
	maior(num1,num2);
	return 0;
}

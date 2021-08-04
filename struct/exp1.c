#include <stdio.h>

struct NODE{
	int x, y;
	char ID;
};

int main(){

	struct NODE nA, nB, nC;
	//Leitura do NODE A
	puts("Entre com ID (A): ");
	scanf("%c", &nA.ID);
	puts("Entre com valor de X: ");
	scanf("%d", &nA.x);
	puts("Entre com valor de Y: ");
	scanf("%d", &nA.y);

	getchar();
	//Leitura do NODE B
	puts("Entre com ID (B): ");
	scanf("%c", &nB.ID);
	puts("Entre com valor de X: ");
	scanf("%d", &nB.x);
	puts("Entre com valor de Y: ");
	scanf("%d", &nB.y);

	getchar();
	//Leitura do NODE C
	puts("Entre com ID (C): ");
	scanf("%c", &nC.ID);
	puts("Entre com valor de X: ");
	scanf("%d", &nC.x);
	puts("Entre com valor de Y: ");
	scanf("%d", &nC.y);

	getchar();
	//Imprimir NODE A 
	printf("ID: %c\n", nA.ID);
	printf("valor de X: %d\n", nA.x);
	printf("valor de Y: %d\n", nA.y);
	
	//Imprimir NODE B
	printf("ID: %c\n", nB.ID);
	printf("valor de X: %d\n", nB.x);
	printf("valor de Y: %d\n", nB.y);
	
	//Imprimir NODE C 
	printf("ID: %c\n", nC.ID);
	printf("valor de X: %d\n", nC.x);
	printf("valor de Y: %d\n", nC.y);
	
	return 0;
}
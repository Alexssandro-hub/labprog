#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void multiplicar(int, int, int *);
void dividir(int, int, int *);
void subtrair(int, int, int *);

void calcular( void (*pF) (int, int, int *), int a, int b, int *pR);

typedef void (*Func)(); //Aponta para qual função a partir do código digitado para operação.

int main(int argc, char *argv[]){
	
	if (argc!=4){
		printf("Formato\n\t\t%s <valor1> <valor2> <codOper>\n",argv[0]);
		exit(1);
	}

	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int op = atoi(argv[3]); 
	int resultado;

	Func v[3] = {multiplicar, dividir, subtrair};
	
	calcular( v[op], n1, n2, &resultado);
	printf("resultado = %d\n",resultado);

	return 0;
}

void multiplicar(int x, int y, int *z){
	*z = x * y;
}

void dividir(int x, int y, int *z){
	*z = x / y;
}

void subtrair(int x, int y, int *z){
	*z = x - y;
}

void calcular( void (*pF) (int, int, int *), int a, int b, int *pR){
	(*pF)(a,b,pR);
}
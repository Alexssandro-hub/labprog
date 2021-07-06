#include <stdio.h>
#include <stdlib.h>

typedef void (*Func)();

void multiplicar(int, int, int *);
void dividir(int, int, int *);

int main(int argc, char *argv[]){
	
	if (argc!=4){
		printf("Formato\n\t\t%s <valor1> <valor2> <codOper>\n",argv[0]);
		exit(1);
	}

	Func v[2] = {multiplicar, dividir};
	void (*oper)(int, int, int *) = NULL;

	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int op = atoi(argv[3]);
	int r;

	oper = (op % 2)?*(v+1):*v; // oper = (op % 2)?v[1]:v[0];

	(*oper)(n1,n2,&r); //opcao 2.

	printf("r = %d\n",r);

	return 0;
}

void multiplicar(int x, int y, int *z){
	*z = x * y;
}

void dividir(int x, int y, int *z){
	*z = x / y;
}



 
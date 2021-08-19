#include <stdio.h>

typedef struct n {
	int x;
	struct n *prox;
} Node;

void imprimir(Node*);

int main (){
	//Entrada de dados
	Node n1, n2, n3, root;

	n1.prox = &n2;
	n2.prox = &n3;
	n3.prox = NULL;

	//Processamento
	n1.x = 10;
	n2.x = 20;
	n3.x = 30;

	//Root é a raíz dos nó's onde ela aponta para o 1º nó;
	root.prox = &n1;

	//Saída de dados
	imprimir(&root);
	return 0;
}

void imprimir (Node* p){

	Node *k;

	//Imprime a varredura de dados do Node até chegar em NULL;
	for(k=p; k != NULL; k= k-> prox){
		printf("%d \n", k->x);
	}
}

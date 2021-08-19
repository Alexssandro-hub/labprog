#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 100

typedef struct n {
	int x;
	struct n *prox;
} Node;

//Protótipos de funções
void imprimir(Node *);
void inserir(int, Node *);
void remover(Node *);

int main (){
	//Entrada de dados
	Node n1, n2, n3, root;

	srand(time(NULL));

	//Root é a raíz dos nó's onde ela aponta para o 1º nó;
	root.prox = &n1;

	n1.x = 10;
	n1.prox = &n2;
	
	n2.x = 20;
	n2.prox = &n3;
	
	n3.x = 30;
	n3.prox = NULL;

	//Saída de dados
	inserir(rand()%MX, &root);
	imprimir(&root);
	remover(&root);
	return 0;
}

void imprimir (Node* p){

	Node *k;

	//Imprime a varredura de dados do Node até chegar em NULL;
	for(k= p -> prox; k != NULL; k= k-> prox){
		printf("%d \n", k->x);
	}
}

void inserir (int v,Node *p){

	Node *n;
	
	n = (Node*) malloc(sizeof(Node*));
	n -> x = v;
	n -> prox = p -> prox;
	p -> prox = n;
	printf("Inserido: %d\n", v);
}

void remover (Node* p){
	Node *n;

	n=(Node*) malloc(sizeof(Node*));
	// n -> x = v;
	// n -> prox = p -> prox;
	// p -> prox = n;	
	free(n);
}
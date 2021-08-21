//Crie uma fun ̧c ̃ao que receba, por referˆencia, um elemento da lista encadeada descrita na figura a seguire imprima x do elemento fornecido e do seguinte. Imprima uma mensagem para o usu ́ario se o elemento recebido for o  ́ultimo da lista. O tipo de retorno dessa fun ̧c ̃ao deve ser void.

#include <stdio.h>
#include <stdlib.h>
#define TAM 10
typedef struct n{

	int x, y;
	struct n *p;

} Node;

void ImprimirSeguinte(Node *);
void digitarNum (Node *);

int main () {

	Node n1, n2, n3;
	int k;

	for(k=0; k<TAM; k++){
			
		if(k != TAM){
			digitarNum(&n1);
			n1.p = &n2;
			n2.p = &n3;
			n3.p = NULL;
			ImprimirSeguinte(&n1);
		} else {
			printf("O numero recebido foi o ultimo da lista!");
		}
	}

	return 0;
}

void digitarNum (Node *n){
	
	int num ;
	
	printf("Favor, digitar um numero: \n");
	scanf("%d", &num);

}

void ImprimirSeguinte(Node *n){
	printf("X do seguinte: %d\n", n->p->x);
	printf("Y do seguinte: %d\n", n->p->y);
}


#include <stdio.h>

struct Node{
	
	int x;
	int y;
	struct Node *p;
};

void ImprimirSeguinte(struct Node*);

int main(){

	struct Node n1, n2, n3;

	n1.x = 10;
	n1.y = 12;
	n1.p = &n2;

	n2.x = 20;
	n2.y = 22;
	n2.p = &n3;

	n3.x = 30;
	n3.y = 32;
	n3.p = NULL;

	ImprimirSeguinte(&n1);

	return 0;
}

void ImprimirSeguinte(struct Node *n){
	printf("X do seguinte: %d\n", n->p->x);
	printf("Y do seguinte: %d\n", n->p->y);
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MX 100

struct node{
	int x;
	int y;
};

int main(){
	struct node ns[TAM], n1;
	int k;

	srand(time(NULL));

	for (k=0; k< TAM; k++){
		ns[k].x = rand() % MX;
		ns[k].y = rand() % MX;
	}

	for (k=0; k< TAM; k++){
		printf("x: %d\n",ns[k].x);
		printf("y: %d\n",ns[k].y);
		printf("---\n");
	}

	n1 = ns[2];

	printf("---\n---\n");
	printf("x: %d\n",n1.x);
	printf("y: %d\n",n1.y);
	printf("---\n");

	return 0;
}
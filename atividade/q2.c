//Escreva um programa em C que organize em uma Estrutura o endere ̧co de um vetor alocado dinamicamente, a quantidade de elementos desse vetor e o maior valor presente no vetor. Para obter o maior valor, crie uma fun ̧c ̃ao o mais gen ́erica (reutilizável) poss ́ıvel. Observe que o vetor nao é um elemento da Estrutura.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define MX 100

typedef struct root{
	
	struct root *p;
	int valor;

} Node;

void preencher(int*);
void bubble_sort(int*, int);

int main () {

	Node n, *p = NULL;

	p = (Node *) malloc (sizeof(Node));

	int k, tam,  *pV = NULL;

	*pV = n.valor;
	
	preencher(pV);
	bubble_sort(pV, tam);

	return 0;
}

void preencher (int *p){
	int k;

	srand(time(NULL));
	for(k=0; k<TAM; k++){
		*(p+k) = rand ()%MX;
	}
}

void bubble_sort (int *p, int tam) {
    int k, j, aux;

    for (k = 1; k < TAM; k++) {
        printf("\n[%d] ", k);

        for (j = 0; j < TAM - 1; j++) {
            printf("%d, ", j);

            if (*(p+j) > *(p+j+1)) {
                aux          = *(p+j);
                *(p+j)     = *(p+j+1);
                *(p+j+1) = aux;
            }
        }
    }
	printf("O maior valor é: %d \n", aux);
}
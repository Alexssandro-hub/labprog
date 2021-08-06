#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define MX 100
#define TAM 10

void preencher(int*, int);
void exibir (int*, int);
void frequencia(int*);

int main(){
//Entrada de Dados
	int *x = (int *) malloc(TAM * sizeof(int));
	int *y = (int *) malloc(TAM * sizeof(int));
	int *freq = (int *) malloc(TAM * sizeof(int));

preencher(x, TAM);
sleep(5); //Demora 5 seg para preencher x para depois preencher y, pois se ambos serem preenchido ao mesmo tempo terão os mesmos valores em suas determinadas posições.
preencher(y, TAM);

puts("Valores do vetor X: \n");
exibir(x, TAM);

puts("\n");

puts("Valores do vetor Y: \n");
exibir(y, TAM);


//Processamento dos Dados
frequencia(freq);

free(x);
free(y);
free(freq);
   return 0;
}

//Preenche com números pseudo-aleatórios a matriz
void preencher (int* p, int t){
	int k;
	srand(time(NULL));
	
	for(k=0; k<t; k++){
		*(p+k)= rand()%MX;
	}
}

//Exibe os vetores preenchidos
void exibir(int* p, int t){
	int k;

	for(k=0; k<t; k++){
		printf("\t valores: [%d]\n", p[k]);
	}
}

//Realiza a co-ocorrência dos números nas duas dimensões matriciais
void frequencia(int* p){
	int k;
	int* x, *y;
	int M[TAM][TAM];
	for(k=0; k<MX; k++){
		//M é a matriz bi-dimensional(abstrata na memória), onde calcula a ocorrência das matrizes unidimensionais x e y na memória.
		++M[x[k]][y[k]];
	}
}
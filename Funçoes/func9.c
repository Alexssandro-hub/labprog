//Escreva um programa em C que informe se o somatório da diagonal principal de matriz N x N gerada  ́e par ou  ́ımpar.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10

//Protótipos
void preencher (int*, int);
void exibir(int*, int);
void somatorio (int*, int, int*);

int main (int argc, char* argv[]){
	//Entrada de dados
	if (argc!=2){
		printf("Formato: \n\t%s <DimensãoMATRIZ>", argv[0]);
		exit(1);
	}

	int tam = atoi (argv[1]);
	int *p= (int* ) calloc (tam,sizeof(int));
	int soma[tam][tam];

	
	//Processamento
	preencher(p, tam);
	exibir(p, tam);
	
	
	return 0;
}

//Preenche toda a matriz com valores pseudo-aleatórios
void preencher (int *p, int t){
	int k, i;
	
	srand(time(NULL));
	
	for(k=0; k<t; k++){
		*(p+k) = rand () % MX;
	}
}

//Exibe todos os valores da matriz
void exibir(int *p, int t){
	int k;

	for(k=0; k<t; k++){	
		printf("O valor do vetor é: [%d] \n", *(p+k));
		}	
}

//Realiza o somatório da diagonal principal, ∀ dimensão NxN usada pelo usuário.  
void somatorio (int *p, int t, int* s){

}
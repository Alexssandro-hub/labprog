//Escreva um programa em C que informe se o somatório da diagonal principal de matriz N x N gerada  ́e par ou  ́ımpar.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define MX 100

//Protótipos
void preencher (int*, int);
void exibir(int*, int);
void somatorio (int*, int, int*);

int main (int argc, char* argv[]){
	//Entrada de dados
	if (argc!=2){
		printf("Formato: \n\t%s <DimensãoMATRIZ> ", argv[0]);
		exit(1);
	}

	int tam = atoi (argv[1]);
	int *p= (int* ) malloc (tam*sizeof(int));
	int *q= (int* ) malloc (tam*sizeof(int));
	int soma;
	int square = tam*tam;
	//Processamento
	preencher(p, square);
	sleep(3);
	
	exibir( p, square);	
	printf("\n");
	
	somatorio(p, tam, &soma);
	free(p);
	return 0;
}

//Preenche toda a matriz com valores pseudo-aleatórios
void preencher (int *p, int t){
	int k;
	
	srand(time(NULL));
	
	for(k=0; k<t; k++){	
		*(p+k) = rand () % MX;
 	}
}

//Exibe todos os valores da matriz
void exibir(int *p, int t){
	int k;
	for(k=0; k<t; k++){
    	
		printf("\t[%d]\n ", p[k]);
		
    }

}	

//Realiza o somatório da diagonal principal, ∀ dimensão NxN digitada pelo usuário.  
void somatorio (int *p, int t, int* s){
	int k;
	*s=0;
	for(k=0; k<t*t; k++){
		
		if(!(k % (t+1))){
			printf("Valores da diagonal: [%d] \n", *(p+k));
			*s += *(p+k); 
		}
	}
	if(*s%2){
		printf("\tResultado do somatório: ÍMPAR!\n");
	} else{
		printf("\tResultado do somatório: PAR!\n");
	}
}
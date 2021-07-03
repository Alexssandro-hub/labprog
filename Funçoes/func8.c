//Escreva um programa em C que binarize os elementos da matriz M gerada aleatoriamente e com dimensões obtidas em tempo de execução. A partir de um limiar t dado, crie a matriz S da seguinte forma:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10

//Protótipos e cabeçalhos de funções 
void preencher(int* , int, int*);
void exibir(int* , int, int*);
void binarizar(int*, int, int*);

int main(int argc, char* argv[]){
	//Entrada de Dados
	if(argc!=2){
		printf("Formato: <Tamanho Da Dimensão>\n");
		exit(1);
	}
	
	int tam = atoi (argv[2]);
	int *p = (int*) malloc( tam * sizeof(int));
	int Mbin[tam][tam];

	//Processamento
	preencher(p, tam, &Mbin[tam][tam]);
	exibir(p, tam, &Mbin[tam][tam]);
	binarizar(p, tam, &Mbin[tam][tam]);
	
	return 0;
}
//Preenche a matriz com valores pseudo-aleatórios.
void preencher(int* p, int t, int* m){
	int k;

	for(k=0; k<t; k++){
	*(p+k)=rand()%MX;
	}
	printf("[%d] ", *(p+k));
}

//Exibe os valores dentro da Matriz.
void exibir(int* p, int t, int* M){
	int k, i, j, Mbin[t][t];

	for(k=0; k<t; k++)
	printf("Valores do Vetor na Matriz: [%d]\n", *(p+k));
}
//Binariza os vetores da Matriz S(i,j).
void binarizar(int *p, int t, int* Mbinary){
	
	int k, j, Mbin[t][t];
	
	//Binarizando elementos com 4-bits, usando "shift", para deslocar os bits com operadores aritméticos.
	for (k = 0; k < t; k++) {
     Mbin[k][0] = (k >> 3) & 0x1;
     Mbin[k][1] = (k >> 2) & 0x1;
     Mbin[k][2] = (k >> 1) & 0x1;
     Mbin[k][3] = k & 0x1;
   }

   //Mostra os valores da matriz
   for (k = 0; k < t; k++) {
    for (j = 0; j < 4; j++) {
        printf("%d", Mbin[k][j]);
     }
    puts("");
   }
}


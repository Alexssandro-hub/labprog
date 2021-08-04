#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define MX 10

void interseccao(int *A, int *B, int *C);
void preencher(int *, int);

int main (int argc, char* argv[]){
	//Entrada de Dados
	if(argc!=3){
		printf("Formato:\t%s <dimK> <dimM>", argv[0]);
		exit(1);
	}
	int tamA = atoi (argv[1]);
	int tamB = atoi (argv [2]);
	int *pA= (int *) malloc (tamA * sizeof(int));
	int *pB= (int *) malloc (tamB * sizeof(int));

	int conjC = *pA;
	int novoC[*pA];


  
	//Processamento
	preencher(pA, tamA);
	sleep(3);
	preencher(pB, tamB);
	interseccao(pA, pB, &conjC);

	
}

void preencher(int *p, int t){
	int k;
	srand(time(NULL));
	for(k=0; k<t; k++){
		*(p+k)= rand()%MX;
	}
}

void interseccao(int *conjA, int *conjB, int *conjC) {
	int i, C[MX];
	int tamC=0; 
	
	for(int i=0; i < MX;i++)
    {
        for(int j=0;j < MX; j++)
        {
            if(*conjA == *conjB)
            {
                C[tamC++] = *conjA; //coloca o elemento no vetor de interseccao   
                break;
            }
        }
    }
    for(int i=0; i < tamC;i++) //percorre até ao tamC
    {
        printf("Os dois vetores tem em comum: [%d]\n", C[i]);
    }	
}

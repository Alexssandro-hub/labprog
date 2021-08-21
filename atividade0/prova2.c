#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10
void preencher (int *, int);
void frequencia (int *, int, int*);
int main(int argc, char* argv[]){
	
	if(argc!=2){
		printf("Formato: <TamanhoVetor> \n");
		exit(1);
	}
	int tam = atoi(argv[1]), freq;
	int *pV = (int*) malloc(tam*sizeof(int));

	//Processanmento
	preencher(pV, tam);
	frequencia(pV, tam, &freq);

	return 0;
}

void preencher (int *p, int t){

	int k;
	srand(time(NULL));
	for(k=0; k<t; k++){
		*(p+k)= rand () % MX;
	}
}

void frequencia (int *p, int t, int* valor){
	 int k, freq[t];
	 
	 for(k=0; k<t; k++){
       ++freq[*(p+k)];
  	}
  
  	if(freq[*(p+k)]%2){
	  	printf("Ocorrência Ímpar: %d ", freq[*(p+k)]);
  	} else {
		printf("Ocorrência Par: %d ", freq[*(p+k)]);
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 30
#define QTD 10

int main () {

  int  j, k, t;
  int v[TAM], *n = NULL, p1;

	srand(time(NULL));

  n = &v[0]; // n = v;

	// Entrada de dados
	for (k=0; k<TAM; k++){
		*(n+k) = rand() % QTD;
	}

	// Vetor SEM ordenacao
	puts("Vetor SEM ordenacao: ");
	for (k=0; k<TAM; k++){
		printf("%d ",*(n+k));
	}
	printf("\n");

	// Processamento 
  for (k=0; k < TAM; k++){ // laço - permitir o retorno pro inicio pra avaliar novamente os pares.
    
    for(j=0; j <TAM - 1; j++){
            
      if(n[j]>n[j+1]){
				t = n[j];
				n[j]= n[j+1];
				n[j+1]= t;
      }
    }
  }

	// Vetor COM ordenacao
	puts("Vetor COM ordenacao: ");
	for (k=0; k<TAM; k++){
		printf("%d ",*(n+k));
	}
	printf("\n");

  return 0;
}
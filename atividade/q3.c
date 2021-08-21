//Crie uma funcao que receba um vetor de Estruturas com dois campos inteiros (x e y) e retorne o enderco da Estrutura com menor distˆancia entre seus pr ́oprios elementos x e y. Para calculo da distˆancia, considere:

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

  typedef struct n{
  	
	int x,y;
	int dist;
  
} Node;
    
void distancia(Node *);			

int main(){
  Node n1, *pV = NULL;	

	pV = (Node*) malloc(sizeof(Node)*TAM);


  distancia(pV);

  printf(" end : %x", pV->dist);
	
  return 0;
}

void distancia(Node *n){
	n -> dist = (n->x - n-> y);
}
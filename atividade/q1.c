 //Defina uma Estrutura para armazenar um par (x,y) de coordenadas. Organize um vetor com 10 elementos dessas Estruturas. Para cada Estrutura, imprima a soma (x+y) dos pontos armazenados sem uso de ponteiros. Gere os valores x e y aleatoriamente. Utilize o typedef e #define.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define TAM 10
#define MX 100

typedef struct n {

	int x, y;

} Node;

int main(){

	Node n1[TAM];	
	int k;
	srand(time(NULL));

	for(k=0; k<TAM; k++){
		n1[TAM].x = rand () % MX;
		sleep(3);
		n1[TAM].y = rand () % MX;	
		
		printf("x: %d\n ", n1[TAM].x);
		printf("y: %d\n ", n1[TAM].y);
		printf("A soma é: %d \n", n1[TAM].x + n1[TAM].y);
	}
	
	return 0;
}
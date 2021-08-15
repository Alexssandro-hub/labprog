#include <stdio.h>

#define TAM 3

struct aluno {
	
  char nome[30];
  char matricula[12];
  float n1;
  float n2;
  float media;
};

float media(float a, float b);
float media2(struct aluno a);


int main(){
  struct aluno als[TAM];
  int k;

  // Entrada de Dados
  for (k=0; k<TAM; k++){
		printf("Digite os dados para o aluno: %d\n",k);
    scanf("%s",als[k].matricula);
    scanf("%f",&als[k].n1);
    scanf("%f",&als[k].n2);
    
		puts("---");
  }

  // Processamento
  for (k=0; k<TAM; k++){
    //als[k].media = media(als[k].n1, als[k].n2);
    als[k].media = media2(als[k]);
  }

  // Saída
  for (k=0; k<TAM; k++){
    printf ("%s - media: %.2f \n",als[k].matricula, als[k].media);
  }

  return 0;
}

float media(float a, float b){
  return (a+b)/2.0;
}

float media2(struct aluno a){
  return ( (a.n1)+(a.n2) ) / 2.0; 

}
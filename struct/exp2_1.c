#include <stdio.h>

#define TAM 2

struct curso{
  char nome[30];
  int semestreAtual;
};

struct aluno {
  char matricula[12];
  float n1;
  float n2;
  float media;
  struct curso c;
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
    scanf("%s",als[k].c.nome);
    scanf("%d",&als[k].c.semestreAtual);
		puts("---");
  }

  // Processamento
  for (k=0; k<TAM; k++){
    //als[k].media = media(als[k].n1, als[k].n2);
    als[k].media = media2(als[k]);
  }

  // Saída
  for (k=0; k<TAM; k++){
    printf ("%s - media: %.2f, semAtual: %d \n",als[k].matricula,als[k].media, als[k].c.semestreAtual);
  }

  return 0;
}

float media(float a, float b){
  return (a+b)/2.0;
}

float media2(struct aluno a){
  return ( (a.n1)+(a.n2) ) / 2.0; 

}
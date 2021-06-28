#include <stdio.h>
#define TAM 15

int main() {
  float v[TAM], maior, menor, somatorio;
  int i;
  //Preenche as posições do vetor.
  for (i=0; i<TAM; i++){
    printf("Favor digitar um número: %d\n\t", i);
    scanf("%f", &v[i]);
  }
  maior = v[0]; // encontra o maior valor do vetor.
  for(i=1; i<TAM; i++){
    if(v[i]<maior){ 
      maior=v[i];
    }
  }
  menor = v[0];// encontra o menor valor no vetor.
  for(i=1; i<TAM; i++){
    if(v[i]>menor){
      menor=v[i];
    }
  }
  //Mostra os valores em suas posições.
  printf("\t===== VETORES =====\t\n");
  for (i=0; i<TAM; i++){
    printf("Vetor: %.2f\n", v[i]);
  }
  //Soma o menor com o maior.
  somatorio = menor + maior;
  printf("Valor da soma entre o maior e menor vetor: %.2f\n", somatorio);
	
  return 0;
} 
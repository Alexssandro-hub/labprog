#include <stdio.h>

int main (){

  float altura;
  int sexo;
  char masculino, feminino;
  masculino=1;
  feminino=0;
  

  scanf("%f", &altura);
  printf("\n Sua altura é: %f", altura);
  
  printf("\n Digite seu sexo: %c", sexo);
  scanf("%d", &sexo);
  
  if(sexo==1){
  printf("\n Seu peso ideial é: %f", ((72.7 * altura) - 58));
  }else{
    printf("\n Seu peso ideial é: %f", ((62.1 * altura) - 44.7));
  }
}
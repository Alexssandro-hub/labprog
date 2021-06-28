#include <stdio.h> 
//Escreva um programa que leia um n ́umero inteiro e determine e imprima quantos d ́ıgitos no inteiro s ̃ao algarismos 7.
int main() {
  
  int valor, u,d,c,um, dm;
  printf("Digite um numero inteiro de 5 dígitos: \n");
  scanf("%d", &valor);
  
  u = valor/1;
  if(u==7){
   printf("É algarismo de 7! %d\n", u);
  }  
  d = valor/10;
  c = valor/100;
  um = valor/1000;
  dm = valor/10000;

return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main (){

unsigned char x,y; 

printf("Favor, digite um numero: \n");
scanf("%c", &x);
getchar();

printf("Favor, digite outro numero maior ou igual a 5: \n");
scanf("%c", &y);
getchar();

x= ~x;
printf("Valores à esquerda: %X\n",x);
x= (x<<1);
printf("Valores à esquerda: %X\n",x);
x= (x<<2);
printf("Valores à esquerda: %X\n",x);
x= (x<<3);
printf("Valores à esquerda: %X\n",x);
x= (x<<4);
printf("Valores à esquerda: %X\n",x);


printf("Valor de y com os bits escondidos de x: %X\n",x);




  return 0;
}
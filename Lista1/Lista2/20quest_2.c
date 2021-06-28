#include <stdio.h>

int main () {

  int n, i, fatorial=1;

    printf("Por favor, digite um numero na faixa de 1-10!\n");
    scanf("%d", &n);

    printf("Aperte qualquer número maior que 10 para sair do programar!\n\t");
    printf("\t\n=========================================\n\t");

  do {
    switch (n){
    case 1:
    for (i=n; i>1; i--){
      fatorial = fatorial * i;
    } printf("\t\tFatorial de 1 é: %d\n\t", fatorial);
    break;

    case 3:
    for (i=n; i>1; i--){
      fatorial = fatorial * i;
    } printf("\t\tFatorial de 3 é: %d\n\t", fatorial);
    break;

    case 5:
    for (i=n; i>1; i--){
      fatorial = fatorial * i;
    } printf("\t\tFatorial de 5 é: %d\n\t", fatorial);
    break;

    case 7:
    for (i=n; i>1; i--){
      fatorial = fatorial * i;
    } printf("\t\tFatorial de 7 é: %d\n\t", fatorial);
    break;
    
    case 9:
      for (i=n; i>1; i--){
      fatorial = fatorial * i;
    } printf("\t\tFatorial de 9 é: %d\n\t", fatorial);
    
    break;

    }
  }while(n>10);
   return 0;
}
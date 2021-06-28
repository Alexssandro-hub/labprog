#include <stdio.h>

int main (){

  char dia;

	do{ 

		printf("Digite um numero de 1-7: \n");
		scanf("%c", &dia);
		getchar();
		
		switch (dia){
      case '1':
      printf("Hoje é domingo!\n");
      break;

      case '2':
      printf("Hoje é segunda-feira!\n");
      break;

      case '3':
      printf("Hoje é terça-feira!\n");
      break;

      case '4':
      printf("Hoje é quarta-feira!\n");
      break;

      case '5':
      printf("Hoje é quinta-feira!\n");
      break;
      
      case '6':
      printf("Hoje é sexta-feira!\n");
      break;

      case '7':
      printf("Hoje é sábado!\n");
      break;

      case '0':
      printf("Saindo do programa!!\n");
      break;

		} 
	}while(dia!='0');



  return 0;
}
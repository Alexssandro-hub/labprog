#include<stdio.h>
int main()
{
	int x = 100, y = 10;
	printf("Valor inicial de x: %d \n",x);
	
	printf("\n Pos-incremento \t\n\n");
	printf("Valor de x na mesma linha do pos-incremento:  %d \n\t",x++); //vai exibir 100
	printf("Valor de x na linha seguinte ao pos-incremento: %d \t\n",x); //vai exibir 101
		
	printf("\nPre-incremento\t \n\n");
	printf("Valor de x na mesma linha do pre-incremento: %d \n",++x); //vai exibir 102	
	
	printf("Valor inicial de y: %d \n",y);//nesta linha vai exibir 10
		
	return 0;
}
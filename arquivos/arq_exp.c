#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	FILE *fp;

	char str[80];

	if(!(fp = fopen("TEST", "w"))){
		printf("O arquivo não pode ser iniciado\n");
		exit(1);
	}
	
	do {
		printf("Digite uma string: \n");
		fgets(str, 79, stdin);
		
		strcat(str, fp);
		fputs(str, fp);
	} while(*str != '\n');

	return 0;
}
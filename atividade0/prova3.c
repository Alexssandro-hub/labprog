#include <stdio.h>
void string (char*str, char c);
int main(){

	char str[30], c;

	string(str, c);
	return 0;
}

void string (char*str, char c){

	
	
	int x, n=0;
	printf("Digite um caractere: ");
	scanf("%c", &c); //aqui você lê o char
	printf("Digite uma palavra: ");
	scanf("%s", str); //aqui você lê a string

	for (x=0; x < *str; x++)
    if (str[x] == c) n++;

	printf( "%c apareceu %d vezes", c, n);

}






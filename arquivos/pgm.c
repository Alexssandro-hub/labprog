#include <stdio.h>
#include <stdlib.h>

typedef struct img {

	int tipo, col, row, mv;
	unsigned char *pData;

} pgm; 

//Protótipos de funções
void readPGMImage(pgm*, char*);
void writePGMImage(pgm*, char*);
void viewPGMImage(pgm*);

int main(int argc, char* argv[]){

	pgm img;

	//Validação argv[]
	if (argc != 3){
		printf("Formato: \n\t %s <ImagemEntrada.pgm><ImagemSaida.pgm>\n", argv [0]);
		exit(1);
	}

	//Ler arquivo seja tipo binário (Byte) ou em forma de Texto. 
	readPGMImage (&img, argv[1]);
	
	//Escreve no arquivo do tipo binário (Byte) ou em forma de Texto.
	writePGMImage(&img, argv[2]);

	//Visualiza arquivo do tipo binário (Byte) ou em forma de Texto.
	viewPGMImage(&img);

	return 0;
}

//Função para ler arquivo
void readPGMImage(pgm *pIO, char* filename){

	FILE *fp;
	char aux;
	int k;

	if(!(fp=fopen(filename, "r"))){
		perror("Falha ao ler arquivo!\n");
		exit(1);
	}

	if((aux = getc(fp))!='P'){
		puts("A imagem fornecida não está no formato .pgm");
		exit(1);
	}
	
	pIO -> tipo = getc(fp) - 48;
	fseek(fp, 1, SEEK_CUR);

	// O caractere # despreza linha de comentário no arquivo.
	while((aux = getc(fp)=='#')){
		while((aux = getc(fp))!='\n');
	}

	fseek(fp, -1, SEEK_CUR);
	fscanf(fp, "%d %d\n",&pIO -> col, &pIO -> row);

	if(ferror(fp)) perror(NULL);

	fscanf(fp, "%d", &pIO -> mv);
	
	if(ferror(fp)) perror(NULL);

	fseek(fp, 1, SEEK_CUR);

	pIO -> pData = (unsigned char*) malloc(pIO -> row * pIO ->col * sizeof(unsigned char));

	switch(pIO -> tipo){
		case 2:
		puts("Lendo Imagem PGM (Dados em TEXTO!)\n");
		for(k=0; k<(pIO -> row * pIO ->col); k++){
			fscanf(fp, "%hhu", pIO -> pData+k);
		}
		break;

		case 5:
		puts("Lendo Imagem PGM (Dados em binário!)\n");
		fread(pIO -> pData, sizeof(unsigned char), pIO -> row * pIO -> col, fp);
		break;

		default:
		puts("Não está implementado\n");
	}
}

void writePGMImage (pgm *pIO, char* filename){

	FILE *fp;
	char aux;

	if(!(fp = fopen(filename, "wb"))){
		perror("Erro na escrita!");
		exit(1);
	}

	fprintf(fp, "%s \n", "P5");
	fprintf(fp, "%d %d \n", pIO -> row, pIO -> col);
	fprintf(fp, "%d\n", 255);

	fwrite(pIO -> pData, sizeof(unsigned char), pIO -> col * pIO -> row, fp);

	fclose (fp);
}

void viewPGMImage (pgm *pIO){
	printf("Tipo: [%d]\n", pIO ->tipo);
	printf("Dimensão matricial: [%d][%d]\n", pIO -> col, pIO -> row);
	printf("Número máximo: [%d]\n", pIO -> mv);

	for(int k = 0; k<(pIO -> row * pIO -> col); k++){
		if(!(k % pIO -> col)) printf("\n");
		printf("[%2hhu]", *(pIO -> pData+k));
	}
	printf("\n");
}


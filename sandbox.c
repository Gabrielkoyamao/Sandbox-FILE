#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 500

void teste();

int main(){

	FILE *p;
	
	char *cpstr;

	char currentStr[MAX];
	char str[MAX];
	char search[MAX];
	int i;
	int l;

	p = fopen("texto.txt", "r");

	if(p == NULL){
		printf("ERRO ao abrir o arquivo, gere um arquivo texto.txt e tente novamente\n");
		exit(1);
	}else{
		strcpy( currentStr, fgets(str, 1000, p) );
	}

	// printf("Digite a palavra que deseja procurar no arquivo: ");
	// scanf("%s", search);

	// string auxiliar pra pegar palavra por palavra dentro do for 

	// cpstr ta funcionando so tenho q acha a linha agr
	// cpstr = strstr(currentStr, search);

	// for(i = 0; i<strlen(currentStr);i++){	
			
		// char *a;

		// if(currentStr[i] == " ")

		// l++;

	// }

	puts(currentStr);
	// printf("\n%d\n", l);

	fclose(p);
}

void teste(){
// int main(){

	char a[] = "Ola, tudo bem?\nCom voce?";
	char b[] = "voce";
	char *cmp;

	cmp = strstr(a, b);

	puts(cmp);

}
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
	int l = 0;
	int flag = 0;

	p = fopen("texto.txt", "r");

	if(p == NULL){
		printf("ERRO ao abrir o arquivo, gere um arquivo texto.txt e tente novamente\n");
		exit(1);
	}else{
			
		printf("Digite a palavra que deseja procurar no arquivo: ");
		scanf("%s", search);
		
		while( !feof(p)){
			strcpy( currentStr, fgets(str, 1000, p) );
			
			//puts(currentStr);
			
			if(cpstr = strstr(currentStr, search)){
				cpstr = strstr(currentStr, search);
				puts(cpstr);
				printf("Linha: %d\n", l);
				flag = 1;
			}
			
			l++;
		}
		
	}
	
	if(flag == 0 ){
		printf("Nao encontrou a palavra\n");
	}
	

	fclose(p);
	
	system("pause");
	
	return 0;
	
}
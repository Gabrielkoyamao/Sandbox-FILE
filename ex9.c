#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

void teste();

int main(){

	FILE *p;
	
	char *strHtml;

	char currentStr[MAX];
	char str[MAX];
	char search[MAX];
	int i;
	int l = 0;
	int flag = 0;

	p = fopen("htmlpf.txt", "r");

	if(p == NULL){
		printf("ERRO ao abrir o arquivo, gere um arquivo html.txt e tente novamente\n");
		exit(1);
	}else{

		while( !feof(p)){
			strcpy( currentStr, fgets(str, 1000, p) );
			int length = strlen(currentStr);
			
			if(strlen(currentStr) > 0){
				strHtml = currentStr;
			
				for(i = 0; i < strlen(strHtml) ; i++){
					
					if(strHtml[i] == '<'){
						flag = 1;
					}
					
					if(flag == 0){
						
						printf("%c", strHtml[i]);
					}
					
					if(strHtml[i] == '>'){
						flag = 0;
					}
					
					
				}
			}
			
		}
		
	}
	

	fclose(p);
	
	//puts(strHtml);
	
	//system("");
	
	return 0;
	
}
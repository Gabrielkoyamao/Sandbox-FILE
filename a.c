#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 500

int main(){

	// NOTE: p n esquecer... qndo da erro no strcmp pra comparar %c e eu faco aquele role de converter a string p string dnovo
	// com o sprintf... eh so comparar o %c dentro do for com a aspas simples str[i] == 'a'

	char str[] = "OLA TUDO BEM?\nCOM VOCE MEU GUERREIRO";
	int c = 0;

	char teste[] = "M";
	char word[] = "M";

	// for(int i = 0; i < strlen(str); i++){
	for(int i = 0; i < strlen(teste); i++){
		
		// if(str[i] == '\n'){
		// 	c++;
		// }
		// printf("\n");
		// printf("%c", str[i]);
		// printf("%c", word[i]);
		// printf("\n");

		if(teste[i] == word[i]){
			printf("%c", teste[i]);
		}
		

		// printf("%c", str[i]);
	}
	// for(int i = 0; i < strlen(str); i++){

	// ROLE DESNECESSARIO =>
	// 	char *aux;
	// 	char parse[MAX];
	// 	sprintf(parse, "%c", str[i]);

	// 	aux = parse;

	// 	if(strcmp(aux, " ") == 0){
	// 		cont++;		
	// 	}
		
	// }
	// printf("%d\n", c);

}
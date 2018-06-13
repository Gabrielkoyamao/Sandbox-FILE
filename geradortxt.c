
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


int main(){

    FILE *p;
    char str[MAX];
    int i;
    if( (p = fopen("x.txt", "w" ) ) == NULL ){
        printf("ERRO ao abrir o arquivo!");
        exit(1);
    }

    // gerando 50linhas
    for(i = 1; i <= 20; i++ ){
        sprintf(str, "linha %d\n", i);
        fputs(str, p);
    }

    fclose(p);
    puts("\nDados gravados com sucesso em x.txt\n");
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


void tela(){

    printf("\t==========MENU==========\n");
    printf("\t1 - Indique o numero de linhas desejadas\n");
    printf("\t2 - Qual linha deseja editar?\n"); // nova linha: salvar a linha e sobrescrever
    printf("\t3 - Indicar dps de qual linha deseja inserir um novo texto\n");
    printf("\t4 - Indicar qual linha deseja remover\n"); // confirmar
    printf("\t5 - Sair\n"); // confimar que vai sobrescrever o arquivo, salvar alteracoes?


}

int main(){

    FILE *p;
    char str[MAX];
    char currentStr[MAX];
    int opt = 0;

    p = fopen("x.txt", "r");


    if(p == NULL){
        printf("ERRO ao abrir o arquvo\n");
    }else{

        while(!feof(p) || opt != 5){
            strcpy(currentStr, fgets(str, 1000, p));
        }
    }
}
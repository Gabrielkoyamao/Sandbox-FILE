#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000


void menu();
void f1();
void f2();
void f3();
void f4();
int countFIle();

int main(){
     
     int opt = 10;

    while( opt != 5 ){
        switch(opt){

            case 0:
                system("clear");
                opt = 10;
                break;
            case 1:
                f1();
                opt = 10;
                break;
            case 2:
                f2();
                opt = 10;
                break;
            case 3:
                f3();
                opt = 10;                
                break;
            case 4:
                f4();
                opt = 10;                
                break;
            default : 
                menu();
                scanf("%d", &opt);
        }
    }
    
}


void menu(){

    printf("\n\tMENU =>\n");
    printf("\t1 - Indique o numero de linhas que deseja exibir na tela(linha inicial ate a linha final)\n");
    printf("\t2 - Qual linha deseja editar?\n"); // nova linha: salvar a linha e sobrescrever
    printf("\t3 - Indicar dps de qual linha deseja inserir um novo texto\n");
    printf("\t4 - Indicar qual linha deseja remover\n"); // confirmar
    printf("\t5 - Sair\n"); // confimar que vai sobrescrever o arquivo, salvar alteracoes? 
}

void f1(){

    FILE *p;
    char str[MAX];
    char currentStr[MAX];
    int start;
    int end;
    int tLinhas=0;
    int linhaIni=0;
    int linhaFim=0;
    char opt[1];

    p = fopen("x.txt", "r");

    if(p == NULL){
        printf("ERRO ao abrir o arquvo x.txt\n");
    }else{

        // nao funciona, mas a ideia eh boa :p
        // printf("\ndeseja saber quantas linhas tem o texto(S/N)\n");
        // scanf(" %c ", opt );
        
        // if(opt[0] == 's' || opt[0] == 'S'){
        //     tLinhas = countFIle();
        //     printf("O Arquivo tem %d\n", tLinhas );
        // }



        printf("Insira respectivamente a linha inicial e depois a linha final\n");
        scanf("%d %d", &start, &end);

        while(!feof(p)){
            strcpy(currentStr, fgets(str, 1000, p));


            if( linhaIni >= start && linhaFim <= end ){
                puts(currentStr);
            }

            linhaIni++;
            linhaFim++;
        }

        fclose(p);
    }
}

void f2(){
    
    FILE *p;
    char str[MAX];
    char currentStr[MAX];
    int lEditar;
    int linha=0;
    char newStr[MAX];
    int i;
    p = fopen("x.txt", "r+");

    if(p == NULL){
        printf("ERRO ao abrir o arquvo x.txt\n");
    }else{

        printf("Insira a linha q deseja editar\n");
        scanf("%d", &lEditar);

        printf("Insira o texto:\n");
        scanf("%s", newStr);

        while(!feof(p)){
            strcpy(currentStr, fgets(str, 1000, p));

            printf("%d", linha);
            printf("%d", lEditar);


            // if( linha == lEditar ){

                // for(i = 0; i < strlen(newStr); i++){
                //     char temp[MAX];
                //     printf("%c", newStr[i]);
                    // sprintf(temp, "%c", newStr[i]);
                    // fputs(temp, p);
                // }
            // }

            // puts(currentStr);

            linha++;
        }

        printf("linha editada com sucesso!\n");

        fclose(p);
    }
}

void f3(){
    
}

void f4(){
    
}


int countFIle(){

    FILE *p;

    int cont = 0;

    p = fopen("x.txt", "r");

    if(p == NULL){
        printf("ERRO arquivo x.txt nao encontrado\n");
        exit(1);
    }else{

        while(!feof(p)){
            cont++;
        }
    }

    fclose(p);

    return cont;
}


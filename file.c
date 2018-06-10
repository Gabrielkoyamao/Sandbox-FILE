#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include <string.h>
#define MAX 100

// ta errado o 7 e o 7b e o 8 tbm

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void ex7b();
void teste();

// struct global
struct dados {
    char nome[20];
    float nota1;
    float nota2;
    double media;

} pessoa[10];


int main(){
    // ex1();
    // ex2();
    // ex3();
    // ex4();
    // ex5();
    // ex6();
    // ex7();
    // ex7b();
    ex8();
    // teste();
}

void ex8(){
}

void ex7b(){

    FILE *current, *dcrypx;

    char currentStr[MAX];
    char str[MAX];
    char dcrypt[MAX];
    int i;

    current = fopen("crypt.txt", "r");
    dcrypx  = fopen("dcrypx.txt", "w");

    if(current == NULL){
        printf("ERRO ao abrir o arquivo file.txt, tente gerar um antes de rodar esse programa\n");
        exit(1);
    }else{
        strcpy(currentStr, fgets(str,100,current));
    }
    
    if(dcrypx == NULL){
        printf("ERRO ao escrever no arquivo crypt.txt, chame a equipe de suporte ou chama no probleminha\n");
        exit(1);
    }else{

        int length = strlen(currentStr);

        for(int i = 0; i < length; i++){
            dcrypt[i] = currentStr[i] - 1;
            dcrypt[length] = '\0';
        }

        for(int i = 0; i < length; i++){

            // fiz isso pq n tava salvando direto com o fputs(crypt[i], crypx)
            char tst[1000];
            sprintf(tst, "%c", dcrypt[i]);
            fputs(tst, dcrypx);
            // printf("%c", crypt[i]);
        }
    }

    puts("\nArquivo dcryptografado com sucesso!\n");

    fclose(current);
    fclose(dcrypx);
}

void ex7(){

    FILE *current, *crypx;

    char currentStr[MAX];
    char str[MAX];
    char crypt[MAX];
    int i;

    current = fopen("texto.txt", "r");
    crypx   = fopen("crypt.txt", "w");

    if(current == NULL){
        printf("ERRO ao abrir o arquivo texto.txt, tente gerar um antes de rodar esse programa\n");
        exit(1);
    }else{
        strcpy(currentStr, fgets(str,100,current));
    }
    
    if(crypx == NULL){
        printf("ERRO ao escrever no arquivo crypt.txt, chame a equipe de suporte ou chama no probleminha\n");
        exit(1);
    }else{

        int length = strlen(currentStr);

        for(int i = 0; i < length; i++){
            crypt[i] = currentStr[i] + 1;
            crypt[length] = '\0';
        }

        for(int i = 0; i < length; i++){

            // fiz isso pq n tava salvando direto com o fputs(crypt[i], crypx)
            char tst[1000];
            sprintf(tst, "%c", crypt[i]);
            fputs(tst, crypx);
            // printf("%c", crypt[i]);
        }
    }

    puts("\nArquivo cryptografado com sucesso e salvo no crypt.txt");

    fclose(current);
    fclose(crypx);
}

void ex6(){

    FILE *p;

    char info[MAX];
    char str[MAX];

    float nro;
    int cont=0;
    float ultimo=0;

    p = fopen("Medias.txt", "r");

    if(p == NULL){
        printf("Erro ao abrir o arquivo, provavelmente inexistene, tente rodar o ex5\n");
        exit(1);
    }

    // so while duplicando a ultima media e printando :(
    do{
    // while(1){
        fscanf(p, "%s %s", info, str);
        printf("%s %s\n", info, str);

        if(strcmp(info, "Media:") == 0){
            // printf("\n\n%s\n\n", str ); verificando...
            
            float aux;
            cont++;
            aux = atof(str);
            nro += aux;
            ultimo = aux;
            printf("\n");
            
            // verificando...
            // printf("atof => %f\n", aux); 
            // printf("nro => %f\n", nro); 
        }

        // if(feof(p) ){
        //     break; // tentando arrumar o erro q tem de printar mais uma media
        // }

    // }
   }while( !feof(p) );

        // to subtraindo pelo ultimo e 1 pq o programa duplica a ultima media

        float tMd = nro - ultimo;
        int tStd = cont - 1;
        
       printf("Media Total dos Alunos = %.2lf\n", tMd / tStd );


    
    fclose(p);
}

void ex5(){

    FILE *p;
    char str[MAX];

    p = fopen("Medias.txt", "w");

    if( p == NULL ){
        printf("404 ERROR");
        exit(1);
    }

    double m;
    double mAll = 0;
    
    // mudar para 10 registros, como esta na atividade

    for(int i = 0; i < 2; i++){
        scanf("%s %f %f", pessoa[i].nome, &pessoa[i].nota1, &pessoa[i].nota2);
    }
    
    for(int i = 0; i < 2; i++){
        m = (pessoa[i].nota1 + pessoa[i].nota2) / 2;
        mAll += m;
        pessoa[i].media = m;
    }

    mAll = mAll / 10;

    for(int i = 0; i < 2; i++){
        // nome
        fputs("Nome: ", p);        
        fputs(strcat(pessoa[i].nome, "\n"), p);
        
        // nota1
        fputs("Nota1: ", p);
        sprintf(str, "%.2f\n", pessoa[i].nota1);
        fputs(str, p);
        
        // nota2
        fputs("Nota2: ", p);
        sprintf(str, "%.2f\n", pessoa[i].nota2);
        fputs(str, p);
        
        // media
        fputs("Media: ", p);
        sprintf(str, "%.2f\n", pessoa[i].media);
        fputs(str, p);

        fputs("\n", p);

    }


    // media geral funcionando mas este ja eh o exercicio 6
    // fputs("Media geral: ",p);
    // sprintf(str, "%f\n", mAll);
    // fputs(str, p);
    // fputs("\n", p);

    fclose(p);

    printf("Seu arquivo foi salvo com sucesso em Medias.txt!\n");
}

void ex4(){

    FILE *p;
    char str[MAX];
    
    p = fopen("notepad.txt", "w");

    if( p == NULL ){
        printf("404 ERROR");
        exit(1);
    }

    do{
        gets(str);
        if(strcmp(str, "FIM") == 0){
            fputs("\n\n", p);
            fputs("Arquivo gerado com sucesso em: notepad.txt", p);
            break;
        }
        fputs(str, p);

    }while(strcmp(str, "FIM") !=  0);

    fclose(p);
}

void ex3(){

    char str[1000];
    char c;
    FILE *p;
    int i = 0;

    p = fopen("file.txt", "r" );
    
    if( p == NULL ){
        printf("ERRO ao abrir o arquivo!\n");
        exit(1);
    }

    
    do{
        printf("linha %d : %s", i, fgets(str, 1000, p));
        i++;
    }while( !feof(p));

    fclose(p);
}

void ex2(){
    FILE *p;
    
    int i;
    char c;
    char option[1];

    if( (p = fopen("dados.txt", "r" ) ) == NULL ){
        printf("ERRO ao abrir o arquivo!\n");
        exit(1);
    }

    while( !feof(p)){
        c = getc(p);
        printf("%c", c);
    }

    getch();
    fclose(p);
}

void ex1(){
    FILE *p;
    char str[MAX];

    if( (p = fopen("dados.txt", "w" ) ) == NULL ){
        printf("ERRO ao abrir o arquivo!");
        exit(1);
    }

    for(int i = 1; i <= 100; i++ ){
        sprintf(str, "%d\n", i);
        fputs(str, p);
    }

    fclose(p);
    puts("\nDados gravados com sucesso em dados.txt\n");
}

void teste(){

    // concatenar string em C
    char a[MAX] = {"lala"};
    char b[10] = {"b "};

    printf("%s\n", strcat( b, a));
}
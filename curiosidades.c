#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000


int main(){

    int i;
    char a[MAX];

    fgets(a, MAX, stdin);

    for(i = 0; i < strlen(a); i++){
        printf("%c", a[i]);
    }

    // puts(a) vai dos dois jeitos


}
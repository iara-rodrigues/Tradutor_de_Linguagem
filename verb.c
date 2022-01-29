#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int numPalavras = 0;

	printf("Quantas palavras gostaria de digitar?\n");
	scanf("%d", &numPalavras);

    char palavras[numPalavras][30]; //o 30 representa o número máximo de letras por palavra;

    printf("Por favor, digite-as apertando ENTER entre elas: \n");
    for(int i = 0; i<numPalavras; i++){
        setbuf(stdin, NULL);
        fgets(palavras[i], 30, stdin);
    }

    for(int i = 0; i<numPalavras; i++){
        fputs(palavras[i], stdout);
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conjugacao(char str[30], FILE* arquivoOut);

int main(void){
 
    FILE *arquivo;
    arquivo = fopen("verb.in", "r");
    if (arquivo == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO\n");
        exit(-1);
    }
    
    int i = 0;
    int numPalavras = 0;
    char palavras[30];

    while(fgets(palavras, 30, arquivo) != NULL){
        numPalavras++;
    }

    fclose(arquivo);

    FILE *arquivoIn;
    arquivoIn = fopen("verb.in", "r");
    if (arquivoIn == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO\n");
        exit(-1);
    }

    char arrPalavras[numPalavras][30];

    while(fgets(palavras, 30, arquivoIn) != NULL){
        strcpy(arrPalavras[i], palavras);
        i++;
    }

    fclose(arquivoIn);

    FILE *arquivoOut;
    arquivoOut = fopen("verb.out", "w");
    if (arquivoOut == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO\n");
        exit(-1);
    }

    for (int i = 0; i < numPalavras; i++){
        conjugacao(arrPalavras[i], arquivoOut);
    }

    int sucesso = fclose(arquivoOut);
    if (sucesso != 0) {
        printf("ERRO AO ENCERRAR O ARQUIVO\n");
        exit(-1);
    } 

    printf("\nArquivo escrito com sucesso!\n");
}

void conjugacao(char str[30], FILE* arquivoOut){
    int len;
    len = strlen(str);
    int flag = 0;

    if ((str[len-2] == 'a') || (str[len-2] == 'e') || (str[len-2] == 'i') ||
    (str[len-2] == 'o') || (str[len-2] == 'm') || (str[len-2] == 's') ||
    (str[len-2] == 't')){
        for (int i = 0; i < (len-1); i++) {
            fprintf(arquivoOut, "%c", str[i]);
        }

        fprintf(arquivoOut, " - verb ");
    
        if (str[len-2] == 'a'){
            for (int i = 0; i < (len-2); i++){
                fprintf(arquivoOut, "%c", str[i]);
            }
            flag = 1;
            fprintf(arquivoOut, "en, present tense, 3rd person\n");
        } 
        if (str[len-2] == 'e'){
            for (int i = 0; i < (len-2); i++){
                fprintf(arquivoOut, "%c", str[i]);
            }
            flag = 1;
            fprintf(arquivoOut, "en, past tense, 3rd person\n");
        } 
        if (str[len-2] == 'i'){
            if (str[len-3] == 'a'){
                for (int i = 0; i < (len-3); i++){
                    fprintf(arquivoOut, "%c", str[i]);
                }
                flag = 1;
                fprintf(arquivoOut, "en, future tense, 1st person\n");
            } else {
                if (str[len-3] == 'e'){
                    for (int i = 0; i < (len-3); i++){
                        fprintf(arquivoOut, "%c", str[i]);
                    }
                    flag = 1;
                    fprintf(arquivoOut, "en, past tense, 1st person\n");
                } else {
                    for (int i = 0; i < (len-2); i++){
                        fprintf(arquivoOut, "%c", str[i]);
                    }
                    flag = 1;
                    fprintf(arquivoOut, "en, future tense, 3rd person\n");
                }
            }
        } 
        if (str[len-2] == 'o'){
            for (int i = 0; i < (len-2); i++){
                fprintf(arquivoOut, "%c", str[i]);
            }
            flag = 1;
            fprintf(arquivoOut, "en, presente tense, 1st person\n");
        } 
        if (str[len-2] == 'm'){
            if (str[len-3] == 'e'){
                if (str[len-4] == 'a'){
                    for (int i = 0; i < (len-4); i++){
                        fprintf(arquivoOut, "%c", str[i]);
                    }
                    flag = 1;
                    fprintf(arquivoOut, "en, future tense, 4th person\n");
                } else {
                    for (int i = 0; i < (len-3); i++){
                        fprintf(arquivoOut, "%c", str[i]);
                    }
                    flag = 1;
                    fprintf(arquivoOut, "en, past tense, 4th person\n");
                }
            }
            if (str[len-3] == 'a'){
                for (int i = 0; i < (len-3); i++){
                    fprintf(arquivoOut, "%c", str[i]);
                }
                flag = 1;
                fprintf(arquivoOut, "en, present tense, 6th person\n");
            }
            if (str[len-3] == 'o'){
                for (int i = 0; i < (len-3); i++){
                    fprintf(arquivoOut, "%c", str[i]);
                }
                flag = 1;
                fprintf(arquivoOut, "en, present tense, 4th person\n");
            }
            if (str[len-3] == 'i'){
                if (str[len-4] == 'a'){
                    for (int i = 0; i < (len-4); i++){
                        fprintf(arquivoOut, "%c", str[i]);
                    }
                    flag = 1;
                    fprintf(arquivoOut, "en, future tense, 6th person\n");
                } else {
                    for (int i = 0; i < (len-3); i++){
                        fprintf(arquivoOut, "%c", str[i]);
                    }
                    flag = 1;
                    fprintf(arquivoOut, "en, past tense, 6th person\n");
                }
            }
        } 
        if (str[len-2] == 's'){
            if ((str[len-3] == 'i') && (str[len-4] == 'a')){
                for (int i = 0; i < (len-4); i++){
                    fprintf(arquivoOut, "%c", str[i]);
                }
                flag = 1;
                fprintf(arquivoOut, "en, future tense, 2nd person\n");
            }
            if ((str[len-3] == 'n') && (str[len-4] == 'o')){
                for (int i = 0; i < (len-4); i++){
                    fprintf(arquivoOut, "%c", str[i]);
                }
                flag = 1;
                fprintf(arquivoOut, "en, present tense, 5th person\n");
            }
            if ((str[len-3] == 'e')){
                for (int i = 0; i < (len-3); i++){
                    fprintf(arquivoOut, "%c", str[i]);
                }
                flag = 1;
                fprintf(arquivoOut, "en, past tense, 2nd person\n");
            }
            if ((str[len-3] == 'o')){
                for (int i = 0; i < (len-3); i++){
                    fprintf(arquivoOut, "%c", str[i]);
                }
                flag = 1;
                fprintf(arquivoOut, "en, present tense, 2nd person\n");
            }
        } 
        if (str[len-2] == 't'){
            if ((str[len-3] == 's')){
                if(str[len-4] == 'e'){
                    for (int i = 0; i < (len-4); i++){
                        fprintf(arquivoOut, "%c", str[i]);
                    }
                    flag = 1;
                    fprintf(arquivoOut, "en, past tense, 5th person\n");
                } else {
                    if ((str[len-4] == 'i') && (str[len-5] == 'a')){
                        for (int i = 0; i < (len-4); i++){
                            fprintf(arquivoOut, "%c", str[i]);
                        }
                        flag = 1;
                        fprintf(arquivoOut, "en, future tense, 5th person\n");
                    }
                }     
            }
        }

    } else {
        for (int i = 0; i < (len-1); i++){
            fprintf(arquivoOut, "%c", str[i]);
        }
        fprintf(arquivoOut, " - not a verb case\n");
        flag = 1;
    }
    if (flag == 0){
        fprintf(arquivoOut, "not\n");
    }  
}
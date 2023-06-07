// Avaliacao 3 LLP Telemática
// Alison de Almeida Arruda
// Faça um programa que receba do usuario um arquivo texto. Crie outro arquivo texto contendo o texto do arquivo de entrada, mas com as vogais substituídas por '*'
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivo1, *arquivo2;
    char nome_arq1[100], nome_arq2[100];
    char caractere;

    printf("Digite o nome do arquivo inicial: ");
    scanf("%s", nome_arq1);

    arquivo1 = fopen(nome_arq1, "r");

    if (arquivo1 == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nome_arq2);

    arquivo2 = fopen(nome_arq2, "w");

    if (arquivo2 == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        fclose(arquivo1);
        return 1;
    }

    while ((caractere = fgetc(arquivo1)) != EOF) {
        caractere = tolower(caractere);

        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            fputc('*', arquivo2);
        } else {
            fputc(caractere, arquivo2);
        }
    }

    fclose(arquivo1);
    fclose(arquivo2);

    printf("Arquivo de saída criado com sucesso!\n");

    return 0;
}

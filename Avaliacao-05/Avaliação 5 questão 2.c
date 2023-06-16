// Avaliacao 5 LLP Telemática
// Alison de Almeida Arruda 
// Faça um programa que receba do usuario um arquivo texto e mostre na tela quantas linhas esse arquivo possui

#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome_arq[100];
    char caractere;
    int cont_linhas = 0;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nome_arq);

    arquivo = fopen(nome_arq, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            cont_linhas++;
        }
    }

    if (caractere != '\n' && cont_linhas > 0) {
        cont_linhas++;
    }

    fclose(arquivo);

    printf("O arquivo possui %d linhas.\n", cont_linhas);

    return 0;
}

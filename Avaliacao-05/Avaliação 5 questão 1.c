// Avaliacao 3 LLP Telemática
// Alison de Almeida Arruda 
// Escreva um programa que
// a) Crie/abra um arquivo texto com nome "arq.txt"
// b) Permita que o usuário grave diversos carcateres nesse arquivo, até que o usuário entre com o caractere '0'
// c) Feche o arquivo 
// Depois abrir e ler o arquivo, caractere por caractere, e escrever na tela todos os caracteres armazenados

#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    
    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite os caracteres que deseja gravar no arquivo. Digite '0' para encerrar:");

    do {
        scanf(" %c", &caractere);

        if (caractere != '0') {
            fputc(caractere, arquivo);
        }
    } while (caractere != '0');

    fclose(arquivo);

    arquivo = fopen("arq.txt", "r");

    printf("Todos os caracteres contidos no arquivo:\n");

    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c, ", caractere);
    }

    fclose(arquivo);

    return 0;
}

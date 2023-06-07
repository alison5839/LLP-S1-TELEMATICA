// Avaliacao 3 LLP Telemática
// Alison de Almeida Arruda
// Faça um programa que receba do usuario um arquivo texto e um caractere. Mostre na tela quantas vezes aquele caractere ocorre dentro do arquivo

#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome_arq[100];
    char caractere;
    int cont_vezes = 0;
    int comparador;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nome_arq);

    printf("Digite o caractere a ser buscado no arquivo digitado anteriormente: ");
    scanf(" %c", &caractere);

    arquivo = fopen(nome_arq, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((comparador = fgetc(arquivo)) != EOF) {
        if (comparador == caractere) {
            cont_vezes++;
        }
    }

    fclose(arquivo);

    printf("O caractere '%c' aparece %d vezes no arquivo.\n", caractere, cont_vezes);

    return 0;
}

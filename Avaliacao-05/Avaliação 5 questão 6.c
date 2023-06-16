// Avaliacao 5 LLP Telemática
// Alison de Almeida Arruda
// Faça um programa que receba do usuario um arquivo texto e mostre na tela quantas vezes cada letra do alfabeto aparece dentro do arquivo

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivo;
    char nome_arq[100];
    char caractere;
    int cont_letras[26] = {0};

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nome_arq);

    arquivo = fopen(nome_arq, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê cada caractere do arquivo
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (isalpha(caractere)) {
            caractere = tolower(caractere);
            cont_letras[caractere - 'a']++;
        }
    }

    fclose(arquivo);

    printf("Quantidade de vezes que cada letra aparece no arquivo:\n");

    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, cont_letras[i]);
    }

    return 0;
}

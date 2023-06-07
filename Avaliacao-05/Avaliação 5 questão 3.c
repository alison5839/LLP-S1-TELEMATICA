// Avaliacao 3 LLP Telemática
// Alison de Almeida Arruda
// Faça um programa que receba do usuario um arquivo texto e mostre na tela quantas letras são vogais

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivo;
    char nome_arq[100];
    char caractere;
    int cont_vog = 0;
    
    printf("Digite o nome do arquivo texto: ");
    scanf("%s", nome_arq);

    arquivo = fopen(nome_arq, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = tolower(caractere);

        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            cont_vog++;
    }
}

    fclose(arquivo);

    printf("O arquivo possui %d vogais.\n", cont_vog);

    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivo;
    char nome_arq[100];
    char caractere;
    int cont_vog = 0;
    int cont_cnsnt = 0;
    
    printf("Digite o nome do arquivo texto: ");
    scanf("%s", nome_arq);

    arquivo = fopen(nome_arq, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = tolower(caractere);

        if (isalpha(caractere)) {
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            cont_vog++;
        } else {
            cont_cnsnt++;
        }
    }
}

    fclose(arquivo);

    printf("O arquivo possui %d vogais e %d consoantes.\n", cont_vog, cont_cnsnt);

    return 0;
}

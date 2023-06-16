// Atividade 1 LLP Telemática
// Alison de Almeida Arruda 
// Usando alocação dinâmica de memória criar três matrizes A, B e C. Inicializar B e C, onde a matriz A = matriz B + matriz C. Mostrar as três matrizes.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int linha, coluna;
    int **A, **B, **C;

    printf("Entre com o número de linhas das matrizes: ");
    scanf("%d", &linha);

    printf("Entre com o número de colunas das matrizes: ");
    scanf("%d", &coluna);

    A = (int **)malloc(linha * sizeof(int *));
    for (int i = 0; i < linha; i++) {
        A[i] = (int *)malloc(coluna * sizeof(int));
    }

    B = (int **)malloc(linha * sizeof(int *));
    for (int i = 0; i < linha; i++) {
        B[i] = (int *)malloc(coluna * sizeof(int));
    }

     C = (int **)malloc(linha * sizeof(int *));
    for (int i = 0; i < linha; i++) {
        C[i] = (int *)malloc(coluna * sizeof(int));
    }

    printf("Entre com os valores da matriz B:\n");
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            scanf("%d", &B[i][j]);
        }
    }

     printf("Entre com os valores da matriz C:\n");
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            scanf("%d", &C[i][j]);
        }
    } printf("\n");

     for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            A[i][j]= (B[i][j]+ C[i][j]);
        }
    }

    printf("Matriz B:\n");
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matriz C:\n");
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matriz A:\n");
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < linha; i++) {
        free(A[i]);
    }
    free(A);

    for (int i = 0; i < linha; i++) {
        free(B[i]);
    }
    free(B);

    for (int i = 0; i < linha; i++) {
        free(C[i]);
    }
    free(C);

    return 0;
}

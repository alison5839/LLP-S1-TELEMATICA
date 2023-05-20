#include <stdio.h>

void soma_matriz(int (*A)[3],(*B)[3],(*C)[3], int N) {
  printf("Matriz soma\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 3; j++) {
          C[i][j] = A[i][j] + B[i][j];
            printf("[%d][%d]=%d ", i,j, C[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int C[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int A[3][3] = {{1, 2, 3}, {2, 4, 6}, {4, 8, 16}};
    int B[3][3] = {{2, 3, 4}, {6, 9, 12}, {18, 27, 36}};
    soma_matriz(A,B,C, 3);
    printf("\n\n"); 
   
    return 0;
}


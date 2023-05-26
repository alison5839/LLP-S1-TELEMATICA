// Avaliacao 3 LLP Telemática
// Alison de Almeida Arruda 
// Criar uma estrutura, receber pelo teclado seus dados e gravar em um arquivo essa estrutura

#include <stdio.h>

int main() {
    struct Funcionario{
    int idade;
    char nome[30];
    float salario;
};
    struct Funcionario funcionario;

    printf("Digite o nome do funcionário: ");
    fgets(funcionario.nome, 30, stdin);
  
    printf("Digite a idade do funcionário: ");
    scanf("%d", &funcionario.idade);
  
    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario.salario);

    FILE *FPRT = fopen("funcionario.txt", "w");
    if (FPRT == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }
 
    fprintf(FPRT, "Nome: %s\n", funcionario.nome);
    fprintf(FPRT, "Idade: %d\n", funcionario.idade);
    fprintf(FPRT, "Salário: %.2f\n", funcionario.salario);

    fclose(FPRT);

    printf("Dados gravados com sucesso em 'funcionarios.txt'.\n");

    return 0;
}

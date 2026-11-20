
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} DadosFuncionario;

int main(void) {

    DadosFuncionario f1, f2;
    float diferencaSalarial;

    printf("===== SISTEMA DE FUNCIONARIOS =====\n\n");

    printf("--- Cadastro do primeiro funcionario ---\n");

    printf("Informe o nome: ");
    scanf(" %49[^\n]", f1.nome);

    printf("Informe a idade: ");
    scanf("%d", &f1.idade);

    printf("Informe o salario: ");
    scanf("%f", &f1.salario);

    printf("\n--- Cadastro do segundo funcionario ---\n");

    printf("Informe o nome: ");
    scanf(" %49[^\n]", f2.nome);

    printf("Informe a idade: ");
    scanf("%d", &f2.idade);

    printf("Informe o salario: ");
    scanf("%f", &f2.salario);

    printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");

    printf("\nPrimeiro funcionario:\n");
    printf("Nome: %s\n", f1.nome);
    printf("Idade: %d anos\n", f1.idade);
    printf("Salario: R$ %.2f\n", f1.salario);

    printf("\nSegundo funcionario:\n");
    printf("Nome: %s\n", f2.nome);
    printf("Idade: %d anos\n", f2.idade);
    printf("Salario: R$ %.2f\n", f2.salario);

    printf("\n===== RESULTADO DA COMPARACAO =====\n");

    if (f1.salario > f2.salario) {
        diferencaSalarial = f1.salario - f2.salario;

        printf("%s recebe o maior salario.\n", f1.nome);
        printf("Diferenca: R$ %.2f\n", diferencaSalarial);

    } else if (f2.salario > f1.salario) {
        diferencaSalarial = f2.salario - f1.salario;

        printf("%s recebe o maior salario.\n", f2.nome);
        printf("Diferenca: R$ %.2f\n", diferencaSalarial);

    } else {
        printf("Os funcionarios possuem salarios iguais.\n");
    }

    return 0;
}

#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {
    int idade;
    char inicial;

    printf("Digite sua idade: ");
    scanf("%d", &idade);  // Recebe a idade do usuário

    printf("Digite a primeira letra do seu nome: ");
    scanf(" %c", &inicial);  // Recebe a inicial do nome do usuário

    printf("Olá! Sua idade é %d e sua inicial é %c.\n", idade, inicial);  // Exibe a saída formatada

    return 0;
}

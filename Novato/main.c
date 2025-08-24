#include <stdio.h>
#include <string.h>  // para uso da função strcspn

int main() {
// -------------------------------
// Declaração das variáveis
// -------------------------------
    
// Carta 1
    char estado1;
    char codigo1[5];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;

// Carta 2
    char estado2;
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;

// -------------------------------
// Leitura dos dados da Carta 1
// -------------------------------

    printf(" Cadastro da Carta 1 \n\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);
    while (getchar() != '\n'); // limpa o buffer

    printf("Código da Carta (ex: A01, B03): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0'; // remove o \n

    printf("Nome da Cidade: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turismo1);

// -------------------------------
// Leitura dos dados da Carta 2
// -------------------------------

    printf("\n Cadastro da Carta 2 \n\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);
    while (getchar() != '\n');

    printf("Código da Carta (ex: A01, B03): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Nome da Cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turismo2);

// -------------------------------
// Exibição dos dados da Carta 1
// -------------------------------

    printf("\nDados da Carta 1\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);

// -------------------------------
// Exibição dos dados da Carta 2
// -------------------------------

    printf("\nDados da Carta 2\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);

    return 0;
}

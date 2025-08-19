#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codigo1[4], codigo2[4], nomeCidade1[20], nomeCidade2[20];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // -- Entrada de dados Carta 1 --

    printf("Digite os dados da primeira carta\n\n");

    printf("Digite a letra do Estado(A-H): \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta(use a letra referente ao estado + numeros de 01-04): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Qual o numero de habitantes? \n");
    scanf("%d", &populacao1);

    printf("Qual a área(em km²)? \n");
    scanf("%f", &area1);

    printf("Qual o Produto Interno Bruto(PIB)? \n");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turísticos? \n");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // --- Entrada segunda Carta ---

    printf("Digite os dados da segunda carta\n\n");

    printf("Digite a letra do Estado(A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta(use a letra referente ao estado + numeros de 01-04): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Qual o numero de habitantes? \n");
    scanf("%d", &populacao2);

    printf("Qual a área(em km²)? \n");
    scanf("%f", &area2);

    printf("Qual o Produto Interno Bruto(PIB)? \n");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turísticos? \n");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // --- Saída carta 1 ---

    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos Turísticos: %d \n\n", pontosTuristicos1);

    // --- Saída carta 2 ---

    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos Turísticos: %d \n", pontosTuristicos2);

    return 0;
}

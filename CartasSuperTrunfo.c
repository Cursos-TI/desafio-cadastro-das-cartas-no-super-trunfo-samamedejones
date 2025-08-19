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

    printf("Digite os dados da primeira carta\n");

    printf("Digite a letra do Estado(A-H): \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta(01-04): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Qual o numero de habitantes? \n");
    scanf("%d", &populacao1);

    printf("Qual a área(em km²)? \n");
    scanf("%f", &area1);

    printf("Qual o Produto Interno Bruto(PIB)? \n");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turísticos?");
    scanf("%d", &pontosTuristicos1);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

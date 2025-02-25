#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estadoCarta1;
    char codigoCarta1[4];
    char nomeDaCidadeCarta1[50];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosCarta1;

    char estadoCarta2;
    char codigoCarta2[3];
    char nomeDaCidadeCarta2[50];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosCarta2;

    printf("Desafio Super Trunfo - Nível Novato\n\n");
    printf("Cadastre a Carta 1:\n\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estadoCarta1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDaCidadeCarta1);

    printf("Digite a população: ");
    scanf("%i", &populacaoCarta1);

    printf("Digite a área: ");
    scanf("%f", &areaCarta1);

    printf("Digite o PIB: ");
    scanf("%f", &pibCarta1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosCarta1);
    printf("\n\n");

    printf("Cadastre a Carta 2:\n\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estadoCarta2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDaCidadeCarta2);

    printf("Digite a população: ");
    scanf("%i", &populacaoCarta2);

    printf("Digite a área: ");
    scanf("%f", &areaCarta2);

    printf("Digite o PIB: ");
    scanf("%f", &pibCarta2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosCarta2);
    printf("\n\n");

    printf("Carta 1:\n\n");
    printf("Estado: %c \n", estadoCarta1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeDaCidadeCarta1);
    printf("População: %d \n", populacaoCarta1);
    printf("Área: %.2f \n", areaCarta1);
    printf("PIB: %.2f \n", pibCarta1);
    printf("Número de Pontos Turísticos: %d \n\n", pontosCarta1);

    printf("Carta 2:\n\n");
    printf("Estado: %c \n", estadoCarta2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeDaCidadeCarta2);
    printf("População: %d \n", populacaoCarta2);
    printf("Área: %.2f \n", areaCarta2);
    printf("PIB: %.2f \n", pibCarta2);
    printf("Número de Pontos Turísticos: %d \n", pontosCarta2);

    return 0;
}

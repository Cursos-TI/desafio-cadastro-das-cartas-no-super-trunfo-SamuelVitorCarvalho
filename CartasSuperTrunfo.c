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
    unsigned long int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosCarta1;
    float densidadePopulacionalCarta1;
    float pibPerCapitaCarta1;

    char estadoCarta2;
    char codigoCarta2[4];
    char nomeDaCidadeCarta2[50];
    unsigned long int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosCarta2;
    float densidadePopulacionalCarta2;
    float pibPerCapitaCarta2;

    printf("Desafio Super Trunfo - Nível Novato\n\n");
    printf("Cadastre a Carta 1:\n\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estadoCarta1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidadeCarta1); 

    printf("Digite a população: ");
    scanf("%d", &populacaoCarta1);

    printf("Digite a área: ");
    scanf("%f", &areaCarta1);

    printf("Digite o PIB: ");
    scanf("%f", &pibCarta1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosCarta1);
    printf("\n");

    printf("Cadastre a Carta 2:\n\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estadoCarta2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidadeCarta2);

    printf("Digite a população: ");
    scanf("%d", &populacaoCarta2);

    printf("Digite a área: ");
    scanf("%f", &areaCarta2);

    printf("Digite o PIB: ");
    scanf("%f", &pibCarta2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosCarta2);
    printf("\n\n");

    // Calculando a densidade populacional e o PIB per capita das 2 cartas

    densidadePopulacionalCarta1 = (float)populacaoCarta1 / areaCarta1;
    densidadePopulacionalCarta2 = (float)populacaoCarta2 / areaCarta2;

    pibPerCapitaCarta1 = pibCarta1 / (float)populacaoCarta1;
    pibPerCapitaCarta2 = pibCarta2 / (float)populacaoCarta2;

    // Mostrando os dados das Cartas

    printf("Carta 1:\n\n");
    printf("Estado: %c \n", estadoCarta1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeDaCidadeCarta1);
    printf("População: %d \n", populacaoCarta1);
    printf("Área: %.2f \n", areaCarta1);
    printf("PIB: %.2f \n", pibCarta1);
    printf("Número de Pontos Turísticos: %d \n", pontosCarta1);
    printf("Densidade Populacional: %.2f \n", densidadePopulacionalCarta1);
    printf("PIB per Capita: %.2f \n\n", pibPerCapitaCarta1);

    printf("Carta 2:\n\n");
    printf("Estado: %c \n", estadoCarta2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeDaCidadeCarta2);
    printf("População: %d \n", populacaoCarta2);
    printf("Área: %.2f \n", areaCarta2);
    printf("PIB: %.2f \n", pibCarta2);
    printf("Número de Pontos Turísticos: %d \n", pontosCarta2);
    printf("Densidade Populacional: %.2f \n", densidadePopulacionalCarta2);
    printf("PIB per Capita: %.2f \n\n", pibPerCapitaCarta2);

    // Calculando o Super Poder de cada carta

    float superPoderCarta1 = (float)populacaoCarta1 + areaCarta1 + pibCarta1 + (float)pontosCarta1 + pibPerCapitaCarta1 + (1 / densidadePopulacionalCarta1);
    float superPoderCarta2 = (float)populacaoCarta2 + areaCarta2 + pibCarta2 + (float)pontosCarta2 + pibPerCapitaCarta2 + (1 / densidadePopulacionalCarta2);

    printf("Super Poder da Carta 1: %.2f \n", superPoderCarta1);
    printf("Super Poder da Carta 2: %.2f \n", superPoderCarta2);

    // Comparações das Cartas

    int resultadoPopulacao = populacaoCarta1 > populacaoCarta2;
    int resultadoArea = areaCarta1 > areaCarta2;
    int resultadoPib = pibCarta1 > pibCarta2;
    int resultadoPontosTuristicos = pontosCarta1 > pontosCarta2;
    int resultadoDesidadePopulacional = densidadePopulacionalCarta1 > densidadePopulacionalCarta2;
    int resultadoPibPerCapita = pibPerCapitaCarta1 > pibPerCapitaCarta2;
    int resultadoSuperPoder = superPoderCarta1 > superPoderCarta2;

    // Mmostrando as comparações

    printf("\n Comparação de Cartas: \n");
    printf("População: Carta 1 venceu (%d)\n", resultadoPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontosTuristicos);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadoDesidadePopulacional);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder);

    return 0;
}

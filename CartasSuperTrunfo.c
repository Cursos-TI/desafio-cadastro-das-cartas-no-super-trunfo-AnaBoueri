#include <stdio.h>

int main() {
    
    // Criando as variáveis da carta 1 e carta 2
    char estado1, estado2;
    char cod_carta1[10], cod_carta2[10];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    float pib_percapita1, pib_percapita2;
    int ponto_turistico1, ponto_turistico2;
    float densidade1, densidade2;
    float super_poder1, super_poder2;

    // Criando variaveis dos resultados de comparacao
    int resultado_populacao, resultado_area, resultado_pib, resultado_pib_percapita, resultado_ponto_turistico, resultado_densidade, resultado_super_poder;

    // Lendo os dados da carta 1
    printf("*** Vamos adicionar uma carta ***\n");
    printf("Digite uma letra para o Estado da carta 1 (A-H): \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 (01-04): \n");
    scanf("%s", cod_carta1);
    printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %s", cidade1);
    printf("Digite a população da carta 1: \n");
    scanf("%lu", &populacao1);
    printf("Digite a área da carta 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: \n");
    scanf("%lf", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &ponto_turistico1);

    printf("*** Carta 1 adicionada com sucesso! ***\n\n");

    // Calculando a densidade populacional da carta 1
    densidade1 = (float)populacao1 / area1;

    // Calculando o PIB per capita da carta 1
    pib_percapita1 = pib1 / populacao1;

    // Mostrando os dados da carta 1
    printf("--- * --- CARTA 01 --- * ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, cod_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("Número de pontos turísticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.4f\n", densidade1);
    printf("PIB per Papita: %.2f\n\n", pib_percapita1);

    // Lendo os dados da carta 2
    printf("*** Vamos adicionar outra carta ***\n");
    printf("Digite uma letra para o Estado da carta 2 (A-H): \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2 (01-04): \n");
    scanf("%s", cod_carta2);
    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %s", cidade2);
    printf("Digite a população da carta 2: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área da carta 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: \n");
    scanf("%lf", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &ponto_turistico2);

    printf("*** Carta 2 adicionada com sucesso! ***\n\n");

    // Calculando a densidade populacional da carta 2
    densidade2 = (float)populacao2 / area2;

    // Calculando o PIB per capita da carta 2
    pib_percapita2 = pib2 / (float)populacao2;

    // Mostrando os dados da carta 2
    printf("--- * --- CARTA 02 --- * ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, cod_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Número de pontos turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.4f\n", densidade2);
    printf("PIB per Papita: %.2f\n\n", pib_percapita2);

    // AGRADECIMENTO
    printf("\nObrigado por adicionar as cartas!\n\n");

    // Invertando o valor da densidade populacional e somando atributos para o super poder
    super_poder1 = (float)populacao1 + area1 + pib1 + pib_percapita1 + ponto_turistico1 + (1.0 / densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + pib_percapita2 + ponto_turistico2 + (1.0 / densidade2);

    // Comparando as cartas
    printf("\n-----------------------------\n");
    printf("\nAgora vamos comparar as cartas e ver qual será a vencedora!\n\n");
    printf("(1 para verdadeiro - Carta 1 vence - e 0 para falso - Carta 2 vence)\n\n");

    resultado_populacao = populacao1 > populacao2;
    resultado_area = area1 > area2;
    resultado_pib = pib1 > pib2;
    resultado_pib_percapita = pib_percapita1 > pib_percapita2;
    resultado_ponto_turistico = ponto_turistico1 > ponto_turistico2;
    resultado_densidade = densidade1 < densidade2; // Menor densidade é melhor
    resultado_super_poder = super_poder1 > super_poder2;

    // Mostrando os resultados das comparações
    printf("População: Carta 1 é maior que Carta 2? %d\n", resultado_populacao);
    printf("Área: Carta 1 é maior que Carta 2? %d\n", resultado_area);
    printf("PIB: Carta 1 é maior que Carta 2? %d\n", resultado_pib);
    printf("PIB per Capita: Carta 1 é maior que Carta 2? %d\n", resultado_pib_percapita);
    printf("Número de Pontos Turísticos: Carta 1 é maior que Carta 2? %d\n", resultado_ponto_turistico);
    printf("Densidade Populacional: Carta 1 é menor que Carta 2? %d\n", resultado_densidade);
    printf("Super Poder: Carta 1 é maior que Carta 2? %d\n", resultado_super_poder);

    return 0;

    //Dados usados nas cartas para testes
    /*
    Carta 1
    Estado: A
    Código: 01
    Cidade: Piracicaba
    População: 423323
    Área: 1374954
    PIB: 34555723.85
    Número de pontos turísticos: 5

    Carta 2
    Estado: B
    Código: 02
    Cidade: Campinas
    População: 1139047
    Área: 794571
    PIB: 72946744.92
    Número de pontos turísticos: 8
    */
}

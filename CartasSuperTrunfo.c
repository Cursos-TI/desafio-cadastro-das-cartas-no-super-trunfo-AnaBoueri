#include <stdio.h>

int main() {
    
    // Criando as variáveis da carta 1 e carta 2
    char estado1, estado2;
    char cod_carta1[10], cod_carta2[10];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;

    // Lendo os dados da carta 1
    printf("*** Vamos adicionar uma carta ***\n");
    printf("Digite uma letra para o Estado da carta 1 (A-H): \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 (01-04): \n");
    scanf("%s", cod_carta1);
    printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %s", cidade1);
    printf("Digite a população da carta 1: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da carta 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &ponto_turistico1);

    printf("*** Carta 1 adicionada com sucesso! ***\n\n");

    // Mostrando os dados da carta 1
    printf("--- * --- CARTA 01 --- * ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, cod_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", ponto_turistico1);

    // Lendo os dados da carta 2
    printf("*** Vamos adicionar outra carta ***\n");
    printf("Digite uma letra para o Estado da carta 2 (A-H): \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2 (01-04): \n");
    scanf("%s", cod_carta2);
    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %s", cidade2);
    printf("Digite a população da carta 2: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da carta 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &ponto_turistico2);

    printf("*** Carta 2 adicionada com sucesso! ***\n\n");

    // Mostrando os dados da carta 2
    printf("--- * --- CARTA 02 --- * ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, cod_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n\n", ponto_turistico2);

    // AGRADECIMENTO
    printf("\nObrigado por adicionar as cartas!\n");

    return 0;
}

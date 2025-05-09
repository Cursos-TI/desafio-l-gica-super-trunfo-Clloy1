#include <stdio.h>

int main() {
    char pais1[50], pais2[50];
    int populacao1, populacao2, area1, area2, pib1, pib2, pontos1, pontos2;
    int soma1, soma2;

    // Leitura dos dados
    printf("Digite os dados da carta 1:\n");
    printf("Pais: ");
    scanf("%s", pais1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%d", &area1);
    printf("PIB: ");
    scanf("%d", &pib1);
    printf("Pontos: ");
    scanf("%d", &pontos1);

    printf("Digite os dados da carta 2:\n");
    printf("Pais: ");
    scanf("%s", pais2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%d", &area2);
    printf("PIB: ");
    scanf("%d", &pib2);
    printf("Pontos: ");
    scanf("%d", &pontos2);

    // Escolha dos atributos
    printf("Escolha o primeiro atributo (1 para Populacao, 2 para Area, 3 para PIB, 4 para Pontos): ");
    int atributo1;
    scanf("%d", &atributo1);

    printf("Escolha o segundo atributo (1 para Populacao, 2 para Area, 3 para PIB, 4 para Pontos): ");
    int atributo2;
    scanf("%d", &atributo2);

    // Calculo da soma
    if (atributo1 == 1) soma1 = populacao1;
    if (atributo1 == 2) soma1 = area1;
    if (atributo1 == 3) soma1 = pib1;
    if (atributo1 == 4) soma1 = pontos1;

    if (atributo2 == 1) soma1 += populacao1;
    if (atributo2 == 2) soma1 += area1;
    if (atributo2 == 3) soma1 += pib1;
    if (atributo2 == 4) soma1 += pontos1;

    if (atributo1 == 1) soma2 = populacao2;
    if (atributo1 == 2) soma2 = area2;
    if (atributo1 == 3) soma2 = pib2;
    if (atributo1 == 4) soma2 = pontos2;

    if (atributo2 == 1) soma2 += populacao2;
    if (atributo2 == 2) soma2 += area2;
    if (atributo2 == 3) soma2 += pib2;
    if (atributo2 == 4) soma2 += pontos2;

    // Resultado
    printf("Resultado:\n");
    printf("Pais 1: %s\n", pais1);
    printf("Pais 2: %s\n", pais2);
    printf("Soma dos atributos:\n");
    printf("Pais 1: %d\n", soma1);
    printf("Pais 2: %d\n", soma2);

    if (soma1 > soma2) {
        printf("Pais 1 venceu!\n");
    } else if (soma2 > soma1) {
        printf("Pais 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    
    
        return 0;


    }
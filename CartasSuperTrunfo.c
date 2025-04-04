#include <stdio.h>

int main()
{

    char letra, cidade[30];
    int codigo, hab, turis;
    float area, pib;

    char letra2, cidade2[30];
    int codigo2, hab2, turis2;
    float area2, pib2;

    double densidade, pibper, densidade2, pibper2;

    // primeira carta a baixo

    printf(" seja bem vindo ao super trunfo \n\n");
    printf(" primeira carta \n\n");

    printf(" digite uma letra de A a H: \n");
    scanf("%c", &letra);

    printf(" digite um numero de 0 a 4: \n");
    scanf("%d", &codigo);

    printf(" digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf(" digite o numero de habitantes da cidade: \n");
    scanf("%d", &hab);

    printf("digite a area da cidade em km²: \n");
    scanf("%f", &area);

    printf("digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("digite o numero de pontos turisticos dessa cidade: \n");
    scanf("%d", &turis);

    // segunda carta a baixo

    printf("\n segunda carta\n\n");

    printf("digite uma segunda letra de A a H: \n");
    scanf("%s", &letra2); // esse scanf ta em S(string) pois tava dando erro de codagem

    printf("digite um numero de 0 a 4: \n");
    scanf("%d", &codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("digite o numero de habitantes da cidade: \n");
    scanf("%d", &hab2);

    printf("digite a area da cidade em km²: \n");
    scanf("%f", &area2);

    printf("digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turisticos dessa cidade: \n");
    scanf("%d", &turis2);

    // resultado a baixo
    // primeira carta

    densidade = hab / area;
    pibper = pib / hab;

    densidade2 = hab2 / area2;
    pibper2 = pib2 / hab2;

    printf("\n\ncarta 1\n\n");
    printf("estado: %c\n", letra);
    printf("codigo: %c0%d \n", letra, codigo);
    printf("nome da cidade: %s \n", cidade);
    printf("populaçao: %d \n", hab);
    printf("área: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("numero de pontos turisticos: %d \n", turis);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais \n\n", pibper);
    // segunda carta

    printf("carta 2\n\n");
    printf("estado: %c\n", letra2);
    printf("codigo: %c0%d \n", letra2, codigo2);
    printf("nome da cidade: %s \n", cidade2);
    printf("populaçao: %d \n", hab2);
    printf("área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("numero de pontos turisticos: %d \n", turis2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais \n\n", pibper2);

    return 0;
}

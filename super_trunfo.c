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

    return 0;
}

#include <stdio.h>

int main() {
    
    char codigo01[4];
    float area01;
    int habitantes01;
    float pib01;
    int turisticos01;
    
    printf("Registro de carta 1\n");
    
    printf("O código da carta será: \n");
        scanf("%s", codigo01);
    
    printf("Qual a área em km²? \n");
        scanf("%f", &area01);

    printf("Qual a população existente (em milhões)? \n");
        scanf("%d", &habitantes01);

    printf("Qual o último PIB registrado (em bilhões)? \n");
        scanf("%f", &pib01);

    printf("Quantos pontos turísticos famosos essa cidade tem? \n");
        scanf("%d", &turisticos01);

    char codigo02[4];
    float area02;
    int habitantes02;
    float pib02;
    int turisticos02;
    
    printf("Registro de carta 2\n");
    
    printf("O código da carta será: \n");
        scanf("%s", codigo02);
    
    printf("Qual a área em km²? \n");
        scanf("%f", &area02);

    printf("Qual a população existente (em milhões)? \n");
        scanf("%d", &habitantes02);

    printf("Qual o último PIB registrado (em bilhões)? \n");
        scanf("%f", &pib02);

    printf("Quantos pontos turísticos famosos essa cidade tem? \n");
        scanf("%d", &turisticos02);
    
    printf("-----------------------------------\n");
    printf("Código da carta: %s\n", codigo01);
    printf("Área ocupada: %.2f km²\n", area01);
    printf("População: %d milhões de habitantes\n", habitantes01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Pontos turísticos: %d pontos\n", turisticos01);
    printf("-----------------------------------\n");
    printf("Código da carta: %s\n", codigo02);
    printf("Área ocupada: %.2f km²\n", area02);
    printf("População: %d milhões de habitantes\n", habitantes02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Pontos turísticos: %d pontos\n", turisticos02);
    printf("-----------------------------------\n");
    
    return 0;
}

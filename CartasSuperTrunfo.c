#include <stdio.h>

int main() {

//variáveis iniciais.
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

//Fornece perguntas ao usuário e armazena os dados informados.
    printf("Bem Vindo(a) ao Super Trunfo Cidades!\nVamos Começar?\n"); 

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao);

    printf("Quantos pontos turísticos tem na cidade?\n");  
    scanf("%d", &pontos_turisticos);

    printf("Qual a área da cidade em km²?\n");  
    scanf("%f", &area);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib);

//Retorna as informações inseridas pelo usúario.
    printf("População: %d\n", populacao);
    printf("Pontos túristicos: %d\n", pontos_turisticos);
    printf("Area: %f\n km²", area);
    printf("PIB: R$%.2f\n",pib);




    return 0;
}

#include <stdio.h>

int main() {
    //variáveis iniciais.
    int populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;

     //fornece perguntas ao usuário e coleta os dados informados via terminal.
    printf("Bem Vindo(a) ao Super Trunfo Cidades!\nVamos Começar?\n"); 
    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao);
    printf("Quantos pontos turísticos tem na cidade?\n");  
    scanf("%d", &numero_de_pontos_turisticos);  
    printf("Qual a área da cidade em km²?\n");  
    scanf("%d", &area);
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib);

    printf("População: %d\n", populacao);
    printf("Pontos túristicos: %d\n", numero_de_pontos_turisticos);
    printf("Area: %d km²", area);
    printf("PIB: R$%.2f",pib);






















    return 0;
}

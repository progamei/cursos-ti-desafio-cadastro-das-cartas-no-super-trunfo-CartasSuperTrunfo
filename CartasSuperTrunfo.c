#include <stdio.h>

int main() {

//Declara as variáveis iniciais.

    char cidade1[30], cidade2[30]; 
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

//Imprime uma mensagem de boas vindas no Terminal.

    printf("Bem Vindo(a) ao Super Trunfo Cidades!\nVamos Começar?\n");
   
//Insere uma quebra de texto.   
    printf ("\v");

//Fornece perguntas ao usuário 1 e armazena os dados informados.

    printf("JOGADOR 1\nInsira os atributos:\n");

    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade1);
    
    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao1);

    printf("Quantos pontos turísticos tem na cidade?\n");  
    scanf("%d", &pontos_turisticos1);

    printf("Qual a área da cidade em km²?\n");  
    scanf("%f", &area1);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib1);

 //Fornece perguntas ao usuário 2 e armazena os dados coletados.
    printf ("\v");
    printf("JOGADOR 2\nInsira os atributos:\n");
    
    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade2);
    
    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao2);

    printf("Quantos pontos turísticos tem na cidade?\n");  
    scanf("%d", &pontos_turisticos2);

    printf("Qual a área da cidade em km²?\n");  
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib2);

 //Retorna as informações inseridas pelo usuário 1 e 2.

    printf("#CARTA 1:#\n");
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos túristicos: %d\n", pontos_turisticos1);
    printf("Area: %f km² \n", area1);
    printf("PIB: R$%.2f\n",pib1);

    printf ("\v");

    printf("#CARTA 2:#\n");
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos túristicos: %d\n", pontos_turisticos2);
    printf("Area: %f km² \n", area2);
    printf("PIB: R$%.2f\n",pib2);




    return 0;
}

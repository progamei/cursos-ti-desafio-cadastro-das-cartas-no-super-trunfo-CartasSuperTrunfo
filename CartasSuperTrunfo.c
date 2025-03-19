#include <stdio.h>

int main() {


    ///////////// VARIÁVEIS INICIAIS/////////////


    char cidade1[50], cidade2[50]; 
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;
    //Declaram os nomes e tipos das variáveis das cartas.

    printf("Bem Vindo(a) ao Super Trunfo Cidades!\nVamos Começar?\n");
    //Imprime uma mensagem de boas vindas.   

    printf ("\v");
    //Insere uma quebra de texto, para melhor visualização.


    /////////////DADOS DA PRIMEIRA CARTA/////////////


    printf("CARTA 1\nInsira os atributos:\n"); 
    //Imprime a mensagem entre aspas no terminal e salta uma linha.
    //"\n" salta uma linha.

    printf ("\v");
    //Quebra de texo.

    printf("Qual o nome da cidade?\n");
    //Imprime a mensagem entre aspas no terminal.

    scanf(" %49[^\n]", cidade1);
    //Atribui um valor a "cidade1".
    //"%[^\n]" lê uma string até encontrar um caractere de quebra de linha.
    //Substitui a função "%s" e evita problemas com espaços em branco na string.
    //O espaço antes do "%49[^\n]" evita problemas com o buffer de entrada.
    //"49" indica a quantidade máxima de caracteres que podem ser lidos.

    printf("Qual a população da cidade?\n");
    //Imprime a mensagem entre aspas no terminal.

    scanf("%d", &populacao1);
    //Atribui um valor a "populacao1".

    printf("Quantos pontos turísticos tem na cidade?\n");
    //Imprime a mensagem entre aspas no terminal.
  
    scanf("%d", &pontos_turisticos1);
    //Atribui um valor a "pontos_turisticos1".    

    printf("Qual a área da cidade em km²?\n");
    //Imprime a mensagem entre aspas no terminal.
    
    scanf("%f", &area1);
    //Atribui um valor a "area1".

    printf("Qual o PIB da cidade?\n");
    //Imprime a mensagem entre aspas no terminal.

    scanf("%f", &pib1);
    //Atribui um valor a "pib1".

    printf ("\v");
    //Insere uma quebra de texto, para melhor visualização.


    /////////////DADOS DA SEGUNDA CARTA/////////////

   
    printf("CARTA 2\nInsira os atributos:\n");
    //Imprime a mensagem entre aspas no terminal.
    //"\n" salta uma linha.

    printf ("\v");
    //Insere uma quebra de texto, para melhor visualização.
    
    printf("Qual o nome da cidade?\n");
    //Imprime a mensagem entre aspas no terminal.

    scanf(" %* ");
    //" %* " Limpa o buffer de entrada para evitar que o scanf pule a leitura da string.   

    scanf(" %49[^\n]", cidade2);
    //Atribui um valor a "cidade2".
    //"%[^\n]" lê uma string até encontrar um caractere de quebra de linha.
    //Substitui a função "%s" e evita problemas com espaços em branco na string.
    //O espaço antes do "%49[^\n]" evita problemas com o buffer de entrada.
    //"49" indica a quantidade máxima de caracteres que podem ser lidos.
    
    printf("Qual a população da cidade?\n");
    //Imprime a mensagem entre aspas no terminal e salta uma linha.

    scanf("%d", &populacao2);
    //Atribui um valor a "populacao2".

    printf("Quantos pontos turísticos tem na cidade?\n");
    //Imprime a mensagem entre aspas no terminal.

    scanf("%d", &pontos_turisticos2);
    //Atribui um valor a "pontos_turisticos2".

    printf("Qual a área da cidade em km²?\n");
    //Imprime a mensagem entre aspas no terminal e salta uma linha.

    scanf("%f", &area2);
    //Atribui um valor a "area2".

    printf("Qual o PIB da cidade?\n");
    //Imprime a mensagem entre aspas no terminal e salta uma linha.

    scanf("%f", &pib2);
    //Atribui um valor a "pib2".

    printf ("\v");
    //Insere uma quebra de texto, para melhor visualização.
    
    /////////////DADOS DE AMBAS AS CARTAS/////////////

    printf("#CARTA 1:#\n");
    //Imprime a mensagem entre aspas no terminal e salta uma linha.

    printf("Cidade: %s\n", cidade1);
    //imprime no terminal o valor atribuído a "cidade1".

    printf("População: %d pessoas\n", populacao1);
    //imprime no terminal o valor atribuído a "populacao1".

    printf("Pontos túristicos: %d\n", pontos_turisticos1);
    //imprime no terminal o valor atribuído a "pontos_turisticos1".

    printf("Área: %.3fkm² \n", area1);
    //imprime no terminal o valor atribuído a "area1".

    printf("PIB: R$%.2f\n",pib1);
    //imprime no terminal o valor atribuído a "pib1".

    printf ("\v");
    //Insere uma quebra de texto, para melhor visualização.

    printf("#CARTA 2:#\n");
    //Imprime a mensagem entre aspas no terminal e salta uma linha.

    printf("Cidade: %s\n", cidade2);
    //imprime no terminal o valor atribuído a "cidade2".

    printf("População: %d pessoas\n", populacao2);
    //imprime no terminal o valor atribuído a "populacao2".

    printf("Pontos túristicos: %d\n", pontos_turisticos2);
    //imprime no terminal o valor atribuído a "pontos_turisticos2".

    printf("Área: %.3fkm² \n", area2);
    //imprime no terminal o valor atribuído a "area2".

    printf("PIB: R$%.2f\n",pib2);
    //imprime no terminal o valor atribuído a "pib2".




return 0;
}

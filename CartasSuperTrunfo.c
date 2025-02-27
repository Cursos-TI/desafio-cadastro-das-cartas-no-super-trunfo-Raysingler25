#include <stdio.h>

int main() {
   //informações da carta1;
   char estado1[50];
   char codigo1[10];
   char cidade1[30];
   float area1;
   float PIB1;
   int numero_de_pontos_turisticos1;
   float densidade_populacional_carta1;
   float PIB_per_capta_carta1;

   //informacoes da carta2;
   char estado2[50];
   char codigo2[10];
   char cidade2[30];
   float area2;
   float PIB2;
   int numero_de_pontos_turisticos2;
   float densidade_populacional_carta2;
   float PIB_per_capta_carta2;
   unsigned long int populacao1, populacao2;

//Entrada de dados carta1
   printf("----------Super Trunfo!----------\n");

   printf("-------Carta 1-------");
   printf("\n");
   printf("Insira os dados da carta 01:\n");
   printf("\n");

   printf("Digite uma letra de 'A' a 'H' para representar um estado:\n");
   scanf(" %s", estado1);

   printf("digite o código da carta (exemplo: A01,B03):\n");
   scanf(" %s", codigo1);

   printf("digite a cidade:\n");
   scanf(" %s", cidade1);

   printf("digite a população:\n");
   scanf("%lu", &populacao1);

   printf("digite a area (exemplo:1500.20 km²):\n");
   scanf("%f", &area1);

   printf("digite o PIB:\n");
   scanf("%f", &PIB1);

   printf("digite o numero de pontos turisticos:\n");
   scanf("%d", &numero_de_pontos_turisticos1);

   densidade_populacional_carta1= populacao1 / area1;
   PIB_per_capta_carta1= PIB1 / populacao1;


   //Entrada de dados sobre as cartas
   printf("----------CARTA 2----------\n");
   printf("Insira os dados da carta 02:\n");
   printf("\n");

   printf("Digite uma letra de 'A' a 'H' para representar um estado:\n");
   scanf(" %s", estado2);

   printf("digite o código da carta (exemplo: A01,B03):\n");
   scanf(" %s", codigo2);

   printf("digite a cidade:\n");
   scanf(" %s", cidade2);

   printf("digite a população:\n");
   scanf("%lu", &populacao2);

   printf("digite a area (exemplo:1500.20 km²):\n");
   scanf("%f", &area2);

   printf("digite o PIB:\n");
   scanf("%f", &PIB2);

   printf("digite o numero de pontos turisticos:\n");
   scanf("%d", &numero_de_pontos_turisticos2);

   densidade_populacional_carta2= populacao2 / area2;
   PIB_per_capta_carta2= PIB2 / populacao2;


   printf("\n--- Dados da Carta 1 ---\n");
   printf("estado: %s\n", estado1);
   printf("código: %s\ncidade: %s\n", codigo1, cidade1);
   printf("população: %lu\narea: %.3f km²\n", populacao1, area1);
   printf("PIB: %.2f Bilhões de reais\npontos turisticos: %d\n", PIB1, numero_de_pontos_turisticos1);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_carta2);
   printf("PIB Per Capita: %.2f reais\n", PIB_per_capta_carta2);


   printf("\n--- Dados da Carta 2 ---\n");
   printf("estado: %s\n", estado2);
   printf("código: %s\ncidade: %s\n", codigo2, cidade2);
   printf("população: %lu\narea: %.3f km²\n", populacao2, area2);
   printf("PIB: %.2f Bilhões de reais\npontos turisticos: %d\n", PIB2, numero_de_pontos_turisticos2);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_carta2);
   printf("PIB Per Capita: %.2f reais\n", PIB_per_capta_carta2);

   return 0;


}

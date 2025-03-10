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
   float super_poder_carta1;

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
   float super_poder_carta2;

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
   //calculos de densidade populacional e pib per capta
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
   //calculos de densidade populacional e pib per capta
   densidade_populacional_carta2= populacao2 / area2;
   PIB_per_capta_carta2= PIB2 / populacao2;

    //calculo de super poder de ambas as cartas
   super_poder_carta1 = populacao1 + area1 + PIB_per_capta_carta1 + PIB1 + numero_de_pontos_turisticos1 + (1.0 / densidade_populacional_carta1);
   super_poder_carta2 = populacao1 + area2 + PIB_per_capta_carta2 + PIB2 + numero_de_pontos_turisticos2 + (1.0 / densidade_populacional_carta2);

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


   /*  //ANTIGA LINHA DE CODIGO (ANTERIOR AO IF E ELSE)
    //Avalia qual carta venceu, para na hora da exibição nao mostrar o resultado do operador relacional bolean (0 ou 1) e sim carta 1 ou carta 2
    int resultado_populacao = (populacao1 > populacao2) + (populacao1 < populacao2) *2;
    int resultado_area = (area1 > area2) + (area1 < area2) *2;
    int resultado_pib = (PIB1 > PIB2) + (PIB1 < PIB2) *2;
    int resultado_pontos_turisticos = (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) + (numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2) *2;
    int resultado_densidade_populacional = (densidade_populacional_carta1 > densidade_populacional_carta2) + (densidade_populacional_carta1 < densidade_populacional_carta2) *2;
    int resultado_pib_per_capta = (PIB_per_capta_carta1 > PIB_per_capta_carta2) + (PIB_per_capta_carta1 < PIB_per_capta_carta2) *2;
    int resultado_super_poder = (super_poder_carta1 > super_poder_carta2) + (super_poder_carta1 < super_poder_carta2) *2;
   */


   //resultado do vencedor
   printf("\n");
   printf("--------------RESULTADO------------");
   printf("\n");


   //Antiga e dasatualizada comparação da carta vencedora
   /*
   printf("Comparação de Cartas:\n");
   printf("População: Carta %d venceu (%d)\n", resultado_populacao, populacao1 > populacao2);
   printf("Area: Carta %d venceu (%d)\n",resultado_area, area1 > area2);
   printf("PIB: Carta %d venceu (%d)\n", resultado_pib, PIB1 > PIB2);
   printf("Numero de pontos turisticos: Carta %d venceu (%d)\n", resultado_pontos_turisticos, numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2);
   printf("Densidade populacional %d venceu (%d)\n", resultado_densidade_populacional, densidade_populacional_carta1 < densidade_populacional_carta2);
   printf("PIB per capta carta %d venceu (%d)\n", resultado_pib_per_capta, PIB_per_capta_carta1 > PIB_per_capta_carta2);
   printf("Super poder carta %d venceu (%d)\n", resultado_super_poder, super_poder_carta1 > super_poder_carta2);
   */

   //Novo calculo da carta vencedora usando o if e else
   if ( populacao1 > populacao2 ) { printf ("POPULAÇÃO - CARTA 1 VENCEU\n");
   }else { printf ("POPULAÇÃO - CARTA 2 VENCEU\n"); }

   if ( area1 > area2 ) { printf ("AREA - CARTA 1 VENCEU\n");
   }else {  printf ("AREA - CARTA 2 VENCEU\n"); }

   if (PIB1 > PIB2) {  printf ("PIB - CARTA 1 VENCEU\n");
   }else { printf ("PIB - CARTA 2 VENCEU\n"); }

   if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) { printf ("PONTOS TURISTICOS - CARTA 1 VENCEU\n"); 
   }else { printf ("PONTOS TURISTICOS - CARTA 2 VENCEU\n");}

   if (densidade_populacional_carta1 < densidade_populacional_carta2) { printf ("DENSIDADE POPULACIONAL - CARTA 1 VENCEU\n");
   }else { printf ("DENSIDADE POPULACIONAL - CARTA 2 VENCEU\n");  }

   if (PIB_per_capta_carta1 > PIB_per_capta_carta2) { printf ("PIB_PER_CAPTA - CARTA 1 VENCEU\n");
   }else { printf ("PIB_PER_CAPTA - CARTA 2 VENCEU\n");  }

   if (super_poder_carta1 > super_poder_carta2) { printf ("SUPER_PODER - CARTA 1 VENCEU\n");
   }else { printf ("SUPER_PODER - CARTA 2 VENCEU\n"); }

   return 0;

}
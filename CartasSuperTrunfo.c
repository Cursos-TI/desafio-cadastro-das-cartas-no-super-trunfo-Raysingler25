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
   int opcao;
   int opcao2;
   int resposta;
   char resultado;
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



   //resultado do vencedor
   printf("\n");
   printf("--------------RESULTADO------------");
   printf("\n");

printf("escolha o atributo que deseja comparar\n");
printf("1. população\n");
printf("2. area\n");
printf("3. PIB\n");
printf("4. numero de pontos turisticos\n");
printf("5. densidade populacional\n");
printf("6. pib per capta\n");
printf("Digite aqui: ");
scanf("%d", &opcao);


   //Novo calculo da carta vencedora usando o if e else

 switch (opcao)
 {
 case 1:
     if(populacao1 > populacao2){
         printf("Atributo: População\n");
         printf("Carta 1 - %s: %lu Habitantes\n", cidade1, populacao1);
         printf("Carta 2 - %s: %lu Habitantes\n", cidade2, populacao2);
         printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
     } else if (populacao1 < populacao2){
         printf("Atributo: População\n");
         printf("Carta 1 - %s: %lu Habitantes\n", cidade1, populacao1);
         printf("Carta 2 - %s: %lu Habitantes\n",cidade2, populacao2);
         printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
     } else  {
         printf("Atributo: População\n");
         printf("Carta 1 - %s: %lu Habitantes\n", cidade1, populacao1);
         printf("Carta 2 - %s: %lu Habitantes\n", cidade2, populacao2);
         printf("Resultado: Empate!\n");
     }
     break;
   case 2:
      if (area1 > area2){
       printf("Atributo: área\n");
       printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
       printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
       printf("resultado: Carta 1 (%s) venceu!\n", cidade1);
      } else if (area1 < area2){
      printf("Atributo: área\n");
      printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
      printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
      printf("resultado: Carta 2 (%s) venceu!\n", cidade2);
      } else {
      printf("Atributo: área\n");
      printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
      printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);  
      printf("resulta : empate!\n"); 
      } 
      break;
   case 3:
      if (PIB1 > PIB2){
       printf("Atributo: PIB\n");
       printf("Carta 1 - %s: %.2f Bilhões de reais\n", cidade1, PIB1);
       printf("Carta 2 - %s: %.2f Bilhões de reais\n", cidade2, PIB2);
       printf("resultado: Carta 1 (%s) venceu!\n", cidade1);
      } else if (PIB1 < PIB2){
      printf("Atributo:PIB\n");
      printf("Carta 1 - %s: %.2f Bilhões de reais\n", cidade1, PIB1);
      printf("Carta 2 - %s: %.2f Bilhões de reais\n", cidade2, PIB2);
      printf("resultado: Carta 2 (%s) venceu!\n", cidade2);
      } else {
      printf("Atributo: PIB\n");
      printf("Carta 1 - %s: %.2f Bilhões de reais\n", cidade1, PIB1);
      printf("Carta 2 - %s: %.2f Bilhões de reais\n", cidade2, PIB2);  
      printf("resulta : empate!\n");  
   } 
   break;  
   case 4:
      if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
       printf("Atributo: Pontos turisticos\n");
       printf("Carta 1 - %s: %d Pontos turisticos\n", cidade1, numero_de_pontos_turisticos1);
       printf("Carta 2 - %s: %d Pontos turisticos\n", cidade2, numero_de_pontos_turisticos2);
       printf("resultado: Carta 1 (%s) venceu!\n", cidade1);
      } else if (PIB1 < PIB2){
      printf("Atributo:Pontos turisticos\n");
      printf("Carta 1 - %s: %d Pontos turisticos\n", cidade1, numero_de_pontos_turisticos1);
      printf("Carta 2 - %s: %d Pontos turisticos\n", cidade2, numero_de_pontos_turisticos2);
      printf("resultado: Carta 2 (%s) venceu!\n", cidade2);
      } else {
      printf("Atributo: Pontos turisticos\n");
      printf("Carta 1 - %s: %d Pontos turisticos\n", cidade1, numero_de_pontos_turisticos1);
      printf("Carta 2 - %s: %d Pontos turisticos\n", cidade2, numero_de_pontos_turisticos2);  
      printf("resulta : empate!\n");
      } break;
   case 5:
   if (densidade_populacional_carta1 < densidade_populacional_carta2){
      printf("Atributo: Densidade populacional\n");
      printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_populacional_carta1);
      printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_populacional_carta2);
      printf("resultado: Carta 1 (%s) venceu!\n", cidade1);
     } else if (densidade_populacional_carta1 > densidade_populacional_carta2){
     printf("Atributo: Densidade populacional\n");
     printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_populacional_carta1);
     printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_populacional_carta2);
     printf("resultado: Carta 2 (%s) venceu!\n", cidade2);
     } else {
     printf("Atributo: Densidade populacional\n");
     printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_populacional_carta1);
     printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_populacional_carta2);  
     printf("resulta : empate!\n");
     } break;    
   case 6:
   if (PIB_per_capta_carta1 > PIB_per_capta_carta2){
        printf("Atributo: PIB per capta\n");
        printf("Carta 1 - %s: %.2f reais\n", cidade1, PIB_per_capta_carta1);
        printf("Carta 2 - %s: %.2f reais\n", cidade2, PIB_per_capta_carta2);
        printf("resultado: Carta 1 (%s) venceu!\n", cidade1);
       } else if (PIB_per_capta_carta1 < PIB_per_capta_carta2){
       printf("Atributo: PIB per capta\n");
       printf("Carta 1 - %s: %.2f reais\n", cidade1, PIB_per_capta_carta1);
       printf("Carta 2 - %s: %.2f reais\n", cidade2, PIB_per_capta_carta2);
       printf("resultado: Carta 2 (%s) venceu!\n", cidade2);
       } else {
       printf("Atributo: PIB per capta\n");
       printf("Carta 1 - %s: %.2f reais\n", cidade1, PIB_per_capta_carta1);
       printf("Carta 2 - %s: %.2f reais\n", cidade2, PIB_per_capta_carta2);  
       printf("resulta : empate!\n");
      }
      break;
  default:
      printf("\n");
      printf("Opção escolhida inválida!");
      break;
    }
   printf("\n");
   printf("=========================================================================\n");




printf("\nDeseja comparar um segundo atributo? (responda 01 ou 02)\n");
printf("01. sim eu gostaria!\n");
printf("02. Não, sair do programa\n");
scanf("%d", &resposta);
printf("\n");
printf("\n");
  switch (resposta)
  {
  case 01 : printf("digite qual atributo gostaria de comparar agora\n");
  printf("1. população\n");
  printf("2. area\n");
  printf("3. PIB\n");
  printf("4. numero de pontos turisticos\n");
  printf("5. densidade populacional\n");
  printf("6. pib per capta\n");
  printf("Digite aqui: ");
  scanf("%d", &opcao2);
  printf("\n");
  printf("\n");
        switch (opcao2)
        {
         case 1:
         if(populacao1 > populacao2){
             printf("Atributo: População\n");
             printf("Carta 1 - %s: %lu Habitantes\n", cidade1, populacao1);
             printf("Carta 2 - %s: %lu Habitantes\n", cidade2, populacao2);
             printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (populacao1 < populacao2){
             printf("Atributo: População\n");
             printf("Carta 1 - %s: %lu Habitantes\n", cidade1, populacao1);
             printf("Carta 2 - %s: %lu Habitantes\n",cidade2, populacao2);
             printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
         } else  {
             printf("Atributo: População\n");
             printf("Carta 1 - %s: %lu Habitantes\n", cidade1, populacao1);
             printf("Carta 2 - %s: %lu Habitantes\n", cidade2, populacao2);
             printf("Resultado: Empate!\n");
         }
         break;
       case 2:
          if (area1 > area2){
           printf("Atributo: área\n");
           printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
           printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
           printf("resultado: Carta 1 (%s) venceu!\n", cidade1);
          } else if (area1 < area2){
          printf("Atributo: área\n");
          printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
          printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
          printf("resultado: Carta 2 (%s) venceu!\n", cidade2);
          } else {
          printf("Atributo: área\n");
          printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
          printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);  
          printf("resulta : empate!\n"); 
          } 
          break;
       case 3:
          if (PIB1 > PIB2){
           printf("Atributo: PIB\n");
           printf("Carta 1 - %s: %.2f Bilhões de reais\n", cidade1, PIB1);
           printf("Carta 2 - %s: %.2f Bilhões de reais\n", cidade2, PIB2);
           printf("resultado: Carta 1 (%s) venceu!\n", cidade1);
          } else if (PIB1 < PIB2){
          printf("Atributo:PIB\n");
          printf("Carta 1 - %s: %.2f Bilhões de reais\n", cidade1, PIB1);
          printf("Carta 2 - %s: %.2f Bilhões de reais\n", cidade2, PIB2);
          printf("resultado: Carta 2 (%s) venceu!\n", cidade2);
          } else {
          printf("Atributo: PIB\n");
          printf("Carta 1 - %s: %.2f Bilhões de reais\n", cidade1, PIB1);
          printf("Carta 2 - %s: %.2f Bilhões de reais\n", cidade2, PIB2);  
          printf("resulta : empate!\n");  
       } 
       break;  
       case 4:
          if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
           printf("Atributo: Pontos turisticos\n");
           printf("Carta 1 - %s: %d Pontos turisticos\n", cidade1, numero_de_pontos_turisticos1);
           printf("Carta 2 - %s: %d Pontos turisticos\n", cidade2, numero_de_pontos_turisticos2);
           printf("resultado: Carta 1 (%s) venceu!\n", cidade1);
          } else if (PIB1 < PIB2){
          printf("Atributo:Pontos turisticos\n");
          printf("Carta 1 - %s: %d Pontos turisticos\n", cidade1, numero_de_pontos_turisticos1);
          printf("Carta 2 - %s: %d Pontos turisticos\n", cidade2, numero_de_pontos_turisticos2);
          printf("resultado: Carta 2 (%s) venceu!\n", cidade2);
          } else {
          printf("Atributo: Pontos turisticos\n");
          printf("Carta 1 - %s: %d Pontos turisticos\n", cidade1, numero_de_pontos_turisticos1);
          printf("Carta 2 - %s: %d Pontos turisticos\n", cidade2, numero_de_pontos_turisticos2);  
          printf("resulta : empate!\n");
          } break;
       case 5:
       if (densidade_populacional_carta1 < densidade_populacional_carta2){
          printf("Atributo: Densidade populacional\n");
          printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_populacional_carta1);
          printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_populacional_carta2);
          printf("resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (densidade_populacional_carta1 > densidade_populacional_carta2){
         printf("Atributo: Densidade populacional\n");
         printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_populacional_carta1);
         printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_populacional_carta2);
         printf("resultado: Carta 2 (%s) venceu!\n", cidade2);
         } else {
         printf("Atributo: Densidade populacional\n");
         printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_populacional_carta1);
         printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_populacional_carta2);  
         printf("resulta : empate!\n");
         } break;    
       case 6:
       if (PIB_per_capta_carta1 > PIB_per_capta_carta2){
            printf("Atributo: PIB per capta\n");
            printf("Carta 1 - %s: %.2f reais\n", cidade1, PIB_per_capta_carta1);
            printf("Carta 2 - %s: %.2f reais\n", cidade2, PIB_per_capta_carta2);
            printf("resultado: Carta 1 (%s) venceu!\n", cidade1);
           } else if (PIB_per_capta_carta1 < PIB_per_capta_carta2){
           printf("Atributo: PIB per capta\n");
           printf("Carta 1 - %s: %.2f reais\n", cidade1, PIB_per_capta_carta1);
           printf("Carta 2 - %s: %.2f reais\n", cidade2, PIB_per_capta_carta2);
           printf("resultado: Carta 2 (%s) venceu!\n", cidade2);
           } else {
           printf("Atributo: PIB per capta\n");
           printf("Carta 1 - %s: %.2f reais\n", cidade1, PIB_per_capta_carta1);
           printf("Carta 2 - %s: %.2f reais\n", cidade2, PIB_per_capta_carta2);  
           printf("resulta : empate!\n");
          }         
          break; 
          printf("\n");
          printf("\n");
          if (opcao > opcao2) {
            printf ("*****%c VENCEU!!*****\n",opcao);
            } else {("*****%c VENCEU!!*****\n",opcao2); }
            printf("obrigado por jogar");
            break;}

//finalização
 case 02 : printf("jogo finalizado, obrigado por jogar.");
   break;
  default: printf("opção invalida, favor reiniciar o sistema\n");
   break;
  }



  return 0;
}
#include <stdio.h>
 
int main() {
   char estado1[50], estado2[50], codigo1[10], codigo2[10], cidade1[50], cidade2[50];
   int populacao1, populacao2, pontos1, pontos2;
   float area1, area2, pib1, pib2;


printf("Vamos criar 2 cartas para um jogo Super Trunfo? \n\n"); //Interação com o usuário

printf("Digite o nome do estado da primeira carta: * Sem acentos ou espaços\n");
scanf("%s", &estado1); 

printf("Digite o nome de uma cidade do estado que escolheu: * Sem acentos ou espaços \n");
scanf("%s", &cidade1); 

printf("Crie um código para esta carta, utilizando a letra escolhida para o estado mais um número com 2 dígitos, de 01 a 04:\n"); 
scanf("%s", &codigo1); 

printf("Qual o número de habitantes dessa cidade? \n");
scanf("%d", &populacao1); 

printf("Qual é a área total da cidade? * Com até 2 casas decimais \n");
scanf("%f", &area1);

printf("Qual o PIB dessa cidade? * Com até 2 casas decimais \n");
scanf("%f", &pib1);

printf("Essa cidade possui quantos pontos turísticos? \n");
scanf("%d", &pontos1);

printf("\nAgora vamos criar a segunda carta: \n");

printf("\n\nDigite o nome do estado da segunda carta: * Sem acentos ou espaços \n");
scanf("%s", &estado2);

printf("Digite o nome de uma cidade do estado que escolheu: * Sem acentos ou espaços \n");
scanf("%s", &cidade2); 

printf("Crie um código para esta carta, utilizando a letra escolhida para o estado mais um número com 2 dígitos, de 01 a 04:\n"); 
scanf("%s", &codigo2); 

printf("Qual o número de habitantes dessa cidade? \n");
scanf("%d", &populacao2); 

printf("Qual é a área total da cidade? * Com até 2 casas decimais \n");
scanf("%f", &area2);

printf("Qual o PIB dessa cidade? * Com até 2 casas decimais \n");
scanf("%f", &pib2);

printf("Essa cidade possui quantos pontos turísticos? \n");
scanf("%d", &pontos2);



printf("\n Carta 1:\n");
printf("Estado: %s \n", estado1);
printf("Código: %s \n", codigo1);
printf("Cidade: %s \n", cidade1);
printf("População: %d", populacao1); printf(" habitantes.\n");
printf("Área: %.2f" , area1); printf(" km². \n");
printf("PIB: %.2f" , pib1); printf(" bilhões de reais. \n");
printf("Número de Pontos Turísticos: %d \n\n" , pontos1);


printf("\n Carta 2:\n");
printf("Estado: %s\n", estado2);
printf("Código: %s \n", codigo2);
printf("Cidade: %s \n", cidade2);
printf("População: %d", populacao2); printf(" habitantes.\n");
printf("Área: %.2f" , area2); printf(" km². \n");
printf("PIB: %.2f" , pib2); printf(" bilhões de reais. \n");
printf("Número de Pontos Turísticos: %d \n" , pontos2);









return 0;



}
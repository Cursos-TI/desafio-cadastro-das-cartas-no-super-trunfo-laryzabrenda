#include <stdio.h>

void bispo(int b)
{
    b = 1;
        while (b <= 5){ 
    b++;
    }
    b = 1;
        while (b <= 5){
        printf("Cima, "); printf("Direita\n");
    b++;
    } 
}   

void rainha(int casas){
    if (casas > 0){
    printf("Esquerda\n");
    rainha(casas - 1);
    }
   
}

void torre(int casas){
    if (casas > 0){
    printf("Direita\n");
    torre(casas - 1);
    }
}

void cavalo(int c){
    c = 1;
        while (c <= 1){ 
    c++;
    }
    c = 1;
        while (c <= 1){
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
    c++;
    }  
}  


int main(){


printf("Desafio Movimentação de peças de xadrez\n\n"); 

printf("Aluna: Laryza Brenda Oliveira de Sá Vieira. \n"); 
printf("Matrícula: 202508030985. \n\n");

printf("\n");
printf("Movimentação do Bispo, 5 casas na diagonal.\n");
printf("\n");
bispo(5); 
printf("\n");

printf("\nMovimentação da Rainha, 8 casas para a esquerda.\n");
printf("\n");
rainha(8);
printf("\n");


printf("\nMovimentação da Torre, 5 casas a direita.\n");
printf("\n");
torre(5);
printf("\n");


printf("Movimentação do Cavalo, 2 casas para cima e uma casa para a direita.\n");
printf("\n");
cavalo(1);






return 0;
}
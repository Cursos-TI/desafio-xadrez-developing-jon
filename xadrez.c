#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
int b = 1, t= 1, r= 1;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
printf("\nAbaixo está o movimento do Bispo nesta jogada: \n");

do{
    printf("Bispo moveu-se uma casa para cima e direita.\n");
    b++;
} while (b <= 5);

// Implementação de Movimentação da Torre
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

printf("\nAbaixo está o movimento da Torre nesta jogada: \n");

for (t = 1; t <= 5; t++){
    printf("Torre moveu-se uma casa para direita.\n");
}

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

printf("\nAbaixo estáo movimento da Rainha nesta jogada: \n");
while (r <= 8){
    printf("A Rainha moveu-se uma casa para a esquerda.\n");
    r++;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int escolhaMovC;
    int c1 = 1;

printf("\nSua próxima jogada séra com o Cavalo. O mesmo movimenta-se em L. Você deseja: \n");
printf("1. Cima e esquerda\n");
printf("2. Cima e direita\n");
printf("3. Baixo e esquerda\n");
printf("4. Baixo e direita\n");
printf("Faça sua jogada: ");
scanf("%d", &escolhaMovC);

switch (escolhaMovC){
case 1:
    printf("\nO Cavalo movimenta-se:\n");
    while (c1 < 2){
            for (int c2 = 1; c2 <= 2; c2++){
            printf("Uma casa para cima.\n");
            } 
        printf("Uma casa para esquerda.\n");  
        c1++;
    }        
break;

case 2: 
    printf("\nO Cavalo movimenta-se: \n");
    while (c1 < 2){
        for (int c2 = 1; c2 <= 2; c2++){
            printf("Uma casa para cima.\n");
        }
        printf("Uma casa para a direita.\n");
        c1++;
    }
break;

case 3: 
    printf("\nO Cavalo movimenta-se: \n");
    while (c1 < 2){
        for (int c2 = 1; c2 <= 2; c2++){
            printf("Uma casa para baixo.\n");
        }
        
        printf("Uma casa para a esquerda.\n");
        c1++;
    }
break;

case 4: 
    printf("\nO Cavalo movimenta-se: \n");
    while (c1 < 2){
        for (int c2 = 1; c2 <= 2; c2++){
            printf("Uma casa para baixo.\n");
        }
        
        printf("Uma casa para a direita.\n");
        c1++;
    }
break;  
    
default: 
    printf("\nOpção de movimentação inválida\n");
break;     
    }



    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

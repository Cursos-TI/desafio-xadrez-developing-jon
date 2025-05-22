#include <stdio.h>

// Implementação de Movimentação da do Bispo com recursividade e loops aninhados
void moviBispo(int casas){
    if (casas > 0) {
            for (int bc = 1; bc <= 5; bc++){
            printf("\nO Bispo moveu-se uma casa para cima.\n");
            printf("\nO Bispo moveu-se uma casa para a direita.\n");
            }
        moviBispo(casas - 1);    
} 
}

// Implementação de Movimentação da Torre --
void moviTorre(int casas){
    if(casas > 0){
        printf("\n A Torre moveu-se uma casa para a direita.\n");
        moviTorre(casas - 1);
    }
}
// Implementação de Movimentação da Rainha --
void moviRainha(int casas){
    if (casas > 0){
        printf("\nA Rainha moveu-se uma casa para a esquerda.\n");
        moviRainha(casas - 1);
    }
    
}

int main() {

    int escolhaMovC;
    int c1 = 1;

    //CHAMANDO A FUNÇÃO DE MOVIMENTAÇÃO DAS PEÇAS
    moviBispo(1);
    printf("\n-----------------------------------------\n");//SEPARAÇÃO VISUAL DE UMA PEÇA PARA OUTRA
    moviTorre(5);
    printf("\n-----------------------------------------\n");
    moviRainha(8);
    printf("\n-----------------------------------------\n");

//MENU INTERATIVO PARA O USUÁRIO ESCOLHER QUAL MOVIMENTO FARÁ COM O CAVALO
printf("\nSua próxima jogada séra com o Cavalo. O mesmo movimenta-se em L. Você deseja: \n");
printf("1. Cima e esquerda\n");
printf("2. Cima e direita\n");
printf("3. Baixo e esquerda\n");
printf("4. Baixo e direita\n");
printf("Faça sua jogada: ");
scanf("%d", &escolhaMovC);

//IMPLEMENTAÇÃO DE MOVIMENTAÇÃO DO CAVALO
switch (escolhaMovC){
case 1:
    printf("\nO Cavalo movimenta-se:\n");

        for (int movV = 0, movH = 0; movV < 2; movV++){
        printf("Uma casa para cima.\n");
            if (movV == 1 && movH == 0){
                printf("Uma casa para a esquerda.\n");
                movH++;
            }
        }        
break;

case 2: 
    printf("\nO Cavalo movimenta-se: \n");

        for (int movV = 0, movH = 0; movV < 2; movV++){
        printf("Uma casa para cima.\n");
            if (movV == 1 && movH == 0){
                printf("Uma casa para a direita.\n");
                movH++;
            }
        } 
break;

case 3: 
    printf("\nO Cavalo movimenta-se: \n");

        for (int movV = 0, movH = 0; movV < 2; movV++){
        printf("Uma casa para baixo.\n");
            if (movV == 1 && movH == 0){
                printf("Uma casa para a esquerda.\n");
                movH++;
            }
        } 
break;

case 4: 
    printf("\nO Cavalo movimenta-se: \n");

        for (int movV = 0, movH = 0; movV < 2; movV++){
        printf("Uma casa para baixo.\n");
            if (movV == 1 && movH == 0){
                printf("Uma casa para a direita.\n");
                movH++;
            }
        } 
break;  
    
default: 
    printf("\nOpção de movimentação inválida\n");
break;     
    }

    return 0;
}

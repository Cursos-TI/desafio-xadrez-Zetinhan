#include <stdio.h>
#define bispolim 5
#define torrelim 5
#define rainhalim 8

void Bispo()
{
    int bispomov;
       //pedindo a quantidade de movimentos do usuário
    printf("\n Digite quantos espaços você quer mover o bispo\n", bispolim);
    scanf("%d", &bispomov);
    if (bispomov < 1 || bispomov > bispolim)
    {
        printf("\nValor Inválido! o bispo pode se mover apenas entre 1 e %d casas \n", bispolim);
    }
    printf("\n O Bispo se moveu em %d casas para a diagonal superior direita\n", bispomov);

}

void Torre()
{
    int torremov;
       //pedindo a quantidade de movimentos do usuário
    printf("\n Digite quantos espaços você quer mover a torre\n", torrelim);
    scanf("%d", &torremov);
    if (torremov < 1 || torremov > torrelim)
    {
        printf("\nValor Inválido! a torre pode se mover apenas entre 1 e %d casas \n", torrelim);
    }
    printf("\n A torre se moveu em %d casas para a direita\n", torremov);
}
void Rainha()
{
    int rainhamov;
       //pedindo a quantidade de movimentos do usuário
    printf("\n Digite quantos espaços você quer mover a rainha\n", rainhalim);
    scanf("%d", &rainhamov);
    if (rainhamov < 1 || rainhamov > rainhalim)
    {
        printf("\nValor Inválido! a rainha pode se mover apenas entre 1 e %d casas \n", rainhalim);
    }
    printf("\n A Rainha se movimentou para %d casas para a esquerda", rainhamov);
} 

void Sair()
{
    printf("Saindo do Programa...");
}
int main()
{
    int prossiga;

    do
    {

        printf("\n Movimentação de Xadrez com Menu\n");
        printf("1. Bispo \n");
        printf("2. Torre\n");
        printf("3. Rainha\n");
        printf("0. Sair\n");

        scanf("%d", &prossiga);

        switch (prossiga)
        {
        case 1:
            Bispo();
            break;
        case 2:
            Torre();
            break;
        case 3:
            Rainha();
            break;
        case 0:
            Sair();
            break;
        default:
            printf("Digite uma opção válida:\n");
        }
    } while (prossiga);
}
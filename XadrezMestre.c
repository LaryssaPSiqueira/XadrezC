#include <stdio.h>

void moverTorre(int casas)
{
    if (casas == 0)
    {
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas)
{
    if (casas == 0)
    {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispo(int casas)
{
    if (casas == 0)
    {
        return;
    }

    int vertical, horizontal;

    for (vertical = 1; vertical <= 1; vertical++)
    {
        for (horizontal = 1; horizontal <= 1; horizontal++)
        {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

void moverCavalo(int casasCima, int casasDireita)
{

    int i, j;

    for (i = 1; i <= casasCima; i++)
    {

        for (j = 1; j <= casasDireita + 1; j++)
        {

            if (j == 2 && i <= 1)
            {
                continue;
            }

            if (i == 2 && j == 2)
            {
                printf("Direita\n");
                break;
            }

            printf("Cima\n");
        }
    }
}

int main()
{

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int cavaloCima = 2;
    int cavaloDireita = 1;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo(cavaloCima, cavaloDireita);

    return 0;
}

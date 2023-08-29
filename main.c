#include <stdio.h>

int main()
{
    int i, aux, j; // Declaração das variaveis!!
    int lista[5];

    for (int l = 0; l < 5; l++)
    { // Criação do vetor!!
        printf("Digite o %d elemento:", l + 1);
        scanf("%d", &lista[l]);
    }
    printf("Lista nao ordenada:");
    for (int l = 0; l < 5; l++)
    {
        printf("%d ", lista[l]);
    }

    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (lista[j] > lista[j + 1])
            {
                aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }
    printf("\n");
    printf("Lista ordenada:");
    for (int p = 0; p < 5; p++)
    {
        printf("%d ", lista[p]);
    }
    return 0;
}
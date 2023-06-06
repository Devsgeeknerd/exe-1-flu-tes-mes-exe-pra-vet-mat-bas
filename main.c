#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um número para a posição %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Posição %d, número armazenado: %d\n", i + 1, vetor[i]);
    }
    return 0;
}

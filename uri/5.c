#include <stdio.h>
#include <stdlib.h>

comparador(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
main()
{
    int n[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &n[i]);
    }

    qsort(n, 4, sizeof(int), comparador);

    printf("Ordem crescente: ");

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", n[i]);
    }
    printf("Ordem decrescente: ");

    for (int i = 3; i >= 0; i--)
    {
        printf("%d ", n[i]);
    }
}
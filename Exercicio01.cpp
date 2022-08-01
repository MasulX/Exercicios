#include <stdio.h>

int maior_valor(int v1, int v2, int v3, int v4) {
    int maiorValor;
    if (v1 > v2)
    {
        maiorValor = v1;
    }
    else
    {
        maiorValor = v2;
    }

    if (maiorValor < v3)
    {
        maiorValor = v3;
    }

    if (maiorValor < v4)
    {
        maiorValor = v4;
    }
    return maiorValor;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int valor = maior_valor(a, b, c, d);
    printf("%d", valor);
    return 0;
}
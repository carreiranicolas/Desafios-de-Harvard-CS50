// Nicolas Ramos Carreira

// 202415986

// CC1Mb

// nicolascarreira2005@gmail.com

#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

bool primos(int n);

int main(void)
{
    int menor;
    do
    {
        menor = get_int("Menor número: ");
    }
    while (menor < 1);

    int maior;
    do
    {
        maior = get_int("Maior número: ");
    }
    while (maior <= menor || maior > 100);

    for (int j = menor; j <= maior; j++)
    {
        if (primos(j))
        {
            printf("%d\n", j);
        }
    }

    return 0;
}

bool primos(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

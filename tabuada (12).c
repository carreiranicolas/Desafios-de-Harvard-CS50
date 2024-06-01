// Nicolas Ramos Carreira

// 202415986

// CC1Mb

// nicolascarreira2005@gmail.com

#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int numero = get_int("Você quer a tabuada de qual número? ");
    int c = 0;

    while (numero < 1 || numero >= 100)
    {
        numero = get_int("Você quer a tabuada de qual número? ");
    }

    if (numero >= 1 && numero <= 99)
    {

        while (c <= 10)
        {
            printf("%d x %d = %d\n", numero, c, numero * c);
            c = c + 1;
        }
    }

    return 0;
}

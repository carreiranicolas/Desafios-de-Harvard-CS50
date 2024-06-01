// Nicolas Ramos Carreira

// nicolascarreira2005@gmail.com

#include <cs50.h>
#include <stdio.h>

double moedas50(int troco);
double moedas25(double moedas_50, int res);
double moedas10(double moedas_25, int res_2);
double moedas05(double moedas_10, int res_3);
double moedas01(double moedas_05, int res_4);
int soma(double moedas_50, double moedas_25, double moedas_10, double moedas_05, double moedas_01);

int main(void)

{

    int troco = get_int("Informe o troco devido (em centavos): ");

    while (troco <= 0 || troco > 99)

    {
        troco = get_int("Informe o troco devido (em centavos): ");
    }

    int res = troco % 50;
    int res_2 = res % 25;
    int res_3 = res_2 % 10;
    int res_4 = res_3 % 05;

    double moedas_50 = moedas50(troco);
    double moedas_25 = moedas25(moedas_50, res);
    double moedas_10 = moedas10(moedas_25, res_2);
    double moedas_05 = moedas05(moedas_10, res_3);
    double moedas_01 = moedas01(moedas_05, res_4);

    int soma_final = soma(moedas_50, moedas_25, moedas_10, moedas_05, moedas_01);

    printf("%.0i\n", soma_final);

    return 0;
}























double moedas50(int troco)
{

    double moedas_50 = troco / 50;
    int res = troco % 50;
     return moedas_50;
}

double moedas25(double moedas_50, int res)
{
    double moedas_25 = res / 25;
    int res_2 = res % 25;
    return moedas_25;
}

double moedas10(double moedas_25, int res_2)
{
    double moedas_10 = res_2 / 10;
    int res_3 = res_2 % 10;
    return moedas_10;
}

double moedas05(double moedas_10, int res_3)
{
    double moedas_05 = res_3 / 05;
    int res_4 = res_3 % 05;
    return moedas_05;
}

double moedas01(double moedas_05, int res_4)
{
    double moedas_01 = res_4 / 01;
    return moedas_01;
}

int soma(double moedas_50, double moedas_25, double moedas_10, double moedas_05, double moedas_01)
{
    int soma_final = moedas_50 + moedas_25 + moedas_10 + moedas_05 + moedas_01;
    return soma_final;
}

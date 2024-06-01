/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Nicolas Ramos Carreira
 *    Matrícula: 202415986
 *    Turma: CC1Mb
 *    Email: nicolascarreira2005@gmail.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

// Comece aqui seu pragrama.
#include <cs50.h>
#include <stdio.h>

// Indicação das funções para a main:

int get_troco(void);
int calcular_moedas50(int troco);
int calcular_moedas25(int troco);
int calcular_moedas10(int troco);
int calcular_moedas05(int troco);
int calcular_moedas01(int troco);

int main(void)
{
    // Pergunta para o usuário qual o valor total do troco, em centavos:

    int troco = get_int("Informe o troco devido (em centavos): ");


    // Calcula o número de moedas de 50 centavos a serem dadas ao cliente:

    int moedas50 = calcular_moedas50(troco);
    troco = troco - moedas50 * 50;

    // Calcula o número de moedas de 25 centavos a serem dadas ao cliente:
    int moedas25 = calcular_moedas25(troco);
    troco = troco - moedas25 * 25;

    // Calcula o número de moedas de 10 centavos a serem dadas ao cliente:
    int moedas10 = calcular_moedas10(troco);
    troco = troco - moedas10 * 10;

    // Calcula o número de moedas de 5 centavos a serem dadas ao cliente:
    int moedas05 = calcular_moedas05(troco);
    troco = troco - moedas05 * 5;

    // Calcula o número de moedas de 1 centavo a serem dadas ao cliente:
    int moedas01 = calcular_moedas01(troco);
    troco = troco - moedas01;

    // Quantidade total otimizada de moedas:
    int moedas = moedas50 + moedas25 + moedas10 + moedas05 + moedas01;

    // Imprime a quantidade total de moedas:
    printf("%i\n", moedas);

    // Termina o programa:
    return 0;
}




int get_troco(void)
{
    int troco = get_int("Informe o troco devido (em centavos): ");
    while (troco < 0);

    return troco;
}

int calcular_moedas50(int troco)
{
    int moedas50 = troco / 50;

    return moedas50;
}

int calcular_moedas25(int troco)
{
    int moedas25 = troco / 25;

    return moedas25;
}

int calcular_moedas10(int troco)
{
    int moedas10 = troco / 10;

    return moedas10;
}

int calcular_moedas05(int troco)
{
    int moedas05 = troco / 05;

    return moedas05;
}

int calcular_moedas01(int troco)
{
    int moedas01 = troco / 01;
    return moedas01;
}

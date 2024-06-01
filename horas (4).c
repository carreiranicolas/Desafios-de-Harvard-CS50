/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Nicolas Ramos Carreira
 *    Matrícula: 202415986
 *    Turma: CC1MB
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

// Comece aqui seu pragrama:

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

/**
 * Protótipo das funções
 */
float calcular_horas(int horas[], int semanas, char saida);

int main(void)
{
    // Pergunta quantas semanas o aluno já estudou e cria um array apropriado
    // para armazenar as horas de estudo em cada semana.
    int semanas = get_int("Quantas semanas de estudo na CS50? ");
    int horas[semanas];

    // Percorre o array preenchendo a quantidade de horas estudadas em cada
    // semana.
    for (int i = 0; i < semanas; i++)
    {
        horas[i] = get_int("Horas na semana %i: ", i);
    }

    // Pergunta o tipo de saída desejado: T para o total de horas de estudo, ou
    // M para a média de horas semanais de estudo.
    char saida;
    do
    {
        saida = toupper(get_char("Digite T para o total ou M para a média de horas por semana: "));
    }
    while (saida != 'T' && saida != 'M');

    // Imprime o resultado desejado, chamando a função calcular_horas.
    printf("%.1f horas\n", calcular_horas(horas, semanas, saida));

    // Termina o programa.
    return 0;
}

/**
 * CALCULAR_HORAS
 * A função recebe um array de inteiros onde cada posição no array representa o
 * número de horas estudadas em uma semana, a quantidade de semanas estudadas
 * (que deve corresponder à quantidade de posições no array) e um código em char
 * que representa o tipo de saída esperado (T para horas totais de estudo e M
 * para média de horas de estudo por semana). A função retorna a quantidade
 * total de horas de estudo OU a quantidade média de horas de estudo por semana.
 * Parâmetros:
 *
 *    (int) horas[]: um array de números inteiros onde cada posição no array
 *                   representa a quantidade de horas estudada naquela semana.
 *    (int) semanas: um número inteiro que indica quantas semanas de estudo
 *                   serão informadas (corresponde ao tamanho do array horas[]).
 *    (char) saida:  uma char que obrigatoriamente deve ser 'T' ou 'M', e que
 *                   indica o tipo de saída esperado da função: o 'T'otal de
 *                   horas estudadas, ou 'M'édia de horas de estudo por semana.
 * Retorno:
 *    (float): um float que representa o total de horas de estudo (considerando
 *             todas as horas em todas as semanas, ou a média de horas de estudo
 *             por semana.
 */
float calcular_horas(int horas[], int semanas, char saida)
{

    int T = 0;

    for (int i = 0; i < semanas; i++)

    {

         T += horas[i];


    }

   float M = T / (float) semanas;

    if (saida == 'T')
    {

        return T;
    }

    else if (saida == 'M')

    {

        return M;
    }

    return 0;

}

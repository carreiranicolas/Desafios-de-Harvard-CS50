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

// Comece aqui seu programa
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>


/**
 * PONTOS[]
 * Array que armazena o número de pontos de cada letro do alfabeto,
 * em ordem (ou // seja: A = 1; B = 3; C = 3; D = 2; etc.)
 */
int PONTOS[] = {1, 3, 3,  2, 1, 4, 2, 4, 1, 8, 5, 1,  3,
                1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};





/**
 * Protótipos das funções
 */
int calcular_pontuacao(string palavra);


/**
 * MAIN
 */
int main(void)
{
    // Solicita uma palavra de cada jogador:
    string palavra1 = get_string("Jogador 1: ");
    string palavra2 = get_string("Jogador 2: ");

    // Calcula a pontuação de cada palavra:
    int pontuacao1 = calcular_pontuacao(palavra1);
    int pontuacao2 = calcular_pontuacao(palavra2);

    // TODO: Imprimir o resultado do jogo

    if (pontuacao1 > pontuacao2)
    {

        printf("%s\n", "O jogador 1 ganhou!");


    }

    else if (pontuacao1 < pontuacao2)
    {

        printf("%s\n", "O jogador 2 ganhou!");

    }

    else if (pontuacao1 == pontuacao2)
    {

        printf("%s\n", "Empate!");

    }



    // Termina o programa
    return 0;
}


/**
 * CALCULAR_PONTUACAO
 * Esta função recebe uma palavra (string) e, utilizando o array global de
 * pontos para cada letra do alfabeto, calcula e retorna a pontuação total da
 * palavra (calcula quanto "vale" a palavra).
 *
 * Parâmetros:
 *    (string) palavra: string com a palavra informada pelo jogador
 *
 * Retorno:
 *    (int) pontuação da palavra
 *
 * Obs.: é obrigatório utilizar o array PONTOS[] no cálculo da pontuação!
 */
int calcular_pontuacao(string palavra)
{
    int pontuacao;
    pontuacao = 0;

    for(int i = 0; i < strlen(palavra); i++)
    {

        if (isupper(palavra[i]))

        {

            pontuacao += PONTOS [palavra[i] - 'A'];

        }

        if (islower (palavra[i]))

        {

            pontuacao += PONTOS [palavra[i] - 'a'];

        }


    }



    // TODO: Calcular e retornar a pontuação da palavra
    return pontuacao;
}

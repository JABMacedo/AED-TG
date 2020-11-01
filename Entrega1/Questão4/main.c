/*
Autores: José(12939) , Augusto(21136)
Data: 25/10/2020
Função: Desconto em vacinas em relação ao tamanho e genero do gato.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Variaveis
    int genero, comprimento;

    //Titulo
    puts("\n||Calculo do desconto em funcao do genero e comprimento do gato.||\n");

    //Pedir dados
    puts("Insira o comprimento do gato:");
    scanf("%d", &comprimento);
    puts("Insira o genero do gato (M = 1/F = 0):");
    scanf("%d", &genero);

    //Condicao
    if (comprimento >= 6 & comprimento < 10 & genero != 1)
    {
        printf("\nO desconto e igual a 10%%.");
    }
    else if (comprimento >= 10 & comprimento < 15 & genero != 0)
    {
        printf("\nO desconto e igual a 9%%.");
    }
    else if (comprimento >= 15 & comprimento < 18 & genero != 1)
    {
        printf("\nO desconto e igual a 8%%.");
    }
    else if (comprimento >= 18 & comprimento < 25)
    {
        printf("\nO desconto e igual a 7%%.");
    }
    else
    {
        printf("\nO desconto e igual a 5%%.");
    }

    getchar();
    getchar();
    return 0;
}

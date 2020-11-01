/*
Autores: José(12939) , Augusto(21136)
Data: 25/10/2020
Função: Verica consoante a média de 4 notas se o aluno fica ou não aprovado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    //Variaveis
    float port , mat, ing, geo , media;

    //Titulo 
    puts("\n||Verificacao da aprovacao do aluno.||\n");

    //Pedir dados
    puts("Insira a nota de Portugues:");
    scanf("%f", &port); 
    puts("Insira a nota de Matematica:");
    scanf("%f", &mat);
    puts("Insira a nota de Ingles:");
    scanf("%f", &ing);
    puts("Insira a nota de Geografia:");
    scanf("%f", &geo);

    //Calcular a media

    media = (port + mat + ing + geo) /4.0f;

    //Condição

    if (media >= 9.5)
    {
        printf("Aluno aprovado com media de %.1f\n" , media);
    }
    else
    {
        printf("Aluno reprovado com media de %.1f\n" , media);
    }

    getchar();
    getchar();

    return 0;
}

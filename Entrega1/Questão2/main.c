/*
Autores: José(12939) , Augusto(21136)
Data: 25/10/2020
Função: Confirma se um ano introduzido pelo o utilizador é bissexto ou não.
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc , char *argv[] )
{
//Variaveis
int ano;

//Titulo
puts("\n||Confimacao se um ano e ou nao bissexto.||\n");

//Pedir dados
puts("Insira o ano:");
scanf("%d" , &ano);

//Condição
if (ano % 4 == 0 & ano % 100 != 0  )
    {
        printf ("Ano bissexto.");
    }
   else if (ano % 4 == 0 & ano % 100 == 0 & ano % 400 == 0)
   {
        printf ("Ano bissexto.");
   }
   else
   {
       printf("Ano nao bissexto.");
   }
   

getchar();

return 0;
    
}
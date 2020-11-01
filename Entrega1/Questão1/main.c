/*
Autores: José , Augusto
Data: 24/10/2020
Função: Calcular a media de entrega de 5 paquetes e soma dos paquetes que entregaram mais de 4 refeições
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Variaveis
    int uber1, uber2, uber3, uber4, uber5, soma;
    float media;

    //Titulo
    puts("\n||Calcular a media de refeicoes entregues de 5 paquetes e soma dos paquetes que entregaram mais de 4 refeições.||\n");
    
    //Pedir valores
    printf("1o. valor: ");
    scanf("%d", &uber1);
    printf("2o. valor: ");
    scanf("%d", &uber2);
    printf("3o. valor: ");
    scanf("%d", &uber3);
    printf("4o. valor: ");
    scanf("%d", &uber4);
    printf("5o. valor: ");
    scanf("%d", &uber5);

    //Calculo da média
    media = (uber1 + uber2 + uber3 + uber4 + uber5) / 5.0F;

    //Condições para a soma
    if (uber1 <= 4)
    {
        uber1 = 0;
    }else
    {
        uber1 = uber1;
    }
    if (uber2 <= 4)
    {
        uber2 = 0;
    }else
    {
        uber2 = uber2;
    }
    if (uber3 <= 4)
    {
        uber3 = 0;
    }else
    {
        uber3 = uber3;
    }
    if (uber4 <= 4)
    {
        uber4 = 0;
    }else
    {
        uber4 = uber4;
    }
    if (uber5 <= 4)
    {
        uber5 = 0;
    }else
    {
        uber5 = uber5;
    }
    
    soma = uber1 + uber2 + uber3 + uber4 + uber5;

    printf("A soma e: %d", soma);
    printf("\nA media e: %.2f", media);

    getchar();
    return 0;
}

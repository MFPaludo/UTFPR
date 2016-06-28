#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

double main()

{
    int n, x;

    x = 1 ;

    do
    {
        printf("Digite o n%cmero do exerc%ccio a ser exibido(de 1 a %d), para encerrar, tecle 0:\n" , 163, 161, x) ; //Caracteres ASCII: ú í
        scanf ("%d" ,&n) ;

            if (n < 0 || n > x)
            {
                printf ("%cOp%c%co inv%clida. Digite um n%cmero de 1 a %d, para encerrar, digite 0.\n" , 7, 135, 198, 160, 163, x) ; //Caracteres ASCII: "bip" ç ã á ú
            }

        switch (n)
        {
        case 1:
            {
                printf ("1. Fa%ca um algoritmo que leia 10 valores inteiros armazenando-os em um vetor e depois calcule a soma dos valores lidos e apresente o resultado na tela.\n\n" , 135) ; //Caracteres ASCII: ç
                    int contagem1 = 0, vetor1[10], soma1 = 0 ;

                    for (contagem1 = 0 ; contagem1 < 10 ; contagem1 ++)
                    {
                        printf ("Digite um n%cmero natural: \n" , 163) ; //Caracteres ASCII: ú
                        scanf ("%d" , &vetor1[contagem1]) ;
                        soma1 += vetor1[contagem1] ;
                    }

                    printf ("%d\n" , soma1) ;


                printf (" \n") ;
                printf ("Para limpar a tela pressione qualquer tecla") ;
                getch () ;
                system ("cls") ;
                break ;
            }

        }
    }
    while (n != 0) ;

    return 0;
}

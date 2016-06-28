#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <vector>
#include <cstdio>

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

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

double main()

{
    int n ;

    do
    {
        printf("Digite o n%cmero do exerc%ccio a ser exibido, para encerrar, tecle 0:\n" ,163,161) ; //Caracteres ASCII: ú í
        scanf("%d" ,&n) ;

            if (n < 0 || n >= 1)
            {
                printf ("%cOp%c%co inv%clida. Digite um n%cmero de 0 a 0\n" ,7,135,198,160,163) ; //Caracteres ASCII: "bip" ç ã á ú
            }

        switch (n)
        {
        case 1:
            {
                printf(" \n") ;

                printf("Para limpar a tela pressione qualquer tecla") ;
                getch() ;
                system("cls") ;
                break ;
            }
        }
    }
    while (n != 0) ;

    return 0 ;
}

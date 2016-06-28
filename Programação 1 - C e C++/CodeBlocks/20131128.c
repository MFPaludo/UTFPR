#include <stdio.h>
#include <math.h>

double main()

{

    printf("1. Desenvolva um programa que leia dois valores a e b, tal que (a <= b) e mostre os seguintes resultados:\na. Todos os n%cmeros em [a,b].\nb. Todos os n%cmeros %cmpares em [a,b].\nc. Todos os n%cmeros %cmpares em [a,b] m%cltiplos de 3.\n\n" ,163,163,161,163,161,163) ; //Exercício 1 - Caracteres ASCII: ú ú í ú í ú
        printf("Digite dois valores inteiros:\n") ;
        int a,b,v1,v2,v3 ;
        scanf("%d %d" ,&a,&b) ;

        if (a <= b)
        {
            v1 = a;
            v2 = b;
            v3 = v1;

            printf("\nValores inteiros entre %d e %d\n" ,v1,v2) ;
            while (v1 <= v2)
            {
                printf("%d; ",v1) ;
                v1 += 1 ;
            }
            v1 = v3;
            printf("\n") ;
            printf("\nValores %cmpares entre %d e %d\n" ,161,v1,v2) ; //Caracteres ASCII: í
            while (v1 <= v2)
            {
                if (v1 % 2 != 0)
                {
                    printf("%d; " ,v1) ;
                }
                v1 += 1 ;

            }

            v1 = v3 ;
            printf("\n") ;
            printf("\nValores %cmpares m%cltiplos de 3 entre %d e %d\n" ,161,163,v1,v2) ; //Caracteres ASCII: í ú
            while (v1 <= v2)
            {
                if ((v1 % 2 != 0)&&(v1 % 3 == 0))
                {
                    printf("%d; " ,v1) ;
                }
                v1 += 1 ;

            }

        }


return 0 ;

}

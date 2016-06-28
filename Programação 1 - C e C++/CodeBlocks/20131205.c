#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

double main()

{
    int n, x ;

    x = 11 ;

    do
    {
        printf ("Digite o n%cmero do exerc%cicio a ser exibido, para encerrar digite 0. Ap%cs o comando pressione enter:\n" , 163, 161, 162) ; //Caracteres ASCII: ú í ó
        scanf ("%d" , &n) ;

             switch (n)
            {

                case 1:
                    {
                        printf ("\n1) Escreva um algoritmo em PORTUGOL que imprima todos os n%cmeros inteiros de 0 a 50.\n\n" , 163) ; //Exercício 1

                            int v1 ;
                            for(v1 = 0 ; v1 <= 50 ; v1 += 1)
                            {
                                printf("%d\n" , v1) ;
                            }

                    break;
                    }

                case 2:
                    {
                        printf ("\n2) Escreva um algoritmo em PORTUGOL que imprima todos os n%cmeros inteiros do intervalo fechado de 1 a 100.\n\n" , 163) ; //Exercício 2 - Caracteres ASCII: ú

                            int v2 ;
                            for (v2 = 1 ; v2 <= 100 ; v2 += 1)
                            {
                                printf ("%d\n" , v2) ;
                            }

                    break;
                    }

                case 3:
                    {
                        printf ("\n3) Escreva um algoritmo em PORTUGOL que imprima todos os n%cmeros inteiros de 100 a 1 (em ordem decrescente).\n\n" , 163) ; //Exercício 3 - Caracteres ASCII: ú

                            int v3 ;
                            for (v3 = 100 ; v3 >= 1 ; v3 -= 1)
                            {
                                printf("%d\n" , v3) ;
                            }

                    break;
                    }

                case 4:
                    {
                        printf ("\n4) Escreva um algoritmo em PORTUGOL que imprima todos os n%cmeros inteiros de 100 a 200.\n\n" , 163) ; //Exercício 4 - Caracteres ASCII: ú

                            int v4 ;
                            for (v4 = 100 ; v4 <= 200 ; v4 += 1)
                            {
                                printf ("%d\n" , v4) ;
                            }

                    break;
                    }

                case 5:
                    {
                        printf ("\n5) Escreva um algoritmo em PORTUGOL que imprima todos os n%cmeros inteiros de 200 a 100 (em ordem decrescente).\n\n" , 163) ; //Exercício 5 - Caracteres ASCII: ú

                            int v5 ;
                            for (v5 = 200 ; v5 >= 100 ; v5 -= 1)
                            {
                                printf ("%d\n" , v5) ;
                            }

                    break;
                    }

                case 6:
                    {
                        printf ("\n6) Escreva um algoritmo em PORTUGOL que imprima todos os n%cmeros m%cltiplos de 5, no intervalo fechado de 1 a 500.\n\n" , 163, 163) ; //Exercício 6 - Caracteres ASCII: ú ú

                            int v6 ;
                            for (v6 = 1 ; v6 <= 500 ; v6 += 1)
                            {
                                if (v6 % 5 == 0)
                                {
                                    printf ("%d\n" , v6) ;
                                }
                            }

                    break;
                    }

                case 7:
                    {
                        printf ("\n 7) Escreva um algoritmo em PORTUGOL que imprima todos os n%cmeros pares do intervalo fechado de 1 a 100.\n\n" ,163) ; //Exercício 7 - Caracteres ASCII: ú

                            int v7 ;
                            for (v7 = 1 ; v7 <= 100 ; v7 += 1)
                            {
                                if (v7 % 2 == 0)
                                {
                                    printf ("%d\n" , v7) ;
                                }
                            }

                    break;
                    }

                case 8:
                    {
                        printf ("\n8) Escreva um algoritmo em PORTUGOL que imprima os 100 primeiros n%cmeros %cmpares.\n\n" , 163, 161) ; //Exercício 8 - Caracteres ASCII: ú í

                            int v8 ;
                            for (v8 = 0 ; v8 <= 100 ; v8 += 1)
                            {
                                if (v8 % 2 != 0)
                                {
                                    printf ("%d\n" , v8) ;
                                }
                            }

                    break;
                    }

                case 9:
                    {
                        printf ("\n9) Escreva um algoritmo em PORTUGOL que imprima o quadrado dos n%cmeros no intervalo fechado de 1 a 20.\n\n" , 163) ; //Exercício 9 - Caracteres ASCII: ú

                            double v9a,v9b ;
                            for (v9a = 1 ; v9a <= 20 ; v9a += 1)
                            {
                                v9b = pow (v9a , 2) ;
                                printf ("%f\n" , v9b) ;
                            }

                    break;
                    }

                case 10:
                    {
                        printf ("\n10) Escreva um algoritmo em PORTUGOL que imprima todos os n%cmeros %cmpares do intervalo fechado de 1 a 100.\n\n" , 163, 161) ; //Exercício 10 - Caracteres ASCII: ú í

                            int v10 ;
                            for (v10 = 1 ; v10 <= 100 ; v10 += 1)
                            {
                                if(v10 % 2 != 0)
                                {
                                    printf("%d\n" , v10) ;
                                }
                            }

                    break;
                    }

                case 11:
                    {
                        printf ("\n11)Escreva um algoritmo em PORTUGOL que receba dez n%cmeros do usu%crio e imprima a metade de cada n%cmero.\n\n" ,163, 160, 163) ; //Exercício 11 - Caracteres ASCII: ú á ú

                            printf ("Digite 10 n%cmeros pressionando ENTER ap%cs cada n%cmero:" , 163, 163) ; //Caracteres ASCII: ú ú
                            double v11a, v11b, v11c, v11d, v11e, v11f, v11g, v11h ;

                    break;
                    }

            default : printf ("\aOp%c%co inv%clida. Digite um n%cmero de 1 a %d\n",135, 198, 160, 163, x) ; // \a = "Bip", Caracteres ASCII: ç ã á ú
            break;
            }
                printf ("\nPara limpar a tela pressione qualquer tecla") ;
                getch () ;
                system ("cls") ;
    }
    while (n > 0) ;

return 0 ;

}

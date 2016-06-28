#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

double main()

{
    printf("1. Leia dois n%cmeros e imprima qual %c o maior deles.\n" , 163, 130) ; //Exercício 1 - Caracteres ASCII: ú é

        printf("Digite dois n%cmeros inteiros:\n" ,163) ; //Caracteres ASCII - ú
        int n11, n12 ;
        scanf("%d %d" , &n11, &n12) ;

        if (n11 > n12)
        {
            printf("%d %c maior que %d\n" , n11, 130, n12) ; //Caracteres ASCII: é
        }

            else if (n11 == n12)
            {
                printf("%d %c igual a %d\n" , n11, 130, n12) ; //Caracteres ASCII: é
            }

                else
                {
                    printf("%d %c maior que %d\n" , n11, 130, n12) ; //Caracteres ASCII: é
                }

    printf("\n2. Imprima os n%cmeros m%cltiplos de 7 entre 0 e 10000.\n") ; //Exercício 2 - Caracteres ASCII: ú ú

        int n2 ;

        for(n2 = 0 ; n2 <= 1000 ; n2 += 1)
        {
            if (n2 % 7 == 0)
            {
                printf("%d\n" ,n2) ;
            }
        }

    printf("\n3. Leia dez n%cmeros inteiros e imprima o maior e o menor n%cmero da lista.\n" , 163, 163) ; //Exercício 3 - ASCII: ú ú

        printf("Digite 10 n%cmeros inteiros:\n" , 163) ; //ASCII: ú
        int scan1, scan2, contagem, maior, menor ;
        scanf("%d" , &scan1) ;
            maior = scan1 ;
            menor = scan1 ;
        for ( contagem = 0 ; contagem <= 9 ; contagem += 1)
        {
            scanf("%d" , &scan2) ;

            if (scan2 > maior)
            {
                maior = scan2 ;
            }

                else if (scan2 < menor)
                {
                    menor = scan2 ;
                }
        }

        printf("\n\nMaior: %d\nMenor: %d\n" , maior, menor) ;

    printf("\n4. Leia um conjunto de 20 fichas, cada uma contendo, a altura (em cent%cmetros) e o c%cdigo do sexo de uma pessoa (c%cdigo = 1 se for masculino e 2 se for feminino), e calcule e imprima:\n- a maior e a menor altura da turma;\n- a m%cdia de altura das mulheres;\n- a m%cdia de altura da turma.\n" , 161, 162, 162, 130, 130) ; //Exercício 4 - ASCII: í ó ó é é

        int altura, sexo, cont, mai, men, mulheres, homens, somam = 0, somaf = 0, total ;
        printf("\nDigite o sexo do aluno(a) 1:\n") ;
        scanf("%d" , &sexo) ;
        printf("\nDigite a altura do aluno(a) 1 :\n") ;
        scanf("%d" , &altura) ;
        mulheres = 0 ;
        homens = 0 ;
        mai = altura ;
        men = altura ;
        total = 0 ;
        total += altura ;

            for( cont = 2 ; cont <= 20 ; cont += 1)
            {
                printf("\nDigite o sexo do aluno(a) %d:\n" , cont) ;
                scanf("%d" ,&sexo) ;
                switch (sexo)
                {
                    case 1:
                    {
                        homens += 1 ;
                        printf("Digite a altura do aluno %d:\n" , cont) ;
                        scanf("%d" , &altura) ;
                        total += altura;
                        somam += altura ;

                        if (altura < men)
                        {
                            men = altura ;
                        }
                            else if (altura > mai)
                            {
                                mai = altura ;
                            }
                    break ;
                    }

                    case 2:
                        {
                            mulheres += 1 ;
                            printf("Digite a altura da aluna %d:\n" , cont) ;
                            scanf("%d" , &altura) ;
                            total += altura ;
                            somaf += altura ;

                        if (altura < men)
                        {
                            men = altura ;
                        }
                            else if (altura > mai)
                            {
                                mai = altura ;
                            }
                        break ;
                        }
                }
            }

        printf("\nMaior altura da sala: %d\nMenor altura da sala: %d\nM%cdia da altura das mulheres: %d\nM%cdia da altura da turma: %d\n" , mai, men, 130, somaf/=mulheres, 130, total /= 20) ; //Caracteres ASCII: é é

    printf("\n5. Dado um n%cmero determine se ele %c primo ou n%co.\n" , 163, 130, 198) ; //Exercício 5 (finalmente) - Caracteres ASCII: ú é ã

        int x, y, z;
        printf("Digite um n%cmero natural para verificar se ele %c primo:\n" , 163, 130) ; //Caracteres ASCII: ú é
        scanf("%d" , &x) ;

        if (x == 1 || x == 2)
        {
            printf("%d %c primo." , x, 130) ;
        }

        for(y = 2 ; y < x ; y += 1)
        {
            z = x % y ;
            if (z == 0)
            {
                break;
            }

        }

        if (z != 0)
        {
            printf("\n\n%d %c primo." , x, 130) ; //Caracteres ASCII: é
        }
            else
            {
                printf("\n\n%d n%co %c primo." , x, 198, 130) ; //Caracteres ASCII: ã é
            }

    return 0 ;
}

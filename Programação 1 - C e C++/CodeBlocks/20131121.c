#include <stdio.h>
#include <math.h>

double main()

{
    printf("1. Fa%ca um programa que leia um n%cmero inteiro maior que zero e informe se %c par ou %cmpar. \n" ,135,163,130,161) ; //Exerc�cio 1 - Caracteres ASCII: � � � �
        printf("Digite um valor natural para verificar se ele %c %cmpar ou par: \n" ,130,161) ; // Caracteres ASCII: � �
        int v1 ;
        scanf("%d" ,&v1) ;
            if (v1 % 2 == 0)
                printf("%d %c par.\n" ,v1,130) ; // Caracteres ASCII: �
            else
                printf("%d n%co %c par.\n" ,v1,198,130) ; // Caracteres ASCII: � �

    printf("\n2. Fa%ca um programa para ler dois valores reais e verificar se s%co iguais, imprimindo como resposta uma mensagem de confirma%c%co. \n" ,135,198,135,198) ; //Exerc�cio 2 - Caracteres ASCII: � � � �
        printf("Digite dois valores reais para verificar se s%co iguais:\n" ,198) ; // Caracteres ASCII: �
        float v2,v3 ;
        scanf("%f \n%f" ,&v2,&v3) ;
        if ( v2 == v3)
            printf("%f %c igual a %f.\n" ,v2,130,v3) ; // Caracteres ASCII: �
        else
            printf("%f n%co %c igual a %f.\n" ,v2,198,130,v3) ; // Caracteres ASCII: � �

    printf("\n3. Construa um programa que leia dois valores num%cricos inteiros e efetue a adi%c%co; caso o resultado seja maior que 10, apresent%c-lo.\n" ,130,135,198,160) ; //Exerc�cio 3 - Caracteres ASCII: � � � �
        printf("Digite dois valores inteiros\n") ;
        int v4,v5,v6 ;
        scanf("%d %d" ,&v4,&v5) ;
        v6 = v4 + v5 ;
        printf("%d + %d = %d\n" ,v4,v5,v6) ;
        if (v6 > 10)
            printf("%d %c maior que 10.\n" ,v6,130) ; // Caracteres ASCII: �
        else
            printf("%d n%co %c maior que 10.\n" ,v6,198,130) ; // Caracteres ASCII: � �

    printf("\n4. Fa%ca um programa que receba um n%cmero e mostre uma mensagem caso este n%cmero seja maior que 80, menor que 25 ou igual a 40.\n" ,135,163,163) ; //Exerc�cio 4 - Caracteres ASCII: � � �
        printf("Digite um n%cmero real para verificar se ele %c maior que 80, menor que 25 ou igual a 40:\n" ,163,130) ; // Caracteres ASCII: � �
        float v7 ;
        scanf("%f" ,&v7) ;
        if (v7 == 40)
            printf("%f %c igual a 40.\n" ,v7,130) ; // Caracteres ASCII: �
        else if (v7 > 80)
            printf("%f %c maior que 80.\n" ,v7,130) ; // Caracteres ASCII: �
        else if (v7 < 25)
            printf("%f %c menor que 25.\n" ,v7,130) ; // Caracteres ASCII: �
        else
            printf("%f est%c entre 80 e 25 e %c diferente de 40\n",v7,160,130) ; // Caracteres ASCII: � �

    printf("\n5. Escreva um programa que leia um n%cmero e informe se ele %c divis%cvel por 10, por 5 ou por 2, ou se n%co %c divis%cvel por nenhum deles.\n" ,163,130,161,198,130,161) ; //Exerc�cio 5 - Caracteres ASCII: � � � � � �
        printf("Digite um n%cmero para verificar se ele %c divis%cvel por 10, por 5, por 2 ou por nenhum deles:\n" ,163,130,161) ; // Caracteres ASCII: � � �
        int v8 ;
        scanf("%d" ,&v8) ;
        if (v8 % 10 == 0)
            printf("%d %c divis%cvel por 10, por 5 e por 2.\n" ,v8,130,161) ; // Caracteres ASCII: � �
        else if (v8 % 5 ==0)
            printf("%d %c divis%cvel por 5.\n" ,v8,130,161) ; // Caracteres ASCII: � �
        else if (v8 % 2 == 0)
            printf("%d %c divis%cvel por 2.\n" ,v8,130,161) ; // Caracteres ASCII: � �
        else
            printf("%d n%co %c divis%cvel por 10, 5 ou 2.\n" ,v8,198,130,161) ; // Caracteres ASCII: � � �

    printf("\n6. Escreva um programa que verifique se um valor de entrada x pertence ao intervalo ]-10;30].\n") ; //Exerc�cio 6
        printf("Digite um valor para saber se ele pertence ao intervalo  ]-10;30]:\n") ;
        float v9 ;
        scanf("%f" ,&v9) ;
        if ( -10 < v9 <= 30)
            printf("%f pertence ao intervalo ]-10;30].\n" ,v9) ;
        else
            printf("%f n%co pertence ao intervalo ]-10;30].\n" ,v9,198) ; // Caracteres ASCII: �

    printf("\n7. Ler um n%cmero inteiro, e verificar se o n%cmero corresponde a um m%cs v%clido no calend%crio e escrever o nome do m%cs, sen%co escrever uma mensagem 'M%cs Inv%clido'.\n" ,163,163,136,160,160,136,198,136,160) ; //Exerc�cio 7 - Caracteres ASCII: � � � � � � � � �
        printf("Digite um n%cmero correspondente a um m%cs no calend%crio:\n" ,163,136,160) ; // Caracteres ASCII: � � �
        int v10 ;
        scanf("%d" ,&v10) ;
        switch (v10)
        {
        case 1 :
            printf("Janeiro\n") ;
            break ;
        case 2 :
            printf("Fevereiro\n") ;
            break ;
        case 3 :
            printf("Mar%co\n" ,135) ; // Caracteres ASCII: �
            break;
        case 4 :
            printf("Abril\n") ;
            break ;
        case 5 :
            printf("Maio\n") ;
            break ;
        case 6 :
            printf("Junho\n") ;
            break ;
        case 7 :
            printf("Julho\n") ;
            break ;
        case 8 :
            printf("Agosto\n") ;
            break ;
        case 9 :
            printf("Setembro\n") ;
            break ;
        case 10 :
            printf("Outubro\n") ;
            break ;
        case 11 :
            printf("Novembro\n") ;
            break ;
        case 12 :
            printf("Dezembro\n") ;
            break ;
        }

    printf("\n8) Elabore um programa que leia tr%cs valores, encontre o maior dos tr%cs valores e o escreva com a mensagem: %c%c o maior.%c\n" ,136,136,34,144,34) ; //Exerc�cio 8 - Caracteres ASCII: � � " � "
        printf("Digite 3 valores para verificar qual o maior:\n")
        float v11,v12,v13 ;
        scanf("%f\n%f\n%f\n" ,&v11,&v12,&v13) ;
        if (v11 > v12)
            if (v11 > v13)
                printf("%f %c maior do que %f %f\n" ,v11,130,v12,v13) ;
            else
        else if (v12 > v11)
            if (v12 > v13)
                printf()

    return 0 ;

}

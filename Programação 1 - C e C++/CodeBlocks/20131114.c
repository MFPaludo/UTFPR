#include <stdio.h>
#include <math.h>

double main()

{
    printf("1) Escreva um algoritmo em PORTUGOL que leia um n%cmero e o imprima caso ele seja maior que 20. \n" ,163) ; //Exercício 1 - Caracteres ASCII: ú
        float v1 ;
        printf("Digite um valor para verificar se ele %c maior que 20 \n" ,130) ; //Caracteres ASCII: é
        scanf("%f" ,&v1) ;

            if (v1 > 20)
                printf("%f %c maior que 20" ,v1,130) ; //Caracteres ASCII: é

            else
                    printf("%f n%co %c maior que 20" ,v1,198,130) ; //Caracteres ASCII: ã é

    printf("\n \n 2) Construa um algoritmo em PORTUGOL que leia dois valores num%cricos inteiros e efetue a adi%c%co; caso o resultado seja maior que 10, apresent%c-lo. \n" ,130,135,198,160) ; //Exercício 2 - Caracteres ASCII: é ç ã á
        int v2,v3,v4 ;
        printf("Digite 2 valores inteiros \n") ;
        scanf("%d %d" ,&v2,&v3) ;
        v4=v2+v3 ;
        printf("%d + %d = %d \n" ,v2,v3,v4) ;
            if (v4 > 10)
                printf("%d + %d %c maior que 10" ,v2,v3,130) ; //Caracteres ASCII: é

            else
                    printf("%d + %d n%co %c maior que 10" ,v2,v3,198,130) ; //Caracteres ASCII: é

    printf("\n \n 3) Construa um algoritmo em PORTUGOL que determine (imprima) se um dado n%cmero N inteiro (recebido atrav%cs do teclado) %c PAR ou %cMPAR. \n" ,163,130,130,214) ; //Exercício 3 - Caracteres ASCII: ú é é Í
        int v5 ;
        printf("Digite um n%cmero para verificar se ele %c %cmpar ou par \n" ,163,130,161) ; //Caracteres ASCII: ú é í
        scanf("%d" ,&v5) ;
        if (v5 % 2 == 0)
            printf("%d %c par" ,v5,130) ; //Caracteres ASCII: é
        else
            printf("%d %c %cmpar" ,v5,130,161) ;

    printf("\n \n 4) Escreva um algoritmo em PORTUGOL para determinar se um dado n%cmero N (recebido atrav%cs do teclado) %c POSITIVO, NEGATIVO ou NULO. \n " ,163,130,130) ; //Exercício 4 - Caracteres ASCII: ú é é
        float v6 ;
        printf("Digite um n%cmero para verificar se ele %c positivo, negativo ou nulo \n" ,163,130) ; //Caracteres ASCII: ú é
        scanf("%f" ,&v6) ;
        if (v6 == 0)
            printf("%f %c nulo" ,v6,130) ; //Caracteres ASCII: é
        else if (v6 > 0)
            printf("%f %c positivo" ,v6,130) ; //Caracteres ASCII: é
        else if (v6 < 0)
            printf("%f %c negativo" ,v6,130) ; //Caracteres ASCII: é

    printf("\n \n 5) Construir um algoritmo em PORTUGOL que leia dois n%cmeros e efetue a adi%c%c. \n Caso o valor somado seja maior que 20, este dever%c ser apresentado somando-se a ele mais 8; caso o valor somado seja menor ou igual a 20, este dever%c ser apresentado subtraindo-se 5. \n" ,163,135,198,160,160) ; //Exercício 5 - Caracteres ASCII: ú ç ã á á
        float v7,v8,v9,v10 ;
        printf("Digite dois n%cmeros: \n" ,163) ;  //Caracteres ASCII: ú
        scanf("%f\n%f" ,&v7,&v8) ;
        v9=v7+v8 ;
        printf("%f + %f = %f \n" ,v7,v8,v9) ;
        if (v9 > 20)
            printf("%f %c maior que 20\n%f + 8 = %f" ,v9,130,v9,v10=v9+8) ; //Caracteres ASCII: é
        else
            printf("%f n%co %c maior que 20\n%f - 5 = %f" ,v9,198,130,v9,v10=v9-5) ; //Caracteres ASCII: ã é

return 0;

}

#include <stdio.h> //biblioteca
#include <math.h> //biblioteca

double main() /*função principal*/
{
	float v1 ,v2 ,v3 ,v4 ,v5 ,v6 ,v7 ,v8 ,v9 ,v10 ,v11 ,v12 ,v13 ,v14 ,v15 ;  //flutuantes e valores
	printf("Exerc%ccios \n Fa%ca um programa que l%c 5 valores flutuantes e aplica as funções matemáticas: \n " ,161,135,136 ) ;
	printf("\n") ;
	printf("Digite 2 valores: \n") ;
	scanf("%f %f" ,&v1,&v2) ;
	printf("\n") ;
	printf("v1 = %f \n" ,v1) ;
	printf("v2 = %f \n" ,v2) ;
	printf("\n") ;

	printf("1)pow (valor 1, valor 2) \n") ;
	v3=pow(v1,v2) ;
	printf("Resultado [%f(v1) elevado a %f(v2) = %f(v3)] \n" ,v1,v2,v3) ;
	printf("\n") ;

	printf("2)sqrt(valor 3) \n") ;
	v4=sqrt(v3) ;
	printf("Resultado [Raiz quadrada de %f(v3)=%f(v4)] \n" ,v3,v4) ;
	printf("\n") ;

	printf("3)tan(valor 1) \n") ;
	v5=tan(v1) ;
	printf("Resultado [tangente de %f(v1) rad=%f(v5) rad] \n" ,v1,v5) ;
	printf("\n") ;

	printf("4)cos(valor1) \n") ;
	v6=cos(v1) ;
	printf("Resultado [cosseno de %f(v1)=%f(v6) rad] \n" ,v1,v6) ;
	printf("\n") ;

	printf("5)sin(valor4) \n") ;
	v7=sin(v4) ;
	printf("Resultado [seno de v4=v7]: %f \n" ,v7) ;
	printf("v7 = %f \n" ,v7) ;
	printf("\n") ;

	printf("6)floor(valor5) \n") ;
	v8=floor(v5) ;
	printf("Resultado [v5 arredondado para baixo=v8]: %f \n" ,v8) ;
	printf("v8= %f \n" ,v8) ;
	printf("\n") ;

	printf("7)abs(valor2) \n") ;
	v9=fabs(v2) ; //abs + flutuante
	printf("Resultado [modulo de v2=v9]: %f \n" ,v9) ;
	printf("v9= %f \n" ,v9) ;
	printf("\n") ;

	printf("8)ceil(valor3) \n") ;
	v10=ceil(v3) ;
	printf("Resultado [v3 arredondado para cima=v10]: %f \n" ,v10) ;
	printf("v10= %f \n" ,v10) ;
	printf("\n") ;

	printf("9)fmax(valor1,valor5) \n") ;
	v11=fmax(v1,v5) ;
	printf("Resultado [Valor maximo entre v1 e v5=v11]: %f \n" ,v11) ;
	printf("v11= %f \n" ,v11) ;
	printf("\n") ;

	printf("10)fmin(valor1,valor5) \n") ;
	v12=fmin(v1,v5) ;
	printf("Resultado [Valor minimo entre v1 e v5=v12]: %f \n" ,v12) ;
	printf("v12= %f \n" ,v12) ;
	printf("\n") ;

	printf("11)log(valor1) \n") ;
	v13=log(v1) ;
	printf("Resultado [Logaritmo neperiano (log base e) de v1=v13]: %f \n" ,v13) ;
	printf("v13= %f \n" ,v13) ;
	printf("\n") ;

	printf("12)log10(valor2) \n") ;
	v14=log10(v2) ;
	printf("Resultado [Logaritmo de v2=v14]: %f \n" ,v14) ;
	printf("v14= %f \n" ,v14) ;
	printf("\n") ;

	printf("13)exp(valor3) \n") ;
	v15=exp(v3) ;
	printf("Resultado [e ev3=v15]: %f \n" ,v15) ;
	printf("v15= %f \n" ,v15) ;
	printf("\n") ;

	printf("14)valor1 += valor2 \n") ;
	printf("Valor inicial de v1= %f \n" ,v1) ;
	printf("Valor inicial de v2= %f \n" ,v2) ;
	printf("\n") ;
	printf("Resultado [v1+v2=v1]: %f \n" ,v1 += v2) ;
	printf("v1  assume o valor da operacao v1+v2 \n") ;
	printf("v1= %f \n" ,v1) ;
	printf("v2= %f \n" ,v2) ;
	printf("\n") ;

	printf("15)valor1 *= valor2 \n") ;
	printf("v1= %f \n" ,v1) ;
	printf("v2= %f \n" ,v2) ;
	printf("\n") ;
	printf("Resultado [v1.v2=v1]: %f \n" ,v1 *= v2) ;
	printf("v1 assume o valor de [v1+v2].v2 \n") ;
	printf("v1= %f \n" ,v1) ;
	printf("v2= %f \n" ,v2) ;
	printf("\n") ;

	printf("16)valor5 -= valor4 \n") ;
	printf("Valor inicial de v5= %f \n" ,v5) ;
	printf("Valor inicial de v4= %f \n" ,v4) ;
	printf("\n") ;
	printf("Resultado [v5-v4=v5]: %f \n" ,v5 -= v4) ;
	printf("v5 assume o valor de v5-v4 \n") ;
	printf("v5= %f \n" ,v5) ;
	printf("\n") ;

	printf("17)valor3++ \n") ;
	printf("Valor inicial de v3= %f \n" ,v3) ;
	printf("\n") ;
	printf("Resultado [v3+1=v3]: %f \n" ,v3++) ;
	printf("v3 assume o valor de v3+1 \n") ;
	printf("v3= %f \n" ,v3) ;
	printf("\n");

	printf("18)valor4-- \n") ;
	printf("Valor inicial de v4= %f \n" ,v4) ;
	printf("\n") ;
	printf("Resultado [v4-1=v4]: %f \n" ,v4--) ;
	printf("v4 assume o valor de v4-1 \n") ;
	printf("v4= %f \n" ,v4) ;
	printf("\n") ;

	printf("19)Faca um programa que verifica se o valor é impar ou par \n") ;
	int v16,v17,v18 ;
	printf("Digite um n%cmero \n" ,163) ;
	scanf("%d" ,&v16) ;
	if (v16  % 2 == 0)
		printf("O n%cmero %c par.", 163, 130);
	else
		printf("O n%cmero %c %cmpar.", 163, 130, 161);

    printf("20)Faca um programa que le 2 valores inteiros e apresenta o resto dele. \n") ;
    printf("Digite 2 valores inteiros") ;
    scanf("%d \n %d" ,&v17,&v18) ;
    printf("Resultado [resto da divisão de %d por %d] \n" ,v16) ;

return 0 ;
}

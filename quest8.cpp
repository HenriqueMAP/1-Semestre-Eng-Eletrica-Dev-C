#include<stdio.h>
#include<stdlib.h>

//Quest�o 08 da lista de algoritmos 1 - Exerc�cios de tomada de deci��o -  Computa��o Aplicada

//Escreva um programa em C para ler o n�mero de lados de um pol�gono regular, e a medida do lado. 
//Calcular e imprimir o seguinte: 
//Se o n�mero de lados for igual a 3 escrever TRI�NGULO e o valor do seu per�metro. 
//Se o n�mero de lados for igual a 4 escrever QUADRADO e o valor da sua �rea.
//Se o n�mero de lados for igual a 5 escrever PENT�GONO. 
//Em qualquer outra situa��o escrever Pol�gono n�o identificado.

int TRI, QUAD, A, B, C, L;

int main()
{
	printf("\n Insira a quantidade de lados do poligono:");
	printf("\n");
	scanf("%d", &L);
	
	if(L==3)
	{
		printf("\n TRIANGULO. Insira os valores dos lados: ");
		scanf("%d %d %d", &A, &B, &C);
		TRI=A+B+C;
		printf("\n O perimetro deste triangulo eh: %d", TRI);
	}
	if (L==4)
	{
		printf("\n QUADRADO. Insira os valores dos lados:");
		scanf("%d %d", &A, &B);
		QUAD=A*B;
		printf("\n A area deste quadrado eh: %d.");
	}
	if(L==5)
	{
		printf("\n PENTAGONO. \n");
	}
	if(L<3 || L>5) 
	{
		printf("\n Poligono nao encontrado. \n");
	}
	printf("\n");
	system ("PAUSE");
	return 0;
	}

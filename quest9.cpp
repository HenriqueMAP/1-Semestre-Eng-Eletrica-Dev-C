#include<stdio.h>
#include<stdlib.h>

//Escreva um programa em C que leia as medidas dos lados de um tri�ngulo e, caso exista, escreva se ele � 
//EQUIL�TERO, IS�SCELE ou ESCALENO 
//Observa��o:
//O tri�ngulo existe se e somente a soma de dois lados quaisquer � maior que o lado remanescente.
//Tri�ngulo equil�tero: Possui os 3 lados iguais. 
//Tri�ngulo is�sceles: Possui os 2 lados iguais. 
//Tri�ngulo escaleno: Possui os 2 lados diferentes. 

int A,B,C, AB, BC, AC;

int main()
{
	printf("\n Insira as medidas dos lados do poligono:");
	scanf("%d %d %d", &A, &B, &C);
	
	AB=A+B;
	BC=B+C;
	AC=A+C;
	
	if(AB>C && BC>A)
	{
		printf("\n Essas medidas pertencem a um triangulo verdadeiro.\n");
		
		if(A==B && B==C)
		{
			printf("\n Triangulo Equilatero. \n");
		}
		else if(A==B || C==B)
		{
			printf("\n Triangulo Isosceles. \n");
		 } 
		 else if(A==C)
		 {
		 	printf("\n Triangulo Isosceles. \n");
		 }
		 else printf("\n Triangulo Escaleno. \n");
	}	
		else printf("\n Essas medidas nao pertencem a um triangulo");
		printf("\n");
		system("PAUSE");
		return 0;
}

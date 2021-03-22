#include <stdio.h>
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;

	void retornaTriangulo(float A, float B, float C){

		if ((C > A + B) || (A > B + C )|| (B > A + C))puts("Não é um triangulo valido.");
		else if ( (A != B) && (A != C) && (B != C) )puts("Triangulo Escaleno");	
		else if ( (A == B) && (A == C))	puts("Triangulo Equilatero");	
		else if ((A == B) || (A == C) || (B == C))puts("Triangulo Isosceles");
	}
	int main()
	{
		setlocale(LC_ALL, "Portuguese");
		float A, B, C;
		puts("informe 3 valores para um triangulo: ");
		cin>>A;
		cin>>B;
		cin>>C;	
		retornaTriangulo(A,B,C);
	return 0;
	}
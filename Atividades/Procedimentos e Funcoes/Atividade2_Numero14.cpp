#include <stdio.h>
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;

	int retornaresultado(int valor[]){

	int maior=0;
	for(int i = 0; i < 10; i++)
	{
		if(valor[i]>maior)
			maior = valor[i];
	}
	return maior;
	}
	int main()
	{
		setlocale(LC_ALL, "Portuguese");
		int valor[10];
		puts("informe 10 numeros inteiros: ");
		for(int i = 0; i < 10; i++)
		{
			cout<<"Valor "<<i+1<<": ";
			cin>>valor[i];
		}
		puts("-----------------------");
		   cout<<"O maior valor é: "<<	retornaresultado(valor);
		
	return 0;
	}
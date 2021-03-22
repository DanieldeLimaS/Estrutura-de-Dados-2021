#include <stdio.h>
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;

	void retornaTabuada(int qtd){
		puts("**********************");
		for(int i = 1; i <=10; i++)
		{
			cout<<qtd<<" x "<<i<< " = "<<qtd * i<<endl;
		}
	
	}
	int main()
	{
		setlocale(LC_ALL, "Portuguese");
	int numero;
	puts("Informe um valor para montar a tabuada: ");
	cin>>numero;
	retornaTabuada(numero);
	
		
	return 0;
	}
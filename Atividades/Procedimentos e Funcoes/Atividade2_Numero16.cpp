#include <stdio.h>
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;

	int resultado(int num)
	{
    	int div = 0;
    	for(int i = num; i>0; i--)
    	{
    	    if(num%i==0) div++;
    	}
    	return div;
	}
	int main()
	{
		setlocale(LC_ALL, "Portuguese");
		int valor;
		puts("Informe um valor: ");
		cin>>valor;
		cout<<"O Numero de divisores é: "<<resultado(valor);
	
		
	return 0;
	}
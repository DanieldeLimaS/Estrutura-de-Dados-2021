#include <stdio.h>
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;

	int somatorio(int num)
	{
    	int sum=0;
    	for(int i=1;i<=num;i++)
    	{
    	  sum+=i;
    	}
    	return sum;
	}
	int main()
	{
		setlocale(LC_ALL, "Portuguese");
		int valor;
		puts("Informe um valor: ");
		cin>>valor;
		cout<<"O somatorio é: "<<somatorio(valor);
	
		
	return 0;
	}
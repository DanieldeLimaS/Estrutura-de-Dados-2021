#include <stdio.h>
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;

	double retornafatorial(double valor){

		double somador=1;
		for(int i=1;i<=valor;i++){
			somador*=i;
		}
		return somador;
	}
	int main()
	{
		setlocale(LC_ALL, "Portuguese");
		double valor;
		puts("informe um valor para calculo do fatorial");
		cin>>valor;
		double ret =retornafatorial(valor);
		cout<<"O resultado do fatorial é: "<<ret;
	return 0;
	}
#include <stdio.h>
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;
 bool retornaPerfeito(int valor)
 {
 	int soma=0,dobro,div;
 	dobro =2*valor;
 	for(int i=1; i<=valor;i++){
		 if(valor % i == 0)
		  {
			  soma+=i;
		  }
	 }
	if(soma==dobro)//Se soma dos numeros divisiveis for igual ao dobro
		puts("� um n�mero perfeito ");
	else
		puts ("n�o � um n�mero perfeito"); 	
 }
int main(){
		 setlocale(LC_ALL, "Portuguese");
		 int valor;
		 puts("Informe um valor inteiro:");
		 cin>> valor;
		 
			 retornaPerfeito(valor);
		 

}
#include <stdio.h>
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;
 bool retornaValor(int valor)
 {
 		if(valor>0)return true;
 		else return false;
 }
int main(){
		 setlocale(LC_ALL, "Portuguese");
		 int valor;
		 puts("Informe um valor inteiro positivo ou negativo:");
		 cin>> valor;
		 
			if(retornaValor(valor)==true)
				puts("O valor é positivo");
			else puts("o valor é negativo");	 

}
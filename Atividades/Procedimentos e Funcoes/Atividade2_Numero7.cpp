#include <stdio.h>
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;
 bool retornaValor(int valor[])
 {
 		if(valor%2==0)return true;
 		else return false;
 }
int main(){
		 setlocale(LC_ALL, "Portuguese");
		 int valor[];
		 puts("Informe e valores: ");
		for(int i=0;i<3;i++) cin>> valor[i];
		 
			if(retornaValor(valor)==true)
				puts("O valor é PAR");
			else puts("o valor é IMPAR");	 

}
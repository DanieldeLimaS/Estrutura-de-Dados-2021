#include <stdio.h>
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;
 double retornaPesoIdeal(double alt, char sexo)
 {
 	 sexo =toupper(sexo);
 	double pesoideal;
 	puts("\n----------------------");
 switch(sexo)
 {
 case 'M':
 	pesoideal= 72.7 * alt - 58;
 	return pesoideal;
	 break;
case 'F':
	pesoideal= 62.1 * alt - 44.7;
	return pesoideal;
	break;
 }
 	 	
 }
int main(){
		 setlocale(LC_ALL, "Portuguese");
		 double altura;
		  char sexo;
		 puts("Informe a sua Altura: ");
	cin>>altura;
		 puts("Informe o sexo(M ou F):  ");
	cin>>sexo;
		
		cout<< "\n\no seu peso ideal é: "<< retornaPesoIdeal(altura,sexo)<<endl;	 
		puts("-----------------------");
}
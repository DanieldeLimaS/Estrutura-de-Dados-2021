#include <stdio.h>
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;
 string retornaValor(double valor)
 {
 	puts("----------------------");
 	 if(valor>=0 && valor<=4.9) return "O conceito é D";
 	 else if(valor>=5&& valor<=6.9) return "O conceito é C";
 	 else  if(valor>=7 && valor<=8.9) return "O conceito é B";
 	 else   if(valor>=9 && valor<=10) return "O conceito é A";
 	 	
 }
int main(){
		 setlocale(LC_ALL, "Portuguese");
		 double valor;
		 puts("Informe a nota do Aluno: ");
	cin>>valor;
		 
		cout<< retornaValor(valor)<<endl;	 

}
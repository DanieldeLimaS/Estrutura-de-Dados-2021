#include <stdio.h>
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
		 setlocale(LC_ALL, "Portuguese");
	int anos,meses,dias ;
 
	puts("Escreva sua idade (somente em anos) ");
	cin>>anos;

	puts("Escreva sua idade (somente em meses) ");
	cin>>meses;

	puts("Escreva (sua idade somente em dias) ");
	cin>>dias;

  dias =(dias+(anos*365)+(meses*30));

 cout<<"Sua idade em dias é: "<<dias<<endl;

}
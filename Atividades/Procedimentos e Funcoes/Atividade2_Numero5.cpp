#include <iostream>
#include <locale>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

void returnCat(int idade){
	  if(idade>=5 &&idade<=7)
	   	puts("Infantil A");
	   else if(idade>=8 &&idade<=10)
	   	puts("Infantil B");
	    else if(idade>=11 &&idade<=13)
	   	puts("Juvenil A");
	    else if(idade>=14 &&idade<=17)
	   	puts("Juvenil B");
	    else if(idade>=18)
	   	puts("Adulto");
		  
}
int main(){
	 setlocale(LC_ALL, "Portuguese");
	 
	int idade;
	puts("Informe a idade do nadador: ");
	cin>>idade;
	returnCat(idade);
	 	 
	return 0;
}
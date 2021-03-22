#include <iostream>
#include <locale>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;
string verifica_primo(int num)
{
	int	aux = num/2;
	if (num % aux==0)
		return "Não é Primo.";
	else
	return "É Primo.";	 
}
int main(){
	 setlocale(LC_ALL, "Portuguese");
	 
	  int num;
	  puts("OBS: Digite o numero 1 para encerrar o programa\n\n");
	   puts("--------------------------------------------------------");
	 puts("Insira um valor inteiro positivo:\n");
	 cin>>num;
	 while(num>0)
	 {
		cout<< verifica_primo(num)<<endl;
	 puts("\n--------------------------------------------------------");
	 system("pause");
	 system("cls"); 
	  puts("OBS: Digite o numero 1 para encerrar o programa\n\n");
	   puts("--------------------------------------------------------");
	 puts("Insira um valor inteiro positivo:\n");
	 cin>>num;
	 }	 
	return 0;
}
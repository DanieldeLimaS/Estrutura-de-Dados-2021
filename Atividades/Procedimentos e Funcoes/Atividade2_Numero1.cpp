#include <iostream>
#include <locale>
#include <stdio.h>
#include <string.h>

using namespace std;
double CalculaNota(double notas[],char letra){
	double somador, resultado;
	switch(letra)
	{
	case 'A':
		for(int i=0;i<3;i++){
			somador+=notas[i];
		}
		resultado = somador/3;
		puts("--------------------------------------------------");
		cout<<"\n O Resultado da M�dia Aritm�tica �: "<<resultado<<endl;
		puts("--------------------------------------------------");
		break;
	case 'P':
		for(int i=0;i<3;i++){
			somador+=notas[i];
		}
		resultado = somador/(1+2+3);
		puts("--------------------------------------------------");
		cout<<"\n O Resultado da M�dia Ponderada �: "<<resultado<<endl;
		puts("--------------------------------------------------");
		break;
	case'H':
		for(int i=0;i<3;i++){
			somador+=1/notas[i];
		}
		resultado = somador/3;
		puts("--------------------------------------------------");
		cout<<"\n O Resultado da M�dia Harm�nica �: "<<resultado<<endl;
		puts("--------------------------------------------------");
		break;
		break;
	}
}


int main(){
	 setlocale(LC_ALL, "Portuguese");
	double notas[3],n2,n3;
	char letra;
	cout<<"Informe 3 notas do aluno:"<< endl;
	for(int i=0;i<3;i++){
		cout<<"Nota "<<i+1<<" :";
		cin>>notas[i];
	}
	puts("\n\n-----------------------\n M�dia Aritm�tica, Letra A \n M�dia Ponderada, letra P. \n M�dia Harm�nica, letra H \n -----------------------");
	puts("\n-Informe uma letra para Calcular as notas: ");
	cin>>letra;
	letra = putchar(toupper(letra));
	CalculaNota(notas,letra);
	 
	return 0;
}
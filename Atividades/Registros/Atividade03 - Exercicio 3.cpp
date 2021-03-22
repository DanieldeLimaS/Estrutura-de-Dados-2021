#include <iostream>
#include <locale>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

typedef	struct 
{
	string Nome;
	string Genero;
	int numeroIntegrantes;
	int ranking;//ranking entre 5 bandas preferidas informar entre 1 e 5
	
}BandaMusical;


void GetAllInformacoes(BandaMusical *banda){

	for(int i = 0; i < 5; i++)
	{
		cout<<"......"<<i+1<<"ª Banda Musical......:"<<endl<<endl;
		cout<<"Nome da banda...................: "<<banda[i].Nome<<endl;
		cout<<"Genero..........................: "<<banda[i].Genero<<endl;
		cout<<"Numero de integrantes...........: "<<banda[i].numeroIntegrantes<<endl;
		cout<<"Ranking de preferencia(de 1 a 5): "<<banda[i].ranking<<endl;
		puts("______________________________________");
		puts("");
	}
}


void GetRanking(int ranking,BandaMusical *banda){

	for(int i = 0; i < 5; i++)
	{
		if(banda[i].ranking==ranking)
		{
				puts("");
			cout<<"......"<<i+1<<"ª Banda Musical......:"<<endl<<endl;
			cout<<"Nome da banda...................: "<<banda[i].Nome<<endl;
		   	cout<<"Genero..........................: "<<banda[i].Genero<<endl;
			cout<<"Numero de integrantes...........: "<<banda[i].numeroIntegrantes<<endl;
			cout<<"Ranking de preferencia(de 1 a 5): "<<banda[i].ranking<<endl;
			puts("___________________________________________________");
			puts("");
		}
	}
}


void GetRankingFavoritas(string nome,BandaMusical *banda){
	puts("___________________________");
	int aux=0;
	for(int i = 0; i < 5; i++)
	{
		if(banda[i].Nome==nome)
		{
			aux+=1;
		}
	}
	if(aux ==1)
		puts("essa banda é uma das suas favoritas");
	else
		puts("essa banda não faz parte de suas bandas favoritas");
	puts("___________________________");
}


int main(){
	setlocale(LC_ALL,"Portuguese");
BandaMusical banda[5];

	for(int i = 0; i < 5; i++)
	{
		puts("Informe 5 bandas musicais de sua preferencia:");
		cout<<"Informe a "<<i+1<<"ª Banda:"<<endl;
		cout<<"Nome da banda: ";
		cin>>banda[i].Nome;
		cout<<"Genero: ";
		cin>>banda[i].Genero;
		cout<<"Numero de integrantes: ";
		cin>>banda[i].numeroIntegrantes;
		cout<<"Ranking de preferencia(de 1 a 5): ";
		cin>>banda[i].ranking;
		system("cls");
	}
	GetAllInformacoes(banda);
	puts("_____________________");
	puts("Pressione Enter para continuar com a execução");
	system("pause");
	system("cls");
	puts("Informe um ranking para obter mais informações:");
	cout<<"Ranking numero: ";
	int ranking;
	cin>>ranking;
	GetRanking(ranking,banda);
	
	
		puts("Pressione Enter para continuar com a execução");
	system("pause");
	system("cls");
	puts("Informe um nome de uma Banda para obter mais informações:");
	cout<<"Nome da Banda: ";
	string nomebanda ="";
	cin>>nomebanda;

	GetRankingFavoritas(nomebanda,banda);
	
	return 0;	
}

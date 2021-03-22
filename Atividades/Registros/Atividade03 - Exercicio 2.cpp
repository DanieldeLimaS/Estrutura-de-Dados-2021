#include <iostream>
#include <locale>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;
typedef struct{
	string horas,minutos,segundos;	
}Hora;

typedef struct{
	string dia,mes,ano;
}Data;
typedef struct{
	Hora hora;
	Data data;
	string descricao;
}Agendamento;

void informaAgendamentos(Agendamento *_agenda){
	for(int i=0;i<3;i++){
		cout<<"Informe o "<<i+1<<"º Agendamento:"<<endl;
		cout<<"Dia:";
		cin>>_agenda[i].data.dia;
		cout<<"Mês:";
		cin>>_agenda[i].data.mes;
		cout<<"Dia:";
		cin>>_agenda[i].data.ano;
		puts("--------");
		cout<<"Horas:";
		cin>>_agenda[i].hora.horas;
		cout<<"Minutos:";
		cin>>_agenda[i].hora.minutos;
		cout<<"Segundos:";
		cin>>_agenda[i].hora.segundos;
		cout<<"Informe uma descrição para esse agendamento: ";
		cin>>_agenda[i].descricao;
		system("cls");
		
	}
}
void MostrarAgendamento(Agendamento *_agenda){
		string formataData;
		cout<<"Os Agendamentos são:"<<endl;
		for(int i=0;i<3;i++){
			formataData =_agenda[i].data.dia+"/"+_agenda[i].data.mes+"/"+_agenda[i].data.ano+" às "+ _agenda[i].hora.horas+":"+_agenda[i].hora.minutos+":"+	_agenda[i].hora.segundos;
			 cout<<"Agendado para: "<<formataData<<endl;
			 cout<<"Descrição: "<<_agenda[i].descricao<<endl<<endl;
			 puts("------------------------------");
		}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	Agendamento _agenda[3];
	puts("Informe 3 Agendamentos:");
	informaAgendamentos(_agenda);
	system("cls");
	//retorna em um for, os 3 valores agendados já formatados no padrao portugues(data)
	MostrarAgendamento(_agenda);
	
		
}

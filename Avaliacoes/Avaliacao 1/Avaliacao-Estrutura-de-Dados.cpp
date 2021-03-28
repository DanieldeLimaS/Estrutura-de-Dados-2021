#include <iostream>
#include <locale>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

typedef int sessaoCinema[3][16][21];


 void limpaReservas(sessaoCinema limpasessao){
 	 for(int i = 1; i <=2 ; i++)
 	 {
 		for(int nf=0;nf<16;nf++)//representa as filas
 		{
 			for(int nc=0;nc<21;nc++)// representa os corredores
 			{
 				if((nf!=0) && (nc!=10))
 				{
 					limpasessao[i][nf][nc] = 0;
 				}else{
 					limpasessao[i][nf][nc] = 1;
 				}
 			}
 		}
 	 }
 }


void reservaPoltrona(sessaoCinema _sessao,int nSessao, int nfila, int ncorredor)
{
	if(_sessao[nSessao][nfila][ncorredor] == 0)
	{//significa que nao estao reservada
		_sessao[nSessao][nfila][ncorredor]  = 1;
		cout << "Reserva para a sessao["<<nSessao<<"] poltrona[" << nfila << "][" << ncorredor << "] realizada!!!" << endl<<endl;
		system("pause");	 
	}
	else
	{
		cout << "A Poltrona escolhida já está reservada!" << endl<<endl;
		
		cout << "Escolha a opcao novamente para outra poltrona" << endl<< endl;
		system("pause");		
	}
	
}

void verificaPoltronaReservada(sessaoCinema _sessao,int nSessao, int nfila, int ncorredor)
{
	if(_sessao[nSessao][nfila][ncorredor] == 1)
	{//significa que nao estao reservada
		puts("Poltrona Reservada");
		system("pause");	 
	}
	else
	{
		puts("Poltrona livre");
		system("pause");		
	}
}
void cancelaReservaPoltona(sessaoCinema _sessao,int nSessao, int nfila, int ncorredor)
{

		if(_sessao[nSessao][nfila][ncorredor] == 1)
		{//significa que nao estao reservada
			_sessao[nSessao][nfila][ncorredor]  = 0;
			puts("");
			cout << "Reserva para a sessao["<<nSessao<<"] poltrona[" << nfila << "][" << ncorredor << "] Cancelada com sucesso!!!" << endl<<endl;
			system("pause");	 
		}
		else
		{
			cout << "NAO é possivel cancelar uma Poltrona LIVRE!!!"<< endl<<endl;
			
			cout << "Escolha a opcao novamente para outra poltrona" << endl<< endl;
			system("pause");		
		}

}

void ListaTodasPoltronas(sessaoCinema sessao){
 	 for(int i = 1; i <=2 ; i++)
 	 {
 	 	puts("**********************************");
	    cout<<"Poltronas da "<<i<<"ª SESSÃO"<<endl;
	   puts("**********************************");
 		for(int nf=1;nf<16;nf++)//representa as filas
 		{
 			for(int nc=0;nc<21;nc++)// representa os corredores
 			{
 					if(sessao[i][nf][nc]==1 &&nc!=10)
 					{
 						
 						cout<<"Sessao["<<i<<"], Fila["<<nf<<"], Corredor["<<nc<<"] = RESERVADO"<<endl;
 					}
 					else
					 {
						 cout<<"Sessao["<<i<<"], Fila["<<nf<<"], Corredor["<<nc<<"] = LIVRE"<<endl;
					 }
 			}
 		}
 	 }
 	 system("pause");
 }
 
 void ListaReservadas(sessaoCinema sessao){
 	 for(int i = 1; i <=2 ; i++)
 	 {
 		for(int nf=1;nf<16;nf++)//representa as filas
 		{
 			for(int nc=0;nc<21;nc++)// representa os corredores
 			{
 					if(sessao[i][nf][nc]==1 && nc!=10)
 					{
 						cout<<"Sessao["<<i<<"], Fila["<<nf<<"], Corredor["<<nc<<"] = RESERVADO"<<endl;
 					}
 				
 			}
 		}
 	 }
 	 system("pause");
 }
 void ListaLivres(sessaoCinema sessao){
 	 for(int i = 1; i <=2 ; i++)
 	 {
 		for(int nf=1;nf<16;nf++)//representa as filas
 		{
 			for(int nc=0;nc<21;nc++)// representa os corredores
 			{
 				if(sessao[i][nf][nc]==1 && nc!=10)
				 {
				 	
				 }
 					else
					 {
						 cout<<"Sessao["<<i<<"], Fila["<<nf<<"], Corredor["<<nc<<"] = LIVRE"<<endl;
					 }
 			}
 		}
 	 }
 	 system("pause");
 }
int ValidaCorredorEntrada(int corredor)
{//retorna 1 se o corredor for valido
	if((corredor<0) or (corredor>21) or (corredor == 10))
	{
		cout << "Os corredores devem estar entre 0 e 20, excluido o corredor 10 que nao possui assentos!" << endl << endl;
		return(0);
	}else{
		return(1);
	}	
}

int ValidaFilaEntrada(int fila)
{// retorna 1 se a fila for valida
	if((fila<1) or (fila>16))
	{
		cout << "As filas devem estar entre 1 e 15, lembrando a fila 0 nao possui assentos!" << endl << endl;
		return(0);
	}
	else{
		return(1);
	}
}

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	sessaoCinema _sessao;
	 limpaReservas(_sessao);
	int opcaoMenu,
	nCorredor=0,
	nFila=0,
	nSessao=0,
	validaEntrada=0;
	do{
		
		system("cls");
		cout << "|================OPCOES================|" << endl;
		cout << "|                                      |" << endl;
		cout << "| 1) Reservar POLTONAS                 |" << endl;
		cout << "| 2) Cancelar RESERVA                  |" << endl;
		cout << "| 3) Verificar POLTRONA RESERVADA      |" << endl;
		cout << "| 4) Ver todas as POLTRONAS            |" << endl;
		cout << "| 5) Ver POLTRONS RESERVADAS           |" << endl;
		cout << "| 6) Ver POLTRONAS LIVRES              |" << endl;
		cout << "| 7) Sair                              |" << endl;
		cout << "|                                      |" << endl;
		cout << "|======================================|" << endl;
		cout << "Informe a opcao desejada: ";
		cin >> opcaoMenu;
		switch(opcaoMenu)
		{
			case 1:
			do{
				cout << "Deseja reservar a sessao numero 1 ou numero 2?" << endl;
				cin>>nSessao;
				cout << "Informe a fila da poltrona desejada: " << endl;
				cin >> nFila;
				validaEntrada = ValidaFilaEntrada(nFila);// se retornar 1 Ã© valido
			}while(validaEntrada==0);
			//**************************************
			do{
				cout << "Informe o corredor da poltrona desejada: " << endl;
				cin >> nCorredor;
				validaEntrada = ValidaCorredorEntrada(nCorredor);// se retornar 1 Ã© valido
			}while(validaEntrada==0);
			//**************************************
			system("cls");
			reservaPoltrona(_sessao,nSessao,nFila,nCorredor);
			break;
////////////////////////////////////////////////////////////////
			case 2:
			
			do{
				cout << "Informe o numero da sessao:" << endl;
				cin>>nSessao;
				puts("");
				cout << "Informe a fila da poltrona desejada: " << endl;
				cin >> nFila;
				puts("");
				validaEntrada = ValidaFilaEntrada(nFila);// se retornar 1 Ã© valido
			}while(validaEntrada==0);
			//**************************************
			do{
				cout << "Informe o corredor da poltrona desejada: " << endl;
				cin >> nCorredor;
				puts("");
				validaEntrada = ValidaCorredorEntrada(nCorredor);// se retornar 1 Ã© valido
			}while(validaEntrada==0);
			//**************************************
			system("cls");
			cancelaReservaPoltona(_sessao,nSessao,nFila,nCorredor);

			break;
//////////////////////////////////////////////////////////////
			case 3:
		
			do{
				cout << "Informe o numero da sessao:" << endl;
				cin>>nSessao;
				puts("");
				cout << "Informe a fila da poltrona desejada: " << endl;
				cin >> nFila;
				puts("");
				validaEntrada = ValidaFilaEntrada(nFila);// se retornar 1 Ã© valido
			}while(validaEntrada==0);
			//**************************************
			do{
				cout << "Informe o corredor da poltrona desejada: " << endl;
				cin >> nCorredor;
				puts("");
				validaEntrada = ValidaCorredorEntrada(nCorredor);// se retornar 1 Ã© valido
			}while(validaEntrada==0);
			//**************************************
			system("cls");
			verificaPoltronaReservada(_sessao,nSessao,nFila,nCorredor);
			break;
//////////////////////////////////////////////////////////////
			case 4:
			puts("Lista de todas as Poltronas");
			ListaTodasPoltronas(_sessao);
			
			break;
//////////////////////////////////////////////////////////////
			case 5:
			puts("Lista de Poltronas Reservadas");
			ListaReservadas(_sessao);
			break;
//////////////////////////////////////////////////////////////
			case 6:
			puts("Lista de Poltronas Livres");
			ListaLivres(_sessao);
			break;
//////////////////////////////////////////////////////////////
			case 7:
			exit(0);
			break;
			default:
			cout << "Esta nao e uma opcao disponive" << endl << "Escolha uma opcao presente nas op?es apresentadas." << endl << endl;
			system("pause");
			break;
		}
	}while(opcaoMenu!=7);
	
}
#include <iostream>
#include <locale>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

typedef int CINEMA[16][21];

typedef struct{
	CINEMA UMA_SESSAO;	
}SESSAO;

void ZERA_RESERVAS(SESSAO *ZERAR){
	for(int i=0;i<16;i++){
		for(int j=0;j<21;j++){
			if((i!=0) && (j!=10)){
				ZERAR->UMA_SESSAO[i][j] = 0;
			}else{
				ZERAR->UMA_SESSAO[i][j] = 1;
			}
		}
	}
}

void RESERVAR_POLTRONA(SESSAO *RESERVAR, int FILA, int CORREDOR){
	if(RESERVAR->UMA_SESSAO[FILA][CORREDOR] == 0){
		RESERVAR->UMA_SESSAO[FILA][CORREDOR] = 1;
		cout << "Reserva para a poltrona[" << FILA << "][" << CORREDOR << "] realizada!!!" << endl;
		system("pause");	 
	}else{
		cout << "NÃO foi possível reservar a poltrona[" << FILA << "][" << CORREDOR << "]!!!" << endl;
		cout << "Escolha a opção novamente para outra poltrona" << endl;
		system("pause");		
	}
}

int VERIFICA_ENTRADA_CORREDOR(int CORREDOR){
	if((CORREDOR<0) or (CORREDOR>21) or (CORREDOR == 10)){
		cout << "Os corredores devem estar entre 0 e 20, exluído o corredor 10 que não possui assentos!" << endl << endl;
		return(0);
	}else{
		return(1);
	}	
}

int VERIFICA_ENTRADA_FILA(int FILA){
	if((FILA<1) or (FILA>16)){
		cout << "As filas devem estar entre 1 e 15, lembrando a fila 0 n? possui assentos!" << endl << endl;
		return(0);
	}
	else{
		return(1);
	}
}

main(void){
	setlocale(LC_ALL,"Portuguese");
	SESSAO CINE_A;
	ZERA_RESERVAS(&CINE_A);
	int OPC,CORREDOR=0,FILA=0,VERIFICA_ENTRADA=0;
	do{
		system("cls");
		cout << "|================OP?ES================|" << endl;
		cout << "|                                      |" << endl;
		cout << "| 1) Reservar poltrona                 |" << endl;
		cout << "| 2) Cancelar Reserva                  |" << endl;
		cout << "| 3) Verificar poltrona Reservada      |" << endl;
		cout << "| 4) Ver todas as Poltronas            |" << endl;
		cout << "| 5) Ver Poltronas Reservadas          |" << endl;
		cout << "| 6) Ver Poltronas Livres              |" << endl;
		cout << "| 7) Sair                              |" << endl;
		cout << "|                                      |" << endl;
		cout << "|======================================|" << endl;
		cout << "Informe a op?o desejada: ";
		cin >> OPC;
		switch(OPC)
		{
		   case 1:
		   		do{
					cout << "Informe a fila da poltrona desejada: " << endl;
					cin >> FILA;
					VERIFICA_ENTRADA = VERIFICA_ENTRADA_FILA(FILA);
				}while(VERIFICA_ENTRADA==0);
   		   		do{
					cout << "Informe o corredor da poltrona desejada: " << endl;
					cin >> CORREDOR;
					VERIFICA_ENTRADA = VERIFICA_ENTRADA_CORREDOR(CORREDOR);
				}while(VERIFICA_ENTRADA==0);
				system("cls");
				RESERVAR_POLTRONA(&CINE_A,FILA,CORREDOR);
		   	   break;
		   case 2:
		   			puts("Informe a fila da poltrona desejada reservada: ");
		   			cin>>FILA;
		   			
		   	break;
 		   case 3:
 		  			puts("Informe a Poltrona que deseja verificar a reserva");
		   	break;
  		   case 4:
  		   			puts("Lista de todas as Poltronas");
		   	break;
  		   case 5:
  		   			puts("Lista de Poltronas Reservadas");
		   	break;
   		   case 6:
   		   			puts("Lista de Poltronas Livres");
		   	break;
   		   case 7:
				exit(0);
		   	break;
	  	   default:
			   cout << "Esta n? ?uma op?o disponive" << endl << "Escolha uma op?o presente nas op?es apresentadas." << endl << endl;
			   system("pause");
		   	   break;
	    }
	}while(OPC!=7);
	
}
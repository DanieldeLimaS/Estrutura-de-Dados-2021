#include <iostream>
#include <locale>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

typedef struct{
	int matricula;
	string nome;
	double nota1,nota2,nota3;
}aluno;

int maiorNota1(aluno *_alunos){//*alunos pega um endereço na posição de um vetor

	int maiorNota =0;
	for(int i=0;i<3;i++){
		if(maiorNota < _alunos[i].nota1)
		maiorNota = _alunos[i].nota1;
	}
	return maiorNota;
}

string retornaNomeMaiorNota(aluno *_alunos){//retorna o nome do aluno com a maior nota
		int maiorNota =0;
		string nome;
	for(int i=0;i<3;i++){
		if(maiorNota < _alunos[i].nota1){
		
			maiorNota = _alunos[i].nota1;
			nome = _alunos[i].nome;
		}	
	}	
	return nome;
}

string retornaNomeMaiorMedia(aluno *_alunos){//retorna o nome do aluno com a maior média das notas
		int soma=0,maior=0;
		string nome;
	for(int i=0;i<3;i++){
		soma =(_alunos[i].nota1 + _alunos[i].nota2 +_alunos[i].nota3)/3;
		
		if(soma>maior){
			maior = soma;
			nome = _alunos[i].nome;
		}
	}	
	return nome;
}

string retornaNomeMenorMedia(aluno *_alunos){//retorna o nome do aluno com a Menor média das notas
		int soma=0,Menor=10;
		string nome;
	for(int i=0;i<3;i++){
		soma =(_alunos[i].nota1 + _alunos[i].nota2 +_alunos[i].nota3)/3;
		
		if(soma<Menor){
			Menor = soma;
			nome = _alunos[i].nome;
		}
	}	
	return nome;
}


string retornaSituacaoAprovacao(aluno _alunos){//retorna o nome do aluno com a Menor média das notas
		int soma=0,nota;
		string nome, situacao;
		
		soma =(_alunos.nota1 + _alunos.nota2 +_alunos.nota3)/3;
		
		if(soma<=6){
			nota = soma;
			nome =_alunos.nome;
			situacao="REPROVADO";
		}
		else if(soma>=6){
			nota = soma;
			nome =_alunos.nome;
			situacao="APROVADO";
		}
	
	return nome + " - Situação: "+situacao;
}



int main(){
	setlocale(LC_ALL,"Portuguese");
	
	aluno _cadastra3[3];
	int _matricula;
	for(int i=0;i<3;i++){
		cout<<"Informe os dados do "<<i+1<<"º Aluno:"<<endl;
		cout<<"Nome do Aluno: ";
		cin>> _cadastra3[i].nome;
		cout<<"Matricula: ";
		cin>> _cadastra3[i].matricula;
		cout<<"Nota 1: ";
		cin>>_cadastra3[i].nota1;
			cout<<"Nota 2: ";
		cin>>_cadastra3[i].nota2;
			cout<<"Nota 3: ";
		cin>>_cadastra3[i].nota3;
		system("cls");
		}
		
		cout<<"A maior nota 1 é : "<<	maiorNota1(_cadastra3)<<endl;
		cout<<"Nome do Aluno com Maior Nota 1: "<<retornaNomeMaiorNota(_cadastra3)<<endl;
		cout<<"Nome do Aluno com a Maior média das notas é:"<<retornaNomeMaiorMedia(_cadastra3)<<endl;
		cout<<"Nome do Aluno com a Menor média das notas é:"<<retornaNomeMenorMedia(_cadastra3)<<endl;
		puts("------------------");
		puts("Lista de Aprovações:");
		for(int i=0;i<3;i++){
			cout<<retornaSituacaoAprovacao(_cadastra3[i])<<endl;
		}
		
}

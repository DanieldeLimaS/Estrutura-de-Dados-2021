#include <stdio.h>
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;
void retornaCrescente(int a,int b, int c)
{
	int aux;
	puts("----------");
	puts("Resultado: ");
	puts("----------");

	 if (a < b)                                           
         if (b < c) cout<< a<<endl<<b<<endl<<c<<endl;       
         else                                             
             if (a < c) cout<<a<<endl<<c<<endl<<b<<endl;  
			  
             else cout<<c<<endl<<a<<endl<<b<<endl;         
     else                                                 
         if (b < c)                                       
             if (a < c) cout<<b<<endl<<a<<endl<<c<<endl;  
			  
             else cout<<b<<endl<<c<<endl<<a<<endl;    
			      
         else cout<<c<<endl<<b<<endl<<a<<endl; 	
}
int main(){
		 setlocale(LC_ALL, "Portuguese");
		 int v1,v2,v3;
		 puts("Informe 3 valores inteiros: ");
		 cout<<"1º valor: ";
 	 	 cin>>v1;
	  	  cout<<"2º valor: ";
 	 	 cin>>v2;
 	 	  cout<<"3º valor: ";
 	 	 cin>>v3;
	retornaCrescente(v1,v2,v3);
}
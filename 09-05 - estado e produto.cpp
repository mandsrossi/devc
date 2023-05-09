#include <iostream>
#include <locale.h>

using namespace std;

int codigo;
float valor_produto, valor_final;

int main ()
{

setlocale(LC_ALL,"portuguese");	

cout<<"Valor do produto: R$";
cin>>valor_produto;

cout<<"Código do estado (1 a 6): ";
cin>>codigo;

	switch (codigo) {
		
		case 1 : valor_final = valor_produto+(valor_produto*0.35); 
					break;
		case 2 : valor_final = valor_produto+(valor_produto*0.25); 
					break;				
		case 3 : valor_final = valor_produto+(valor_produto*0.15); 
					break;
		case 4 : valor_final = valor_produto+(valor_produto*0.10); 
					break;					
		case 5 : valor_final = valor_produto+(valor_produto*0.05); 
					break;					
		case 6 : valor_final=valor_produto;
					break;
		default : cout<<"Estado inválido!";
		
		}
  if (codigo>0 and codigo<7)
	cout<<"Valor final do produto: R$"<<valor_final;
}

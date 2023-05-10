#include <iostream>
#include <locale.h>

using namespace std;

int departamento, cor;
float valor1, valor2;

int main ()
{

setlocale(LC_ALL,"portuguese");	

cout<<"Qual valor do produto? R$";
cin>>valor1;

cout<<"Departamento (A. 1 | B. 2 | C. 3): ";
cin>>departamento;

cout<<"Cor da etiqueta (1. Azul | 2. Branca | 3. Verde | 4. Preta): ";
cin>>cor;

						
	if (departamento==1){
		switch (cor){
		case 1 : valor2 = valor1-valor1*0.06; cout<<"Valor final do produto com desconto: R$"<<valor2;
			break;
		case 2 : valor2 = valor1-valor1*0.07; cout<<"Valor final do produto com desconto: R$"<<valor2;
			break;	
		case 3 : valor2 = valor1-valor1*0.08; cout<<"Valor final do produto com desconto: R$"<<valor2;	
			break;
		case 4 : valor2 = valor1-valor1*0.09; cout<<"Valor final do produto com desconto: R$"<<valor2;		
			break;		
		default : cout<<"Código de etiqueta inválida!";			
					}
						}
							
	else if (departamento==2){
		switch (cor){
		case 1 : valor2 = valor1-valor1*0.063; cout<<"Valor final do produto com desconto: R$"<<valor2;
			break;
		case 2 : valor2 = valor1-valor1*0.074; cout<<"Valor final do produto com desconto: R$"<<valor2;
			break;	
		case 3 : valor2 = valor1-valor1*0.082; cout<<"Valor final do produto com desconto: R$"<<valor2;
			break;
		case 4 : valor2 = valor1-valor1*0.091; cout<<"Valor final do produto com desconto: R$"<<valor2;		
			break;
		default : cout<<"Código de etiqueta inválida!";							
					}
							}			

	else if (departamento==3){
		switch (cor){
		case 1 : valor2 = valor1-valor1*0.056; cout<<"Valor final do produto com desconto: R$"<<valor2;	
			break;
		case 2 : valor2 = valor1-valor1*0.067; cout<<"Valor final do produto com desconto: R$"<<valor2;	
			break;	
		case 3 : valor2 = valor1-valor1*0.078; cout<<"Valor final do produto com desconto: R$"<<valor2;	
			break;
		case 4 : valor2 = valor1-valor1*0.109; cout<<"Valor final do produto com desconto: R$"<<valor2;	
			break;		
		default : cout<<"Código de etiqueta inválida!";		
					
					}
							}
	else{
		cout<<"Departamento inválido!";
		}					
		

}

#include<iostream>
#include<locale.h>
using namespace std;

float ValorIPVA(float Valor, int Tipo)
{
	float IPVA;
	if (Tipo==1) //gasolina
	IPVA = Valor*0.04;
	else if (Tipo==2) //alcool
		IPVA = Valor*0.03;
		  else //diesel
		  IPVA = Valor*0.02;
		  return(IPVA);
}

int main ()

{
setlocale(LC_ALL,"portuguese");	
	
float valor, ipva;
int tipo;
	
	cout<<"Valor do automóvel: R$";
	cin>>valor;
	cout<<"Tipo do combustível (1-Gasolina | 2- Alcool | 3- Diesel): ";
	cin>>tipo;
	
	ipva = ValorIPVA(valor, tipo);
	cout<<"\nValor IPVA: R$"<<ipva;
	
}

#include <iostream>

using namespace std;

float real, tipo,cotacao,valor; //1-Dolar,2-Euro,3-Libra,4-Peso

int main ()
{

cout<<"Valor em real: R$";
cin>>real;

cout<<"Converter em (1-Dolar,2-Euro,3-Libra,4-Peso) :";
cin>>tipo;

if (tipo==1) //dolar
	{
	cout<<"\nCotacao em dolar:";
	cin>>cotacao;
	valor = real/cotacao;
	cout<<"\nDolar (es) ="<<valor;	
	}
	else if (tipo==2) //euro
	{
	cout<<"\nCotacao em Euro:";
	cin>>cotacao;
	valor = real/cotacao;
	cout<<"\nEuro (s) ="<<valor;				
	}
	else if (tipo==3) //libra
	{
	cout<<"\nCotacao em Libra:";
	cin>>cotacao;
	valor = real/cotacao;
	cout<<"\nLibra (s) ="<<valor;			
	}
	else  //Peso
	{
	cout<<"\nCotacao em Peso:";
	cin>>cotacao;
	valor = real/cotacao;
	cout<<"\nPeso (es) ="<<valor;	
	}
	
}

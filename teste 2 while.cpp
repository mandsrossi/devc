#include<iostream>
using namespace std;

int x, N;
float valor, soma=0;

int main ()
{
	cout<<"Quantidade de produtos: ";
	cin>>N;
	
	x=1;
	while (x<=N)
	{
		cout<<"Valor do produto"<<x << ": R$";
		cin>>valor;
		
		soma = soma + valor;
		x = x + 1;
		
	}
	cout<<"Total a pagar: R$"<<soma;
}

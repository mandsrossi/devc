#include<iostream>
using namespace std;

int x;
float valor, soma=0;

int main ()
{
valor=1;
x=0;

while (valor>0)
{
	cout<<"Valor do produto"<<x<<": R$";
	cin>>valor;
	
	soma=soma+valor;
	x=x+1;
}
	cout<<"Total a pagar: R$"<<soma;
	cout<<"\nQuantidade de produtos: "<< (x-1);
}

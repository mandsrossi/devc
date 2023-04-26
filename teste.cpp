#include <iostream>

using namespace std;

float plano, cons_gb, gasto, gb_excedido;

int main ()
{
	
cout<<"Total de Gigabytes consumidos:";
cin>>cons_gb;

cout<<"\nQual o plano? (1-Ouro, 2-Prata, 3-Bronze): ";
cin>>plano;

if (plano==1)
{
	gb_excedido = cons_gb-200;
	gasto=150+(gb_excedido*0.20);
	cout<<"\nGasto Total: R$ "<<gasto;
}
	else if (plano==2)
	{
	gb_excedido = cons_gb-100;
	gasto=100+(gb_excedido*0.30);
	cout<<"\nGasto Total: R$ "<<gasto;
}
		else
{
		gb_excedido = cons_gb-100;
		gasto=80+(gb_excedido*0.50);
		cout<<"\nGasto Total: R$ "<<gasto;
}	

}

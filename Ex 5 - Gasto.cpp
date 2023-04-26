#include <iostream>

using namespace std;

float plano, gb, gasto; //1-Ouro, 2-Prata, 3-Bronze

int main ()
{

cout<<"GB excedido: ";
cin>>gb;

cout<<"\nQual o plano? (1-Ouro, 2-Prata, 3-Bronze):";
cin>>plano;

if (plano==1)
{
gasto=150+(gb*0.20);
cout<<"\nGasto final: R$ "<<gasto;
}
	else if (plano==2)
		{
		gasto=100+(gb*0.30);
		cout<<"\nGasto final: R$"<<gasto;
		}
		   else 
		   {
		   	gasto=80+(gb*0,50);
		   	cout<<"\nGasto final: R$"<<gasto;
			   }	
	
}

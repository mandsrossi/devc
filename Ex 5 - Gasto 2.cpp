#include <iostream>

using namespace std;

float plano, gb, gb2, gasto; //1-Ouro, 2-Prata, 3-Bronze

int main ()
{

cout<<"Total de GB consumidos: ";
cin>>gb;

cout<<"\nQual o plano? (1-Ouro, 2-Prata, 3-Bronze):";
cin>>plano;

if (plano==1)
{
gb2=gb-200;
cout<<"GB excedido: "<<gb2;
gasto=150+(gb2*0,20);
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

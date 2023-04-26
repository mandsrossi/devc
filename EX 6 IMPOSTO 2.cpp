#include <iostream>
#include <locale.h>
using namespace std;


float imposto, valor, valorfinal;
int estado;

int main ()
{
setlocale(LC_ALL,"portuguese");	
	
	cout<<"Valor do produto: R$";
	cin>>valor;
	
	cout<<"Código do estado: ";
	cin>>estado;
	
	if (estado==1)
	{
	imposto=valor*0.35;
	cout<<"Valor do imposto: R$"<<imposto;
	}
		else if (estado==2)
			{
			imposto=valor*0.30;
			cout<<"Valor do imposto: R$";		
	}
	
}

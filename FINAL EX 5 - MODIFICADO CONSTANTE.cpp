#include <iostream>
#define OURO 150
#define PRATA 100
#define BRONZE 80
#define OUROFREE 200
#define PRATAFREE 150
#define BRONZEFREE 100
using namespace std;



float gbytes, conta;
int plano;

int main ()
{
	cout<<"Plano (1-Ouro, 2-Prata, 3-Bronze): ";
	cin>>plano;
	
	cout<<"Gbytes consumidos: ";
	cin>>gbytes;
	
	if (plano==1) //Ouro
		{
		conta=OURO;
			if (gbytes>OUROFREE)	
			conta= conta + (gbytes-OUROFREE)*0.20;
			//cout<<"Valor Conta: R$ "<<conta;
		}

			else if (plano==2) //Prata
			{
				conta=PRATA;
				if (gbytes>PRATAFREE)	
					conta= conta + (gbytes-PRATAFREE)*0.30;
				//	cout<<"Valor Conta: R$ "<<conta;
			}
				else //Bronze
				{
				conta=BRONZE;
					if (gbytes>BRONZEFREE)	
					conta= conta + (gbytes-BRONZEFREE)*0.50;
				//	cout<<"Valor Conta: R$ "<<conta;
				}
							cout<<"Valor Conta: R$ "<<conta;
}

#include <iostream>
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
		conta=150;
			if (gbytes>200)	
			conta= conta + (gbytes-200)*0.20;
		}

			else if (plano==2) //Prata
			{
				conta=100;
				if (gbytes>150)	
					conta= conta + (gbytes-150)*0.20;
			}
				else //Bronze
				conta=80;
					if (gbytes>100)	
					conta= conta + (gbytes-100)*0.20;
}

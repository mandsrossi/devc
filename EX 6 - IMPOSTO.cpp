#include <iostream>
#include <locale.h>
using namespace std;


float imposto;
int estado;

int main ()
{
setlocale(LC_ALL,"portuguese");
	
	cout<<"Codigo do estado: ";
	cin>>estado;
	
	if (estado==1)
	cout<<"Imposto é de 35% ";
		else if (estado==2)
			cout<<"Imposto é de 25%";
			 else if (estado==3)
			 		cout<<"Imposto é de 15%" 	;
			 	  else if (estado==4)
				   		cout<<"Imposto é de 10%";
				   		else if (estado=5)
				   				cout<<"Imposto é de 5%";
				   					else
				   					cout<<"Isento";

}	


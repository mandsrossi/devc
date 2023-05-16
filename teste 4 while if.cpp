#include<iostream>
using namespace std;

int x, sexo, contador1, contador2;

int main ()
{
contador1=0;
contador2=0;
x=1;
sexo=1;

	while(x<=5)
	{
	cout<<"\Sexo (1- Feminino | 2- Masculino): ";
	cin>>sexo;
	
	if (sexo==1)
	contador1 ++;  //contador1=contador1+1
	
	else
	contador2 ++; //contador2contador2+1
	
	x=x+1;
	}
	
	cout<<"\nTotal Feminino: "<<contador1;
	cout<<"\nTotal Masculino: "<<contador2;
}


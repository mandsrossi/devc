#include <iostream>
using namespace std;

int x;
float peso, soma=0;

int main ()
{
	x=1;
	
	while (x<=5)
	{
		cout<<"Peso "<<x<<":";
		cin>>peso;
		
		soma=soma+peso;
		x=x+1;
	}
	cout<<"\nPeso total: "<<soma<<" KG";

	if (peso<=400)
	cout<<"\nElevador suporta o peso!";
	
	else
	cout<<"\nExcesso de peso!";
}

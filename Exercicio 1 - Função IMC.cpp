#include <iostream>
using namespace std;

float CalculoIMC(float peso, float altura)
{
	float IMC;
	IMC= peso/(altura*altura);
	return(IMC);
}

int main ()
{

float peso, altura, IMC;

	cout<<"Peso: "	;cin>>peso;
	cout<<"Altura: ";cin>>altura;
	
IMC = CalculoIMC(peso, altura);
cout<<"\nIMC: "<<IMC;
	
}

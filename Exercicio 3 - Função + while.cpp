#include <iostream>
using namespace std;

float Calculo(float x)
{
	float F;
	F=2*(x*x)-(3*x)+5;
	return (F);
}

int main ()
{
float x, F;

	x=0;
	while(x<=10)	
	{
	F=Calculo(x);	
	cout<<"\nResultado: "<<F;
	x++;
	}
}


#include <iostream>
using namespace std;

float Converte(float F)
{
	float celsius;
	celsius = (5.0/9.0)*(F-32);
	return(celsius);
}

int main()
{
	float fahr, cel;
	
	fahr=0;
	while(fahr<=100)
	{
	cel = Converte(fahr);
	cout<<"\nTemperatura em celsius: "<<cel;
	fahr=fahr+5;
	}
}

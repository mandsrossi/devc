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
	
	cout<<"Temperatura Fahreinheit: ";
	cin>>fahr;
	
cel = Converte(fahr);
cout<<"\nTemperatura em celsius: "<<cel;
	
}

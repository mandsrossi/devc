#include<iostream>
#include<math.h>
using namespace std;

float Hipotenusa(float l1, float l2)
{
	float H;
	H = sqrt(l1*l1 + l2*l2);
	return(H);
}	

int main()
{
float lado1, lado2, hipo;

	cout<<"Lado 1: ";cin>>lado1;
	cout<<"Lado 2: ";cin>>lado2;	
	
	hipo = Hipotenusa(lado1, lado2);
	cout<<"\nHipotenusa: "<<hipo;
}

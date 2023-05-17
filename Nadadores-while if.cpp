#include<iostream>
using namespace std;

int x, idade, infantil, juvenil, adulto;

int main ()
{
infantil=0;
juvenil=0;
adulto=0;
x=1;

while(x<=10)
{
	cout<<"Idade do nadador "<<x<<": ";
	cin>>idade;
	
	if (idade<=14)
	infantil ++;
	else if (idade>=14 and idade<18)
	juvenil ++;
	else
	adulto ++;
	
	x=x+1;
}
	cout<<"\nTotal de nadadores adulto: "<<adulto;
	cout<<"\nTotal de nadadores juvenil: "<<juvenil;
	cout<<"\nTotal de nadadores infantil: "<<infantil;
}

#include<iostream>
using namespace std;

int x, idade, cont1, cont2, cont3;

int main ()
{
cont1=0;
cont2=0;
cont3=0;
x=1;

while(x<=10)
{
	cout<<"Idade do nadador"<<x<<" :";
	cin>>idade;
	
	if (idade>=18)
	cont1 ++;
	else if (idade>=14 and idade<18)
	cont2 ++;
	else
	cont3 ++;
	
	x=x+1;
}
	cout<<"\nTotal de nadadores adulto: "<<cont1;
	cout<<"\nTotal de nadadores juvenil: "<<cont2;
	cout<<"\nTotal de nadadores infantil: "<<cont3;
}

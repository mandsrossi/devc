#include<iostream>
using namespace std;

int x, cont=0;
float media;

int main ()
{
x=1;
while (x<=5)
{
	cout<<"\nMedia: ";
	cin>>media;
	
	if (media>=6)
	cont=cont+1; 
	
	x=x+1;
}
	cout<<"\nTotal de aprovados: "<<cont;
}

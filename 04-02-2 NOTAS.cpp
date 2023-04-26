#include <iostream>

using namespace std;

float nota1, nota2, media;

int main (){
	cout<<"Nota 1: ";
	cin>>nota1;
	cout<<"Nota 2: ";
	cin>>nota2;
	media=(nota1+nota2)/2;
	cout<<"Media= "<<media;
	
	if (media>=6)
	cout<<"\nAprovado";	
	else
	cout<<"\nReprovado";
	
	}

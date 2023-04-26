#include <iostream>

using namespace std;

float nota1, nota2, nota3, media;

int main ()

{
cout<<"Nota 1: ";
cin>>nota1;

cout<<"Nota 2: ";
cin>>nota2;

cout<<"Nota 3: ";
cin>>nota3;

media=(nota1+nota2+nota3)/3;
cout<<"\nMedia= "<<media;

if (media<4)
cout<<"\nREPROVADO";
else if (media<6)
            cout<<"\nEXAME";
        else 
		    cout<<"\nAPROVADO";
	
}

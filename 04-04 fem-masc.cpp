#include <iostream>
#include <locale.h>

using namespace std;

float altura, pesoideal;
int sexo;

int main () 
{
	
cout<<"Altura: ";
cin>>altura;
	
cout<<"Sexo (1-Feminino, 2-Masculino)";
cin>>sexo;
	
if(sexo==1)
	pesoideal=62.1*altura-44.7;
else
	pesoideal=72.7*altura-58;
	
cout<<"Peso ideal: "<<pesoideal;
}

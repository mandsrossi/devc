#include <iostream>
#include <locale.h>

using namespace std;

float peso, altura, imc;

int main()
{
setlocale(LC_ALL,"portuguese");

cout<<"Peso: ";
cin>>peso;
cout<<"Altura: ";
cin>>altura;

imc=peso/(altura*altura);

if (imc<22)
cout<<"MAGRO";
else if (imc>=22 and imc<=26)
          cout<<"NORMAL";
     else if (imc>=26 and imc<=30)    
              cout<<"ACIMA DO PESO";
          else
		  cout<<"OBESO"    ;
	
}

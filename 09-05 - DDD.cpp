#include <iostream>
#include <locale.h>
using namespace std;

int DDD;

int main ()
{

setlocale(LC_ALL,"portuguese");	
	
cout<<"Digite o DDD: ";
cin>>DDD;

	switch (DDD) {
		case 14 : cout<<"Jau";
					break;
		case 16 : cout<<"Araraquara";
					break;
		case 17 : cout<<"S�o Jos� do Rio Preto";
					break;
		case 11 : cout<<"S�o Paulo";
					break;
		default : cout<<"DDD inv�lido";
	}
	
}

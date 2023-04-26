#include <iostream>
#include <locale.h>

using namespace std;

float valor, valorfinal;
int tipo;

int main(){
	
	cout<<"Valor: R$";
	cin>>valor;
	
	cout<<"Tipo (1-Nacional, 2-Importado):";
	cin>>tipo;
	
	if (tipo==1)
	valorfinal=valor+0.05*valor;
	else
	valorfinal=valor*0.10*valor;
	
	cout<<"Valor com impostos: R$"<<valorfinal;
	
}

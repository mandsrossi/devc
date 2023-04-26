#include <iostream>

using namespace std;

float area, valortotal, lado1, lado2, valorm2;

int main(){
	
	cout<<"Qual medida do lado1:";
	cin>>lado1;
	cout<<"Qual medida do lado2:";
	cin>>lado2;
	cout<<"Qual o valor do M2? R$";
	cin>>valorm2;
	
	area=lado1*lado2;
	
	valortotal=area*valorm2;
	
	cout<<"Area total do terreno: "<<area;
	cout<<endl<<"Valor do terreno: R$"<<valortotal;
	
}

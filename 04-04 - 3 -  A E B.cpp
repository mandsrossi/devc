#include <iostream>
#include<locale.h>

using namespace std;

float A, B;

int main (){

setlocale(LC_ALL,"portuguese");
	cout<<"Valor A:";
	cin>>A;
	cout<<"Valor B:";
	cin>>B;
	
	if (A>B)	
	cout<<"A � maior que B";
	else
	cout<<"B � maior que A";
	
}


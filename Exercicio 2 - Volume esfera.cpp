#include<iostream>
#include<math.h>

using namespace std; 

float Volume(float raio)
{
	float V;
	V=(4.0/3.0)*3.1415*pow(raio, 3);
	return(V);	
}

int main()

{
float R, Vol;
	
	cout<<"Raio: ";
	cin>>R;
	
	Vol = Volume(R);
	cout<<"Volume: "<<Vol;
	
}

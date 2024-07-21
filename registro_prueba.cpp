//Prueba del uso fork_Ronald-Huaman
#include <iostream>
#include <string>
using namespace std;
struct persona{
	string name;
	int edad;
	string pasaTiempo;
}persona[1000];

int main (){
	int n;
	cout<<"ingrese el numero de personas:";
	cin>>n;
	for (int i=0; i<n; i++){
		cout<<"--DATOS DE LA PERSONA N°"<<i+1<<"--"<<endl;
		cout<<"\n==>Ingrese su nombre:";
		cin>>persona[i].name;
		cout<<"==>Ingrese su edad:";
		cin>>persona[i].edad;
		cout<<"==>Ingrese el pasatiempo:";
		cin>>persona[i].pasaTiempo;
		cout<<"\n";
	}
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main(){

	int num1,may=0,men=9999999,suma=0;

	cout<<"Cantidad de numeros a ingresar: ";
	cin >>num1;

	vector<int> numeros(num1);

	for (int i = 0; i < num1; i++){
		cout<<"Ingrese un numero: ";
		cin >>numeros[i];
	}

	for (int i=0;i<num1;i++){
		if(numeros[i]>may)
			may = numeros[i];
		if(numeros[i]<men)
			men=numeros[i];
		suma=suma+numeros[i];  
	}

	int med=suma/num1;

	cout << "mayor: " << may << "\n";
	cout << "menor: " << men << "\n";
	cout << "media: " << med << "\n";

}
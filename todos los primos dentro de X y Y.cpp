//Escriba un código que solicite ingresar dos números � y �, tal que � < �. Muestre
//todos los números primos que se encuentren entre el rango de valores, de no
//encontrarse, mostrar el primo más cercano a � o �.

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,total;
	cout<<"ingrese el rango menor X: "; cin>>n;
	cout<<"ingrese el rango menor Y: "; cin>>total;
	for(int i=n;i<total;i++){
		int cont=0;
		for(int x=2;x<=i/2;x++){
			if(i%x==0){
				cont++;
			}
		}
		if(cont<1){
			cout<<i<<" ";
		}
	}
	getch();
	return 0;
}
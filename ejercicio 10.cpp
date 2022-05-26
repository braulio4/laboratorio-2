//Escribir un programa que pida al usuario una palabra y luego muestre por pantalla
//una a una las letras de la palabra introducida empezando por la última.
#include<iostream>
#include<conio.h>
#include <string.h>
using namespace std;
int main(){
	string palabra;
	int x;
	cout<<"ingresa una palabra: "; cin>>palabra;
	x=palabra.length();
	for(int i=x;i>=0;i--){
		cout<<palabra[i];
	}
	getch();
	return 0;
}
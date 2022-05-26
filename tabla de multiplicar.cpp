//  8 Escribir un programa que genere la tabla de multiplicar de un número introducido por 
//el teclado.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num1,mult;
	cout<<"ingrese un numero para sacar su tabla de multiplicar"; cin>>num1;
	for(int i=1;i<=12;i++){
		mult=num1*i;
		cout<<num1<<" * "<<i<<" = "<<mult<<endl;
	}
	getch();
	return 0;
}
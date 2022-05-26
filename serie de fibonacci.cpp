//6  Elabore un programa que calcule la serie de Fibonacci
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num1,ant=0,act=1,aux=0;
	cout<<"ingrese el numero: "; cin>>num1;
	for(int i=0;i<=num1;i++){
		aux=ant;
		ant=act;
		act=ant+aux;
		cout<<aux<<" ";
	}
	
	getch();
	return 0;
} 
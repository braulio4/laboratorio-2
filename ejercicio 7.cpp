#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n1,n2,n3,n,i=1;
	cout<<"cuantos alumnos son: "; cin>>n;
	while(n>0){
		cout<<"INGRESA NOTAS PARA EL ALUMNO "<<i<<endl;
		cout<<"ingrese nota 1: "; cin>>n1;
		cout<<"ingrese nota 2: "; cin>>n2;
		cout<<"ingrese nota 3: "; cin>>n3;
		int promedio=(n1+n2+n3)/3;
		cout<<endl;
		cout<<"el promedio es: "<<promedio<<endl;
		n--;
		i++;
	}
	
	getch();
	return 0;
}
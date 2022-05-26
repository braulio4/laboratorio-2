#include <iostream>
using namespace std;
int main(){
	int num1;
	cout <<"ingrese la altura: ";
	cin >> num1;

	for(int i=1; i<=num1; i++){
		for(int j=1;j<=i;j++){
		cout<<"*";
		}
	cout<<endl;
	}

}
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int sum = 0;
	for (int i = 2; i < 100; i+=2){
		sum = sum + i;
	}
	cout<<sum<<"\n";
	getch();
}
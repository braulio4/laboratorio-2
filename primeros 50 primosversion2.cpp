#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n=3000,total=0;
	for(int i=1;i<=n;i++){
		int cont=0;
		for(int x=2;x<=i/2;x++){
			if(i%x==0){
				cont++;
			}
		}
		if(cont<1){
			total++;
		}
		if(cont<1){
			if(total<=50){
			cout<<i<<" ";
			}
		}
	}
	getch();
	return 0;
}
//factorial de un numero
#include<iostream>

using namespace std;

int factorialA(int);
void factorial();

int main(){
	factorial();
	return 0;
}
int factorialA(int a){
	int i=1,
	r=1;
	do{
		r=r*i;
		i++;
	}while(i<=a);
	return r;
}
void factorial(){
	int n1,fac;
	do{
		cout<<"introduzca un numero:"<<endl;
		cin>> n1;
	}while(n1<0);
	
	fac= factorialA(n1);
	cout<<"El "<<n1<<"!"<<"es:"<<fac<<endl;
}

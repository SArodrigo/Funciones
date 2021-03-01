//ver que numero es mayor
#include<iostream>

using namespace std;

void max(int,int);

int main(){
	int n1, n2;
	cout << "Introduce el primer numero:"<< endl;
	cin >> n1;
	cout << "Introduce el segundo numero:"<< endl;
	cin >> n2;
	max(n1,n2);
	return 0;
}
void max(int a,int b){
	if(a>b){
		cout<< a << " es mayor\n"<< endl;
	}
	else if(a<b){
		cout<< b << " es mayor\n"<< endl;
	}
	else
	    cout<<"Error \n"<< endl;
}

#include<iostream>

using namespace std;

int max(int,int);
void mayor();

int main(){
	mayor();
	return 0;
}
int max(int pa, int pb){
	int c;
	if(pa>pb){
		c=pa;
	}else{
		c=pb;
	}
	return c;
}
void mayor(){
	int n1, n2, n3,max1;
	cout << "Introduce el primer numero:"<< endl;
	cin >> n1;
	cout << "Introduce el segundo numero:"<< endl;
	cin >> n2;
	cout << "Introduce el tercer numero:"<< endl;
	cin >> n3;
	 max1= max(max(n1,n2),n3);
	cout << "el numero mayor es:\n"<< max2 << endl;
}

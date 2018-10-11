#include<iostream>

using namespace std;


int ingdato(int x){
	cout<<"Ingrese un numero: ";
	cin>>x;
	return x;
}

int sumar(int a, int b){
	int x;
	x=a+b;
		return x;
}

void mostrar (int x){
	cout<<"El resultado es: ";
	cout<<endl<<x<<endl;
}

int dato(int &c){
	c++;
	cout<<"El resultado es: ";
	cout<<endl<<c<<endl;
}

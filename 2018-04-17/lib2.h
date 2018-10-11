#include<iostream>

using namespace std;

void fr (int &n){
	n+=5;
	cout<<"Ref: "<<n<<endl;
}

void fv (int n){
	n+=5;
	cout<<"Valor: "<<n<<endl;
}

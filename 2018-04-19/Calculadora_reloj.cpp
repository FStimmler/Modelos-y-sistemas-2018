#include"Calculadora_reloj_lib.h"

using namespace std;

	
void sumar (int &h,int &m,int &s){

	while(s>=60){
		s=s-60;
		m++;
	}
	
	while(m>=60){
		m=m-60;
		h++;
	}
	
}

void mostrar_hora(int h,int m,int s){
	
	cout<<h<<":";
	if(m<10)
		cout<<"0"<<m<<":";
	else
		cout<<m<<":";
		
	if(s<10)	
		cout<<"0"<<s;
	else
		cout<<s;
}



void mostrar(int &x){


	if(x==0){
	cout<<"Hora actual: ";
	}
	if(x==1){
		cout<<"\n\nIngrese cuantos segundos quiere sumar: ";
	}
	if(x==2){	
		cout<<"\n\nHora modificada: ";
	}
	x++;
}

void ingresar_segundos_a_sumar(int &s){
	int si;
	cin>>si;
	s+=si;

}

void pausa(){
	cin.get();
	cin.get();
}

void ingresar_hora(int &h, int &m, int &s){
	cout<<"Hora: ";
	cin>>h;
	cout<<"\nMinutos: ";
	cin>>m;
	cout<<"\nSegundos: ";
	cin>>s;
	system("cls");
}



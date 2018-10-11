#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std; 

struct fecha{
	int dia,mes,anio;
};

void imp_fecha(fecha *fecha1);
fecha *c_fecha0();


int main(){
	fecha *fecha1=c_fecha0();
	imp_fecha(fecha1);
	fecha *fecha2=c_fecha0();
	imp_fecha(fecha2);
	free(fecha1);	
}


void imp_fecha(fecha *fecha1){
	cout<<"\n Dia: "<<fecha1->dia<<fecha1->mes<<fecha1->anio;
}



fecha *c_fecha0(){
	fecha *n_fecha=(fecha*)malloc(sizeof(fecha));
	fflush(stdin);
	cout<<"Ingrese dia: ";
	cin>>n_fecha->dia;
	fflush(stdin);
	cout<<"Ingrese mes: ";
	cin>>n_fecha->mes;
	fflush(stdin);
	cout<<"Ingrese año: ";
	cin>>n_fecha->anio;
	fflush(stdin);
	
	return n_fecha;
	 
}






#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;



struct nodo{
	int dato;
	nodo *siguiente;
	nodo *antiguo;
};

void agregarpila(nodo *&, int);
void mostrarpila(nodo *);
void eliminarpila(nodo *);
void menu();

nodo *pila=NULL;

int main(){
	menu();
	cin.get();
	cin.get();
}

void agregarpila(nodo *&pila, int n){
	nodo *nuevo_nodo = new nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	nuevo_nodo->antiguo=pila;
	pila= nuevo_nodo;
	cout<<"\t Se a ingresado "<<n<<" a la pila";
	
	cin.get();
	cin.get();
	system("cls");
}

void mostrarpila (nodo *pila){
	nodo *mostrar = new nodo();
	mostrar = pila;
	
	while (mostrar !=NULL){
		cout<<mostrar->dato<<" , ";
		mostrar = mostrar->siguiente;
	}
	
	cin.get();
	cin.get();
	system("cls");
	
}

void eliminarpila(nodo *pila){
	nodo *eliminar = new nodo();
	eliminar = pila;
	eliminar->dato=NULL;
	eliminar->siguiente=eliminar->antiguo;
	cout<<"eliminacion exitosa";
	cin.get();
	cin.get();
	system("cls");
}


void menu(){
	int opcion;
	int dato;
	
	cout<<"\t menu"
	<<"\n1. Ingrese un numero"
	<<"\n2. Mostrar datos de pila"
	<<"\n3. Eliminar"
	<<"\nOpcion: ";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<"\nEscriba un numero: ";
			cin>>dato;
			agregarpila(pila,dato);
			menu();
		break;
		case 2:
			mostrarpila(pila);
			menu();
		break;
		case 3:
			eliminarpila(pila);
			menu();
		break;	
	}
}

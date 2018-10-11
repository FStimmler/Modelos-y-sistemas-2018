#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<stdio.h>
using namespace std; 

struct nodo{
	int num;
	int num2;
	nodo *pans;
};

nodo *pnodo;

nodo *nuevoelemento(){
	nodo *q=(nodo*)malloc(sizeof(nodo));
	return q;
}

void ingdato(int dato,int dato2){
	do{
		cout<<"ing Dato1: ";cin>>dato;
		if(dato==-1){
			return;
		}
		cout<<"ing Dato2: ";cin>>dato2; 
		nodo *nodotemp =nuevoelemento();
	
		nodotemp->pans=pnodo;
		nodotemp->num=dato;
		nodotemp->num2=dato2;
		cout<<"\nDato 1: "<<nodotemp->num;
		cout<<"\nDato 2: "<<nodotemp->num2<<"\n\n";
		pnodo=nodotemp;
	}while(dato!=-1);
	
	
}



void eliminarn(){
	nodo *p;
	int x, j;
	while (pnodo!=NULL){
		x=pnodo->num;
		p=pnodo;
		pnodo=pnodo->pans;
		free(p);
		while(pnodo!=NULL){
		cout<<pnodo<<" "<<pnodo->num<<" "<<pnodo->num2<<endl;
		pnodo=pnodo->pans;
		}
			cout<<"---------------------------------------------\n";
	}
}

void imprimi(){
	nodo *t=pnodo;
	while(pnodo!=NULL){
		cout<<pnodo<<" "<<pnodo->num<<" "<<pnodo->num2<<endl;
		pnodo=pnodo->pans;
	}
	pnodo=t;
}

int main(){
int dato;
int dato2;

ingdato(dato, dato2);
system("cls");
imprimi();
cin.get();
cin.get();
eliminarn();
//system("cls");
imprimi();
system("pause");




}

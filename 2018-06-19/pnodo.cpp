#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std; 

struct nodo{
	int num;
	nodo *pans;
};

nodo *pnodo=NULL;

nodo *nuevoelemento(){
	nodo *q=(nodo*)malloc(sizeof(nodo));
	return q;
}

void ingdato(int dato){
	do{
		cout<<"ing dato: ";cin>>dato;
		if(dato==-1){
			return;
		}
		nodo *nodotemp =nuevoelemento();
	
		nodotemp->pans=pnodo;
		cout<<nodotemp->pans;
		nodotemp->num=dato;
		cout<<nodotemp->num;
		pnodo=nodotemp;
	}while(dato!=-1);
	
	
}



void eliminarn(){
	nodo *p;
	int x, j;
	if (pnodo!=NULL){
		x=pnodo->num;
		p=pnodo;
		pnodo=pnodo->pans;
		free(p);
	}
}

void imprimi(){
	while(pnodo!=NULL){
		cout<<pnodo<<" "<<pnodo->num<<endl;
		pnodo=pnodo->pans;
	}
}

int main(){
int dato;

ingdato(dato);
system("cls");
imprimi();
system("pause");
eliminarn();
system("cls");
imprimi();
system("pause");




}

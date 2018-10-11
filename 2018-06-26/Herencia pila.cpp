#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std; 

typedef struct {
	
	int dni;
	int edad;
	char nombre[50];
	char apellido[50];

}Persona;


typedef struct {
	
	Persona _persona;
	int curso;
	char escuela[50];
	alumno *_alumno;
}alumno;


nodo *nuevoelemento(){
	nodo *q=(_alumno*)malloc(sizeof(_alumno));
	return q;
}

void carga(Alumno *_alumno, int cont){
for(int i=0;i<cont;i++){
		system("cls");
		cout<<"\tIngresando alumno #"<<i+1<<endl<<endl;
		cout<<"DNI: ";cin>>_alumno._persona.dni;
		nodo *nodotemp =nuevoelemento();
		nodotemp->pans=pnodo;
		nodotemp->num=dato;
		pnodo=nodotemp;
		fflush(stdin);
		/*cout<<"Edad: ";cin>>_alumno[i]._persona.edad;
		fflush(stdin);
		cout<<"Nombre: ";
		fflush(stdin);
		cin>>_alumno[i]._persona.nombre;
		
		cout<<"Apellido: ";
		fflush(stdin);
		cin>>_alumno[i]._persona.apellido;*/
		cout<<"Curso: ";cin>>_alumno[i].curso;
			nodo *nodotemp =nuevoelemento();
		nodotemp->pans=pnodo;
		nodotemp->num=dato;
		pnodo=nodotemp;                                                                    
		fflush(stdin);
		/*cout<<"Escuela: ";
		fflush(stdin);
		gets(_alumno[i].escuela);*/
		
	}
}
void mostrar(Alumno *_alumno, int cont){
	for(int i=0;i<cont;i++){
		system("cls");
		if(i%2!=0)cout<<"\n";
		cout<<"\tAlumno #"<<i+1<<endl<<endl;
		cout<<"DNI: "<<_alumno[i]._persona->dni<<"\n";
		cout<<"Curso: "<<_alumno[i]->curso<<"\n";
		system("pause");
	}
}
int main(){


int cont;


cout<<"¿Cuantos alumnos va a ingresar?:  ";
cin>>cont;
_alumno=(Alumno*) malloc (cont*sizeof(Alumno));

carga( _alumno, cont);
mostrar( _alumno, cont);
}


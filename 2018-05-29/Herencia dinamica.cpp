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
}Alumno;


void carga(Alumno *_alumno, int cont);
void mostrar(Alumno *_alumno, int cont);
void mover(Alumno *_alumno, int cont);
void mover(Alumno *_alumno, int cont);


int main(){


int cont;

Alumno *_alumno;
cout<<"¿Cuantos alumnos va a ingresar?:  ";
cin>>cont;
_alumno=(Alumno*) malloc (cont*sizeof(Alumno));

carga( _alumno, cont);
mostrar( _alumno, cont);
mover( _alumno, cont);
mostrar( _alumno, cont);

	

}

void carga(Alumno *_alumno, int cont){
	
	for(int i=0;i<cont;i++){
		system("cls");
		cout<<"\tIngresando alumno #"<<i+1<<endl<<endl;
		cout<<"DNI: ";cin>>_alumno[i]._persona.dni;
		fflush(stdin);
		cout<<"Edad: ";cin>>_alumno[i]._persona.edad;
		fflush(stdin);
		cout<<"Nombre: ";
		fflush(stdin);
		cin>>_alumno[i]._persona.nombre;
		
		cout<<"Apellido: ";
		fflush(stdin);
		cin>>_alumno[i]._persona.apellido;
		cout<<"Curso: ";cin>>_alumno[i].curso;
		fflush(stdin);
		cout<<"Escuela: ";
		fflush(stdin);
		gets(_alumno[i].escuela);
		
	}
}

void mostrar(Alumno *_alumno, int cont){
	for(int i=0;i<cont;i++){
		system("cls");
		if(i%2!=0)cout<<"\n";
		cout<<"\tAlumno #"<<i+1<<endl<<endl;
		cout<<"DNI: "<<_alumno[i]._persona.dni<<"\n";
		cout<<"Edad: "<<_alumno[i]._persona.edad<<"\n";
		cout<<"Nombre: "<<_alumno[i]._persona.nombre<<"\n";
		cout<<"Apellido: "<<_alumno[i]._persona.apellido<<"\n";
		cout<<"Curso: "<<_alumno[i].curso<<"\n";
		cout<<"Escuela: "<<_alumno[i].escuela<<"\n";
		system("pause");
	}
}

void mover(Alumno *_alumno, int cont){
	for(int i=0;i<cont;i++){
		_alumno[i]=_alumno[i+1];
	}
	
		
		
	
		_alumno[cont-1]._persona.dni=0;
		_alumno[cont-1]._persona.edad=NULL;
	
	
	
		strcpy(_alumno[cont-1]._persona.nombre," ");
		

		strcpy(_alumno[cont-1]._persona.apellido," ");

	
		strcpy(_alumno[cont-1].escuela," ");
}


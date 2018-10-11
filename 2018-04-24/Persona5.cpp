#include<iostream>

using namespace std;

struct Persona{
	
	int dni;
	int edad;
	string nombre;
	string apellido;

};


struct Alumno{
	
	Persona persona2;
	int curso;
	string escuela;	
};



int main(){

//Persona *persona1= new Persona[30]; 
//Persona Persona1;
Alumno alumno1;
	

		
alumno1->persona2.dni=42621342;
alumno1.persona2.edad=19;
alumno1.persona2.apellido="Gomez";
alumno1.curso=6;
alumno1.escuela="EEST_N 2";



cout<<"Apellido: "<<alumno1.persona2.apellido<<"\nEdad: "<<alumno1.persona2.edad<<"\nDNI: "<<alumno1.persona2.dni<<"\nCurso: "<<alumno1.curso<<"\nEscuela: "<<alumno1.escuela;

	
	
	
}
	

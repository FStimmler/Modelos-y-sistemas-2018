#include"Calculadora_reloj_lib.h"


int main(){
	int h,m,s,x;
	
	x=0;
	
	
	
	ingresar_hora(h,m,s);
	mostrar(x);
	mostrar_hora(h,m,s);
	mostrar(x);	
	ingresar_segundos_a_sumar(s);
	sumar(h,m,s);
	mostrar(x);
	mostrar_hora(h,m,s);
	pausa();
} 


	

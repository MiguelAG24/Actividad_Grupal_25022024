#include <iostream>
using namespace std;
class Persona{
	//atributos
	protected : string nombres, apellidos, direccion, fecha_nacimiento;
				int telefono;
	protected : 
			Persona (){
			}
			Persona(string nom, string ape, string dir, string fechaN, int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				fecha_nacimiento = fechaN;
				telefono = tel;
			}
	//metodos
	void crear();
	void leer();
	void actualizar();
	void borrar();		
};

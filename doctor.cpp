/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   doctor.cpp
 * Author: Maria Salas
 * 
 * Created on 7 de septiembre de 2019, 17:32
 */

/* 
 * Universidad Nacional 
 * Escuela de Informatica
 * EIF 201-Programacion 1
 * Estudiante: Maria Amalia Salas Gonzalez
 * Profesora: Jennifer Fuentes Bustos
 * Grupo: 05
 * Primer Proyecto
 */

#include <sstream>
using std::stringstream;

#include "doctor.h"

doctor::doctor(string nombre, string apellido, string cedula, string especialidad, string disponibilidad):
        nombre(nombre),
        apellido(apellido),
        cedula(cedula),
        especialidad(especialidad),
        disponibilidad(disponibilidad),pacientesAtendidos(new arregloPaciente()){
}

void doctor::setNombre(string nombre){
    this->nombre = nombre;
}
string doctor::getNombre(){
    return nombre;
}

void doctor::setApellido(string apellido){
    this->apellido = apellido;
}
string doctor::getApellido(){
    return apellido;
}

void doctor::setCedula(string cedula){
    this->cedula = cedula;
}
string doctor::getCedula(){
    return cedula;
}

void doctor::setEspecialidad(string especialidad){
    this->especialidad = especialidad;
}
string doctor::getEspecialidad(){
    return especialidad;
}

void doctor::setDisponibilidad(string disponibilidad){
    this->disponibilidad = disponibilidad;
}
string doctor::getDisponibilidad(){
    return disponibilidad;
}

/*
 *Objetivo: 
 *Parametros que recibe: 
 *Valor devuelto: 
 */
string doctor::informePaciente() const{
    return "";
}


/*
 *Objetivo: 
 *Parametros que recibe: 
 *Valor devuelto: 
 */
string doctor::visualizarEspecialidad() const{
    stringstream s;
	//s << endl;
//        int  k;
//	for (int i=0; i<k; i++) {
//		if (especialidad[i] != NULL) {
//		s << "[X]";
//		}
//		else
//		s << "[0]";
//		}
		//s << endl;
	return s.str();
}


/*
 *Objetivo: 
 *Parametros que recibe: 
 *Valor devuelto: 
 */
void doctor::insertarPac(paciente* pac){
    pacientesAtendidos->incluir(pac);
	
}



/*
*Objetivo: Mostrar los pacientes con los espacios ocupado y disponibles
*Parametros que recibe: no tiene
*Valor devuelto: 
*/
string doctor::visualizarPac() {
	stringstream s;
//	//s << endl;
//        int  k;
//	for (int i=0; i<k; i++) {
//		if (pacientes[i] != NULL) {
//		s << "[X]";
//		}
//		else
//		s << "[0]";
//		}
//		//s << endl;
	return s.str();
}

/*
 *Objetivo: 
 *Parametros 
 *Valor devuelto: 
 */
bool doctor::eliminaPac(int i){
//	if(pacientes[i] == NULL){
//	    return false;
//	}
//	    else{
//	pacientes[i] = NULL;
//	return true;
//	}
    return true;
}

/*
 *Objetivo: 
 *Parametros que recibe: 
 *Valor devuelto: 
 */
string doctor::toString()const{
   stringstream s;
   s<<"D A T O S  D E  D O C T O R "<<"\n";
   s<<"\n";
   s<<"Nombre: "<<nombre<<"\n";
   s<<"Apellido: "<<apellido<<"\n";
   s<<"Cedula: "<<cedula<<"\n";
   s<<"Especialidad: "<<especialidad<<"\n";
   s<<"Disponibilidad: "<<disponibilidad<<"\n";
   return s.str();   
}


doctor::~doctor() {
}


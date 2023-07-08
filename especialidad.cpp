/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   especialidad.cpp
 * Author: Maria Salas
 * 
 * Created on 31 de agosto de 2019, 14:31
 */

/* 
 * Universidad Nacional 
 * Escuela de Informatica
 * EIF 201-Programacion 1
 * Estudiante: Maria Amalia Salas Gonzalez
 * Profesora: Jennifer Fuentes Bustos
 * Grupo:
 * Primer Proyecto
 */

#include <sstream>
using std::stringstream;

#include "especialidad.h"

especialidad::especialidad(string nombre):
        nombre(nombre){
}


void especialidad::setNombre(string nombre) {
	this->nombre = nombre;
}
string especialidad::getNombre() {
	return nombre;
}

  
/*
 *Objetivo: 
 *Parametros que recibe: 
 *Valor devuelto: 
 */
string especialidad::toString()const{
   stringstream s;
   s<<"D A T O S  D E  E S P E C I A L I D A D "<<"\n";
   s<<"\n";
   s<<"La especialidad es: "<<nombre<<"\n";
   return s.str();   
}

/*
 *Objetivo: 
 *Parametros que recibe: 
 *Valor devuelto: 
 */
especialidad::~especialidad() {
}  
    
    
    
    
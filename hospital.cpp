/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   hospital.cpp
 * Author: Maria Salas
 * 
 * Created on 9 de septiembre de 2019, 09:20
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

#include "hospital.h"

hospital::hospital():coleccionDePaciente(new arregloPaciente()), coleccionDeDoctor(new arregloDoctor()), 
coleccionDePabellon(new arregloPabellon()), coleccionDeCama(new arregloCama()),
coleccionDeEspecialidad(new arregloEspecialidad()){
}

/*
*Objetivo: 
*Parametros que recibe:
*Valor devuelto: 
*/
void hospital::incluirPaciente(paciente* p){
    coleccionDePaciente->incluir(p);
}


/*
*Objetivo: 
*Parametros que recibe:
*Valor devuelto: 
*/
void hospital::incluirDoctor(doctor* d){
    coleccionDeDoctor->incluir(d);
} 


/*
*Objetivo: 
*Parametros que recibe:
*Valor devuelto: 
*/
void hospital::incluirPabellon(pabellon* pb){
    coleccionDePabellon->incluir(pb);
}

/*
*Objetivo: 
*Parametros que recibe:
*Valor devuelto: 
*/
hospital::~hospital() {
    delete coleccionDePaciente;
    delete coleccionDeDoctor;
    delete coleccionDePabellon;
    delete coleccionDeCama;
    delete coleccionDeEspecialidad;
}

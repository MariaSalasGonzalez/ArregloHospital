/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pabellon.cpp
 * Author: Maria Salas
 * 
 * Created on 7 de septiembre de 2019, 14:04
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
#include <cstdlib>

using std::stringstream;

#include "pabellon.h"

class cama;
class pabellon;
class arregloPabellon; 

pabellon::pabellon(char letra, bool genero):
       letra(letra), genero(genero){
}

void pabellon::setLetra(char letra){
    this->letra = letra;
}
char pabellon::getLetra(){
    return letra;
}

void pabellon::setGenero(bool genero){
    this->genero = genero;
}
bool pabellon::getGenero(){
    return genero;
}


/*
 *Objetivo: Designar un objeto cama a un espacio libre de la matriz
 *Parametros que recibe: Un objeto cama atraves de un puntero
 *Valor devuelto: Un true si el objeto fue asignado y false del caso contrario 
 */
bool pabellon::insertarCam(cama* cam) {
     pacientesAtendidos->incluir(cam);	
}



/*
 *Objetivo: 
 *Parametros 
 *Valor devuelto: 
 */
string pabellon::toString() const{
    stringstream s;
    s<<" D A T O S  D E  P A B E L L O N "<<"\n";
    s<<"\n";
    s<<"La letra de este pabellon es :"<<"\n";
    s<<"El genero de este pabellon es :"<<"\n";
    return s.str();
} 


/*
 *Objetivo: 
 *Parametros 
 *Valor devuelto: 
 */
pabellon::~pabellon() {
    
}

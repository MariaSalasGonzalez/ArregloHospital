/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloCama.cpp
 * Author: Maria Salas
 * 
 * Created on 6 de septiembre de 2019, 17:13
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
using std::string;

#include "arregloCama.h"

class cama;
class pabellon;
class arregloPabellon; 

arregloCama::arregloCama(): n(200), k(0) {
    for(int i=0; i<n; i++){
        camas[i] = NULL;
    } 
}

void arregloCama::incluir(cama* c){
    camas[k++] = c;
}


arregloCama::~arregloCama() {
}




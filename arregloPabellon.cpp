/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloPabellon.cpp
 * Author: Maria Salas
 * 
 * Created on 6 de septiembre de 2019, 17:19
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

#include "arregloPabellon.h"


arregloPabellon::arregloPabellon():n(10),k(0) {
    for(int i=0; i<n; i++){
        pabellones[i] = NULL;
    }
}

void arregloPabellon::incluir(pabellon* pb){
    pabellones[k++] = pb;
}

arregloPabellon::~arregloPabellon() {
}


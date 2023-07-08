/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloEspecialidad.cpp
 * Author: Maria Salas
 * 
 * Created on 2 de septiembre de 2019, 11:57
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

#include "arregloEspecialidad.h"


arregloEspecialidad::arregloEspecialidad():n(5),k(0) {
    for(int i=0; i<n; i++){
        especialidades[i] = NULL;
    } 
}

void arregloEspecialidad::incluir(especialidad* e){
    especialidades[k++] = e;
}


arregloEspecialidad::~arregloEspecialidad() {
}


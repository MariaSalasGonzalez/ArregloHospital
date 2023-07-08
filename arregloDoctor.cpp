/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloDoctor.cpp
 * Author: Maria Salas
 * 
 * Created on 7 de septiembre de 2019, 09:13
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

#include "arregloDoctor.h"

arregloDoctor::arregloDoctor():n(20),k(0) {
      for(int i=0; i<n; i++){
        doctores[i]= NULL;
    }
}

void arregloDoctor::incluir(doctor* d){
    doctores[k++] = d;
}

arregloDoctor::~arregloDoctor() {
}


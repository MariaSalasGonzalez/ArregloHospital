/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloPaciente.cpp
 * Author: Maria Salas
 * 
 * Created on 7 de septiembre de 2019, 09:12
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

#include "arregloPaciente.h"


arregloPaciente::arregloPaciente():n(200),k(0) {
     for(int i=0; i<n; i++){
        pacientes[i]= NULL;
    }
}

void arregloPaciente::incluir(paciente* p){
    pacientes[k++] = p;
}

arregloPaciente::~arregloPaciente() {
}


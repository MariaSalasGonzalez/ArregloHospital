/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloPaciente.h
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

#ifndef ARREGLOPACIENTE_H
#define ARREGLOPACIENTE_H

#include "paciente.h"

class doctor;
class paciente;
class arregloPaciente; 

class arregloPaciente {
public:
    arregloPaciente();
    virtual ~arregloPaciente();
    virtual void incluir(paciente*);
    
private:
paciente* pacientes[200];
    int k;
    int n;
};

#endif /* ARREGLOPACIENTE_H */


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloEspecialidad.h
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

#ifndef ARREGLOESPECIALIDAD_H
#define ARREGLOESPECIALIDAD_H

#include "especialidad.h"

class arregloEspecialidad {
public:
    arregloEspecialidad();
    virtual ~arregloEspecialidad();
    virtual void incluir(especialidad*);
    
private:
    especialidad* especialidades[5];
    int n;
    int k;
   
};

#endif /* ARREGLOESPECIALIDAD_H */


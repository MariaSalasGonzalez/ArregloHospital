/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   especialidad.h
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

#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H

#include <sstream>
using std::string;

class especialidad {
public:
    especialidad(string);
    virtual ~especialidad();
    virtual string toString()const;
    string getNombre();
    void setNombre(string);
    
    
private:
    string nombre;
   
};

#endif /* ESPECIALIDAD_H */


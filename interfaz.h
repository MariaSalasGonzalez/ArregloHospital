/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfaz.h
 * Author: Maria Salas
 *
 * Created on 9 de septiembre de 2019, 15:01
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

#ifndef INTERFAZ_H
#define INTERFAZ_H
#include <iostream>
#include <string>
#include <sstream>
#include "hospital.h"

using std::cout;
using std::cin;


class interfaz {
public:
    interfaz();
    virtual ~interfaz();
    virtual void incluirPabellon();
    
    
    virtual int pedirOpcion(); 
    virtual void iniciar();
    virtual void mostrarMenuPrincipal();
    
    
private:
    hospital* _hospital;
};

#endif /* INTERFAZ_H */


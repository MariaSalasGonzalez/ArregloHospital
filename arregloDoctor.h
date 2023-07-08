/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloDoctor.h
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

#ifndef ARREGLODOCTOR_H
#define ARREGLODOCTOR_H

#include "doctor.h"

class arregloDoctor {
public:
    arregloDoctor();
    virtual ~arregloDoctor();
    virtual void incluir(doctor*);
    
private:
    doctor* doctores[20];
    int k;
    int n;
};

#endif /* ARREGLODOCTOR_H */


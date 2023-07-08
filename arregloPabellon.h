/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloPabellon.h
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

#ifndef ARREGLOPABELLON_H
#define ARREGLOPABELLON_H


#include "pabellon.h"

class arregloPabellon {
public:
    arregloPabellon();
    virtual ~arregloPabellon();
    virtual void incluir(pabellon*);
    
private:
 pabellon* pabellones[10];
    int k;
    int n;
};

#endif /* ARREGLOPABELLON_H */


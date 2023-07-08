/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloCama.h
 * Author: Maria Salas
 *
 * Created on 6 de septiembre de 2019, 17:13
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

#ifndef ARREGLOCAMA_H
#define ARREGLOCAMA_H

#include "cama.h"

class cama;
class pabellon;
class arregloPabellon; 

class arregloCama {
public:
    arregloCama();
    virtual ~arregloCama();
    virtual void incluir(cama*);
    
private:
    cama* camas[200];
    int k;
    int n;
    
};

#endif /* ARREGLOCAMA_H */


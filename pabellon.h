/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pabellon.h
 * Author: Maria Salas
 *
 * Created on 7 de septiembre de 2019, 14:04
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

#ifndef PABELLON_H
#define PABELLON_H

#include <sstream>
using std::string;

#include "cama.h"


class pabellon {
public:
    pabellon(char, bool);
    virtual bool insertarCam(cama*);
    virtual string toString()const;
    char getLetra();
    void setLetra(char);
    bool getGenero();
    void setGenero(bool);
    virtual ~pabellon();
  
    
private:
    char letra;
    bool genero; 
    arregloCama* pacientesAtendidos;
};

#endif /* PABELLON_H */


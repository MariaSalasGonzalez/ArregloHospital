/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cama.h
 * Author: Maria Salas
 *
 * Created on 7 de septiembre de 2019, 09:24
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

#ifndef CAMA_H
#define CAMA_H

#include <sstream>
using std::string;

#include "arregloCama.h"

class cama;
class pabellon;
class arregloPabellon; 

class cama {
public:
    cama(int, string, int);
    virtual string toString()const;
    virtual int getNumero();
    virtual void setNumero(int);
    virtual string getEstado();
    virtual void setEstado(string);
    virtual int getCodigo();
    virtual void setCodigo(int);
    virtual ~cama();
    
private:
    int numero;
    string estado;
    int codigo;
  
    
};

#endif /* CAMA_H */


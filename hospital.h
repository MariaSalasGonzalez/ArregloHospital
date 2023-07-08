/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   hospital.h
 * Author: Maria Salas
 *
 * Created on 9 de septiembre de 2019, 09:20
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

#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "arregloPaciente.h"
#include "arregloDoctor.h"
#include "arregloPabellon.h"
#include "arregloCama.h"
#include "arregloEspecialidad.h"

class hospital {
public:
    hospital();
    virtual void incluirPaciente(paciente*);
    virtual void incluirDoctor(doctor*);
    virtual void incluirPabellon(pabellon*);
    virtual ~hospital();
    
private:
    arregloPaciente* coleccionDePaciente;
    arregloDoctor* coleccionDeDoctor;
    arregloCama* coleccionDeCama;  
    arregloEspecialidad* coleccionDeEspecialidad;
    arregloPabellon* coleccionDePabellon;

};

#endif /* HOSPITAL_H */


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   doctor.h
 * Author: Maria Salas
 *
 * Created on 7 de septiembre de 2019, 17:32
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

#ifndef DOCTOR_H
#define DOCTOR_H

#include <sstream>
using std::string;

#include "arregloPaciente.h"

class doctor;
class paciente;
class arregloPaciente;

class doctor {
public:
    doctor(string, string, string, string, string);
    virtual string informePaciente() const; //visualizarPaciente
    virtual string visualizarEspecialidad()const;
    virtual void insertarPac(paciente*);
    virtual bool eliminaPac(int);
    virtual string visualizarPac();
//  virtual int cambioCamaPaciente();
    virtual string toString()const;
    string getNombre();
    void setNombre(string);
    string getApellido();
    void setApellido(string);
    string getCedula();
    void setCedula(string);
    string getEspecialidad();
    void setEspecialidad(string);
    string getDisponibilidad();
    void setDisponibilidad(string);
    virtual ~doctor();
    
    
     
private:
    string nombre;
    string apellido;
    string cedula;
    string especialidad;
    string disponibilidad;
    
    
    arregloPaciente* pacientesAtendidos;
    
    
};

#endif /* DOCTOR_H */


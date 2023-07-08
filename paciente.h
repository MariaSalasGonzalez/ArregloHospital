/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   paciente.h
 * Author: Maria Salas
 *
 * Created on 8 de septiembre de 2019, 21:38
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

#ifndef PACIENTE_H
#define PACIENTE_H

#include <sstream>
using std::string;

#include "doctor.h"

class doctor;
class paciente;
class arregloPaciente;

class paciente {
public:
    paciente(string, string, string, string, string, string, bool, string, int, int);  
    virtual string toString()const;
    string getNombre();
    void setNombre(string);
    string getApellido();
    void setApellido(string);
    string getCedula();
    void setCedula(string);
    string getDireccion();
    void setDireccion(string);
    string getPatologia();
    void setPatologia(string);
    string getTipoCirugia();
    void setTipoCirugia(string);
    bool getEstado();
    void setEstado(bool);
    string getPrioridad();
    void setPrioridad(string);
    int getFechaCirugia();
    void setFechaCirugia(int);
    int getCama();
    void setCama(int);
    doctor* getDoctor();
    void setDoctor(doctor*);
    virtual ~paciente();
    
private:
    string nombre;
    string apellido;
    string cedula;
    string direccion;
    string patologia;
    string tipoCirugia;
    bool estado;
    string prioridad;
    int fechaCirugia;
    int cama;
    doctor* _doctor;
    
   
   
    
    
    

};

#endif /* PACIENTE_H */


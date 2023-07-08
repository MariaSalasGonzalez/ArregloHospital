/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   paciente.cpp
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

#include <sstream>
using std::stringstream;

#include "paciente.h"

paciente::paciente(string nombre, string apellido, string cedula, string direccion,
        string patologia, string tipoCirugia, bool estado, string prioridad, int fechaCirugia,
        int cama):
        nombre(nombre),
        apellido(apellido),
        cedula(cedula),
        direccion(direccion),
        patologia(patologia),
        tipoCirugia(tipoCirugia),
        estado(estado),
        prioridad(prioridad),
        fechaCirugia(fechaCirugia),
        cama(cama),
        _doctor(NULL){
}


void paciente::setNombre(string nombre){
    this->nombre = nombre;
}
string paciente::getNombre(){
    return nombre;
}

void paciente::setApellido(string apellido){
    this->apellido = apellido;
}
string paciente::getApellido(){
    return apellido;
}

void paciente::setCedula(string cedula){
    this->cedula = cedula;
}
string paciente::getCedula(){
    return cedula;
}

void paciente::setDireccion(string direccion){
    this->direccion = direccion;
}
string paciente::getDireccion(){
    return direccion;
}

void paciente::setPatologia(string patologia){
    this->patologia = patologia;
}
string paciente::getPatologia(){
    return patologia;
}

void paciente::setTipoCirugia(string tipoCirugia){
    this->tipoCirugia = tipoCirugia;
}
string paciente::getTipoCirugia(){
    return tipoCirugia;
}

void paciente::setEstado(bool estado){
    this->estado = estado;
}
bool paciente::getEstado(){
    return estado;
}

void paciente::setPrioridad(string prioridad){
    this->prioridad = prioridad;
}
string paciente::getPrioridad(){
    return prioridad;
}

void paciente::setFechaCirugia(int fechaCirugia){
    this->fechaCirugia = fechaCirugia;
}
int paciente::getFechaCirugia(){
    return fechaCirugia;
}

void paciente::setCama(int cama){
    this->cama = cama;
}
int paciente::getCama(){
    return cama;
}

void paciente::setDoctor(doctor* _doctor){
    _doctor = _doctor;
}
doctor* paciente::getDoctor(){
    return _doctor;
}

// //en la clase paciente
// void paciente::desasignarDoctor(){
//     _doctor->eliminarPaciente(cedula);
// }
// 
// void paciente::desasignarCama(){
//     _cama->actualizarPaciente(NULL);
// }

string paciente::toString() const{
    stringstream s;
    s<<"D A T O S  D E  P A C I E N T E"<<"\n";
    s<<"\n";
    s<<"Nombre: "<<nombre<<"\n";
    s<<"Apellido: "<<apellido<<"\n";
    s<<"Cedula: "<<cedula<<"\n";
    s<<"Direccion: "<<direccion<<"\n";
    s<<"Patologia: "<<patologia<<"\n";
    s<<"Tipo de Cirugia: "<<tipoCirugia<<"\n";
    s<<"Estado: "<<estado<<"\n";
    s<<"Prioridad: "<<prioridad<<"\n";
    s<<"Fecha de Cirugia: "<<fechaCirugia<<"\n";  
    s<<"Cama: "<<cama<<"\n";
    s<<"Doctor:"<<_doctor<<"\n";
    return s.str();
} 


paciente::~paciente() {
  //  cout << "Se ha destruido " <<nombre<<"\n";
}


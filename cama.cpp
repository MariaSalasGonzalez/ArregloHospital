/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cama.cpp
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

#include <sstream>
using std::stringstream;

#include "cama.h"


cama::cama(int numero, string estado, int codigo):
        numero(numero),
        estado(estado),
        codigo(codigo){
}

void cama::setNumero(int numero) {
	this->numero = numero;
}
int cama::getNumero() {
	return numero;
}

void cama::setEstado(string estado) {
	this->estado = estado;
}
string cama::getEstado() {
	return estado;
}

void cama::setCodigo(int codigo) {
	this->codigo = codigo;
}
int cama::getCodigo() {
	return codigo;
}


/*
 *Objetivo: 
 *Parametros que recibe: 
 *Valor devuelto: 
 */
string cama::toString()const{
   stringstream s;
   s<<"D A T O S  D E  C A M A "<<"\n";
   s<<"\n";
   s<<"Numero: "<<numero<<"\n";
   s<<"Estado: "<<estado<<"\n";
   s<<"Codigo: "<<codigo<<"\n";
   return s.str();   
}


cama::~cama() {
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfaz.cpp
 * Author: Maria Salas
 * 
 * Created on 9 de septiembre de 2019, 15:01
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

#include "interfaz.h"


interfaz::interfaz():_hospital(new hospital()){
}

interfaz::~interfaz(){
   
}


void interfaz::incluirPabellon() {
    char l;
    bool g;
    cout <<"Digite la letra del pabellon: "<<"\n";
    cin >> l;
    cout <<"Digite el genero del pabellon: "<<"\n";
    cin >> g; 
    pabellon* pb = new pabellon(l,g);
    //pb->cargarCamas();
    _hospital->incluirPabellon(pb);
}


void interfaz::mostrarMenuPrincipal() {
    cout<<" Menu Principal"<<"\n";
    cout<<"\n";
    cout<<"1. Incluir pabellon"<<"\n";
    cout<<"2. Gestionar pacientes"<<"\n";
    cout<<"3. Salir"<<"\n";   
}

int interfaz::pedirOpcion() {
    int opcion;
    cout<<"Digite la opcion"<<"\n";
    cin>>opcion;
    return opcion;
}


void interfaz::iniciar() {
    int opcion;
    do{
        mostrarMenuPrincipal();
        opcion = pedirOpcion();
        
        switch(opcion){
            case 1:
                incluirPabellon();
            case 2:
                
            case 3:
            default:
                cout<<"La aplicacion se esta cerrando"<<"\n";
                
        }
        
    }while(opcion >= 1 && opcion<3);
}



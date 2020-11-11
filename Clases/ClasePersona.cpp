//
//  ClasePersona.cpp
//  FoodToGo
//
//  Created by Karen CL on 01/11/20.
//  Copyright © 2020 KarenCbrs. All rights reserved.
//

#include "ClasePersona.hpp"
#include <iostream>
using namespace std;

//Constructor de la clase Persona (clase padre de: "Usuario" y "Administrador")
Persona::Persona(){
}

//Función setter de los datos de la persona
void Persona::setDatos(string _nombre, string _nivel, string _correo, long _telefono){
    nombre = _nombre;
    nivel = _nivel;
    correo = _correo;
    telefono = _telefono;
}

//Función para mostrar a la persona
void Persona::mostrar(){
    cout<<nombre<<"    "<<nivel<<"    "<<correo<<"    "<<telefono<<"    ";
}

//Función para obtener el nivel de la persona (Regular/ Plus/ VIP)
string Persona::getNivel(){
    return nivel;
}

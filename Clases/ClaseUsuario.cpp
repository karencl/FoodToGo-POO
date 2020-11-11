//
//  ClaseUsuario.cpp
//  FoodToGo
//
//  Created by Karen CL on 01/11/20.
//  Copyright © 2020 KarenCbrs. All rights reserved.
//

#include "ClaseUsuario.hpp"
#include "ClasePersona.hpp"
#include <iostream>
using namespace std;

//Constructor de la clase "Usuario"
Usuario::Usuario(){
}

//Función setter de los datos del usuario
void Usuario::setDatos(string _nombre, string _nivel, string _correo, long _telefono, int _id, int _saldo){
    Persona::setDatos(_nombre, _nivel, _correo, _telefono);
    id = _id;
    saldo = _saldo;
}

//Función getter para obtener el id del usuario
int Usuario::getId(){
    return id;
}

//Función getter para obtener el nivel del usuario (que se obtiene en una función de la clase "Persona")
string Usuario::getNivel(){
    return Persona::getNivel();
}

//Función para mostrar al usuario
void Usuario::mostrar(){
    Persona::mostrar();
    cout<<id<<"     $"<<saldo<<endl;
}

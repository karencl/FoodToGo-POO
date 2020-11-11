//
//  ClaseAdministrador.cpp
//  FoodToGo
//
//  Created by Karen CL on 01/11/20.
//  Copyright © 2020 KarenCbrs. All rights reserved.
//

#include "ClaseAdministrador.hpp"
#include "ClasePersona.hpp"
#include <iostream>
using namespace std;

//Constructor de la clase "Administrador"
Administrador::Administrador(){
}

//Función setter de los datos del administrador
void Administrador::setDatos(string _nombre, string _nivel, string _correo, long _telefono, int _contrasena){
    Persona::setDatos(_nombre, _nivel, _correo, _telefono);
    contrasena = _contrasena;
}

//Función getter para obtener la contraseña del administrador
int Administrador::getContrasena(){
    return contrasena;
}

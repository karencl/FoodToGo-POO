//
//  ClaseUsuario.hpp
//  FoodToGo
//
//  Created by Karen CL on 01/11/20.
//  Copyright © 2020 KarenCbrs. All rights reserved.
//

#ifndef ClaseUsuario_hpp
#define ClaseUsuario_hpp

#include <iostream>
#include "ClasePersona.hpp"
using namespace std;

//Clase "Usuario" - subclase de la clase "Persona"
class Usuario : public Persona{
    
//Atributos
private:
    int id;
    int saldo;
    
//Métodos
public:
    
    //Constructor
    Usuario();
    
    //Setter
    void setDatos(string, string, string, long, int, int);
    
    //Getters
    int getId();
    string getNivel();
    
    //Otras funciones
    void mostrar();
};

#endif /* ClaseUsuario_hpp */

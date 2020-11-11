//
//  ClasePersona.hpp
//  FoodToGo
//
//  Created by Karen CL on 01/11/20.
//  Copyright © 2020 KarenCbrs. All rights reserved.
//

#ifndef ClasePersona_hpp
#define ClasePersona_hpp

#include <iostream>
using namespace std;

//Clase "Persona" - clase padre de las clases "Administrador" y "Usuario"
class Persona{

//Atributos
private:
    string nombre;
    string nivel;
    string correo;
    long telefono;
    
//Métodos
public:
    //Constructor
    Persona();

    //Setter
    virtual void setDatos(string, string, string, long);
    
    //Getter
    virtual string getNivel();
    
    //Otras funciones
    virtual void mostrar();
};

#endif /* ClasePersona_hpp */

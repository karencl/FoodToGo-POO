//
//  ClaseAdministrador.hpp
//  FoodToGo
//
//  Created by Karen CL on 01/11/20.
//  Copyright © 2020 KarenCbrs. All rights reserved.
//

#ifndef ClaseAdministrador_hpp
#define ClaseAdministrador_hpp

#include <iostream>
#include "ClasePersona.hpp"
using namespace std;

//Clase "Administrador" - subclase de la clase "Persona"
class Administrador : public Persona{
    
//Atributos
private:
    int contrasena;
    
//Métodos
public:
    
    //Constructor
    Administrador();
    
    //Setter
    void setDatos(string, string, string, long, int);
    
    //Getter
    int getContrasena();
};

#endif /* ClaseAdministrador_hpp */

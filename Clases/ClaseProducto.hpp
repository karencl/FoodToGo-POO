//
//  ClaseProducto.hpp
//  FoodToGo
//
//  Created by Karen CL on 01/11/20.
//  Copyright © 2020 KarenCbrs. All rights reserved.
//

#ifndef ClaseProducto_hpp
#define ClaseProducto_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

//Clase "Producto"
class Producto {
    
//Atributos
private:
    int id;
    string nombre;
    int costo;
    
//Métodos
public:
    
    //Constructor
    Producto();
    
    //Setter
    void setDatosProducto(int, string, int);
    
    //Getters
    string getNomProd();
    int getCostoProd();
    
    //Otras funciones
    void mostrarProducto();
};

#endif /* ClaseProducto_hpp */

//
//  ClaseProducto.cpp
//  FoodToGo
//
//  Created by Karen CL on 01/11/20.
//  Copyright © 2020 KarenCbrs. All rights reserved.
//

#include "ClaseProducto.hpp"
#include <iostream>
using namespace std;

//Constructor de la clase Producto
Producto::Producto() {
}

//Función setter de los datos del producto
void Producto::setDatosProducto(int _id, string _nombre, int _costo){
    id = _id;
    nombre = _nombre;
    costo = _costo;
}

//Función getter para obtener el nombre del producto
string Producto::getNomProd(){
    return nombre;
}

//Función getter para obtener el costo del producto
int Producto::getCostoProd(){
    return costo;
}

//Función para mostrar el producto
void Producto::mostrarProducto(){
    cout<<id<<"     "<<nombre<<"     $"<<costo<<endl;
}

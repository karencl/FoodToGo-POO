/*
 * Proyecto FoodToGo - POO
 * Karen Cebreros López
 * A01704254
 * 10/11/2020
 *
 * Producto.hpp
 * FoodToGo-POO
 * Created by Karen CL on 10/11/20.
 * Copyright © 2020 KarenCbrs. All rights reserved.
 */

/*
 * Clase Producto -> clase abstracta.
 * Contiene los métodos y atributos genéricos de los objetos
 * "Producto" y tiene 2 clases hijas:
 * Comida y Bebida
 */

#ifndef Producto_hpp
#define Producto_hpp

#include <iostream>
using namespace std;

//Declaración de la clase Producto (clase abstracta)
class Producto {
    protected:
        //Atributos
        int id;
        string nombre;
        float costo;
    public:
        //Constructor por default
        Producto(): id(0), nombre(""), costo(0.0){};
    
        //Métodos
        string get_nomb_prod();
        float get_costo_prod();
        int get_id_prod();
        virtual void set_datos_producto(int, string, float);
        virtual string empacado_en();
};

//Función setter de los datos del producto
void Producto::set_datos_producto(int _id, string _nombre, float _costo){
    id = _id;
    nombre = _nombre;
    costo = _costo;
}

//Función getter del nombre del producto
string Producto::get_nomb_prod(){
    return nombre;
}

//Función getter del costo del producto
float Producto::get_costo_prod(){
    return costo;
}

//Función getter del id del producto
int Producto::get_id_prod(){
    return id;
}

//Función para saber como viene empaquetado el producto
string Producto::empacado_en(){
    return " ";
}


//Declaración de la clase Comida que hereda de la clase Producto
class Comida : public Producto {
    private:
        //Atributos
        string tipo;
    public:
        //Constructor por default
        Comida(): tipo(""), Producto(){};
    
        //Métodos
        void set_datos_producto(int, string, float, string, string);
        string get_tipo();
        string empacado_en();
};

//Función setter de los datos del producto-comida
void Comida::set_datos_producto(int _id, string _nombre, float _costo, string _tipo, string _empaque){
    Producto::set_datos_producto(_id, _nombre, _costo);
    tipo = _tipo;
}

//Función getter del tipo de comida
string Comida::get_tipo(){
    return tipo;
}

//Función para saber como viene empaquetada la comida
string Comida::empacado_en(){
    return "Caja";
}


//Declaración de la clase Bebida que hereda de la clase Producto
class Bebida : public Producto {
    private:
        //Atributos
        string sabor;
    public:
        //Constructor
        Bebida(): sabor(""), Producto(){};
        void set_datos_producto(int, string, float, string, string);
        string get_sabor();
        string empacado_en();
};

//Función setter de los datos del producto-bebida
void Bebida::set_datos_producto(int _id, string _nombre, float _costo, string _sabor, string _empaque){
    Producto::set_datos_producto(_id, _nombre, _costo);
    sabor = _sabor;
}

//Función getter del sabor de la bebida
string Bebida::get_sabor(){
    return sabor;
}

//Función para saber como viene empaquetada la bebida
string Bebida::empacado_en(){
    return "Bote";
}

#endif /* Producto_hpp */

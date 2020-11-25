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
};

/*
 * Setter -> datos
 *
 * Parámetros: id, nombre, costo
 * No retorna nada
 *
 */
void Producto::set_datos_producto(int _id, string _nombre, float _costo){
    id = _id;
    nombre = _nombre;
    costo = _costo;
}

/*
 * Getter -> nombre
 *
 * No recibe parámetros
 * Retorna: nombre de tipo string
 *
 */
string Producto::get_nomb_prod(){
    return nombre;
}

/*
 * Getter -> costo
 *
 * No recibe parámetros
 * Retorna: costo de tipo float
 *
 */
float Producto::get_costo_prod(){
    return costo;
}

/*
 * Getter -> id
 *
 * No recibe parámetros
 * Retorna: id de tipo int
 *
 */
int Producto::get_id_prod(){
    return id;
}


//Declaración de la clase Comida que hereda de la clase Producto
class Comida : public Producto {
    private:
        //Atributos
        string tipo;
        string empaque;
    public:
        //Constructor por default
        Comida(): tipo(""), Producto(), empaque("Caja"){};
    
        //Métodos
        void set_datos_producto(int, string, float, string, string);
        string get_tipo();
        string get_empaque_comida();
};

/*
 * Setter -> datos comida
 *
 * Parámetros: id, nombre, costo, tipo, empaque
 * No retorna nada
 *
 */
void Comida::set_datos_producto(int _id, string _nombre, float _costo,
                                string _tipo, string _empaque){
    Producto::set_datos_producto(_id, _nombre, _costo);
    tipo = _tipo;
    empaque = _empaque;
}

/*
 * Getter -> tipo
 *
 * No recibe parámetros
 * Retorna: tipo de tipo string
 *
 */
string Comida::get_tipo(){
    return tipo;
}

/*
 * Getter -> empaque
 *
 * No recibe parámetros
 * Retorna: empaque de tipo string
 *
 */
string Comida::get_empaque_comida(){
    return empaque;
}


//Declaración de la clase Bebida que hereda de la clase Producto
class Bebida : public Producto {
    private:
        //Atributos
        string sabor;
        string empaque;
    public:
        //Constructor
        Bebida(): sabor(""), Producto(), empaque("Vaso"){};
        void set_datos_producto(int, string, float, string, string);
        string get_sabor();
        string get_empaque_bebida();
};

/*
 * Setter -> datos bebida
 *
 * Parámetros: id, nombre, costo, sabor, empaque
 * No retorna nada
 *
 */
void Bebida::set_datos_producto(int _id, string _nombre, float _costo,
                                string _sabor, string _empaque){
    Producto::set_datos_producto(_id, _nombre, _costo);
    sabor = _sabor;
    empaque = _empaque;
}

/*
 * Getter -> sabor
 *
 * No recibe parámetros
 * Retorna: sabor de tipo string
 *
 */
string Bebida::get_sabor(){
    return sabor;
}

/*
 * Getter -> empaque
 *
 * No recibe parámetros
 * Retorna: empaque de tipo string
 *
 */
string Bebida::get_empaque_bebida(){
    return empaque;
}

#endif /* Producto_hpp */

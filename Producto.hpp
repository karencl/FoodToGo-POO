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
        //Constructor por default de la clase Producto
        Producto(): id(0), nombre(""), costo(0.0){};
    
        //Métodos
        string get_nomb_prod();
        float get_costo_prod();
        int get_id_prod();
        virtual void set_datos_producto(int id, string nomb, float cost);
};


/*
 * Setter de los datos de un objeto de la clase Producto
 *
 * @param _id, _nombre, _costo
 * @return No retorna nada
 *
 */
void Producto::set_datos_producto(int _id, string _nombre, float _costo){
    id = _id;
    nombre = _nombre;
    costo = _costo;
}


/*
 * Getter del nombre de un objeto de la clase Producto
 *
 * @param No recibe parámetros
 * @return nombre de tipo string
 *
 */
string Producto::get_nomb_prod(){
    return nombre;
}


/*
 * Getter del costo de un objeto de la clase Producto
 *
 * @param No recibe parámetros
 * @return costo de tipo float
 *
 */
float Producto::get_costo_prod(){
    return costo;
}


/*
 * Getter del id de un objeto de la clase Producto
 *
 * @param No recibe parámetros
 * @return id de tipo int
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
        //Constructor por default de una subclase de Producto -> Comida
        Comida(): tipo(""), Producto(), empaque("Caja"){};
    
        //Métodos
        void set_datos_producto(int id, string nomb, float cost,
                                string tip, string emp);
        string get_tipo();
        string get_empaque_comida();
};


/*
 * Setter de los datos de un objeto de la clase Comida
 *
 * @param _id, _nombre, _costo, _tipo, _empaque
 * @return No retorna nada
 *
 */
void Comida::set_datos_producto(int _id, string _nombre, float _costo,
                                string _tipo, string _empaque){
    Producto::set_datos_producto(_id, _nombre, _costo);
    tipo = _tipo;
    empaque = _empaque;
}


/*
 * Getter del tipo de un objeto de la clase Comida
 *
 * @param No recibe parámetros
 * @return tipo de tipo string
 *
 */
string Comida::get_tipo(){
    return tipo;
}


/*
 * Getter del empaque de un objeto de la clase Comida
 *
 * @param No recibe parámetros
 * @return empaque de tipo string
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
        //Constructor por default de una subclase de Producto -> Bebida
        Bebida(): sabor(""), Producto(), empaque("Vaso"){};
        void set_datos_producto(int id, string nomb, float cost,
                                string sab, string emp);
        string get_sabor();
        string get_empaque_bebida();
};


/*
 * Setter de los datos de un objeto de la clase Bebida
 *
 * @param _id, _nombre, _costo, _sabor, _empaque
 * @return No retorna nada
 *
 */
void Bebida::set_datos_producto(int _id, string _nombre, float _costo,
                                string _sabor, string _empaque){
    Producto::set_datos_producto(_id, _nombre, _costo);
    sabor = _sabor;
    empaque = _empaque;
}


/*
 * Getter del sabor de un objeto de la clase Bebida
 *
 * @param No recibe parámetros
 * @return sabor de tipo string
 *
 */
string Bebida::get_sabor(){
    return sabor;
}


/*
 * Getter del empaque de un objeto de la clase Bebida
 *
 * @param No recibe parámetros
 * @return empaque de tipo string
 *
 */
string Bebida::get_empaque_bebida(){
    return empaque;
}

#endif /* Producto_hpp */

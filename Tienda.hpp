/*
* Proyecto FoodToGo - POO
* Karen Cebreros López
* A01704254
* 10/11/2020
*
* Tienda.hpp
* FoodToGo-POO
* Created by Karen CL on 10/11/20.
* Copyright © 2020 KarenCbrs. All rights reserved.
*/

/*
* Clase Tienda.
* Contiene los métodos y atributos de los objetos.
* Maneja grupos de Productos divididos en:
* "Comida" y "Bebida"
*/

#ifndef Tienda_hpp
#define Tienda_hpp

#include "Producto.hpp"

#include <iostream>
using namespace std;

//Constante para el tamaño de los arreglos
const int MAX = 100;

//Declaración de la clase Tienda
class Tienda {
    private:
        //Atributos
        Comida lista_comida[MAX];
        Bebida lista_bebidas[MAX];
        int p = 0;
        int b = 0;
    public:
        //Constructor
        Tienda(){};
    
        //Métodos de la clase
        void crea_productos_comida();
        void crea_productos_bebidas();
        void muestra_lista_comida();
        void muestra_lista_bebidas();
        void agrega_producto_comida(int id, string nomb, int cost, string tipo);
        void agrega_producto_bebida(int id, string nomb, int cost, string sabor);
        void elimina_producto_comida(int index);
        void elimina_producto_bebida(int index);
        string obten_nombre_producto_comida(int index);
        float obten_costo_producto_comida(int index);
        string obten_nombre_producto_bebida(int index);
        float obten_costo_producto_bebida(int index);
};

/*
 * Uiliza el arreglo de lista_comida.
 * Lo llena con 5 ejemplos de objetos y el index de el arreglo aumenta
 * en 1 hasta el último agregado.
 */
void Tienda::crea_productos_comida(){
    lista_comida[0].set_datos_producto(314, "Ensalada", 70.99, "Saludable", lista_comida[0].empacado_en());
    p ++;
    lista_comida[1].set_datos_producto(421, "Hamburguesa", 120.5, "Carbohidrato", lista_comida[1].empacado_en());
    p ++;
    lista_comida[2].set_datos_producto(117, "Arrachera", 180.23, "Proteína", lista_comida[2].empacado_en());
    p ++;
    lista_comida[3].set_datos_producto(233, "Pescado", 139.9, "Proteína", lista_comida[3].empacado_en());
    p ++;
    lista_comida[4].set_datos_producto(101, "Galletas", 42.8, "Azucar", lista_comida[4].empacado_en());
    p ++;
}

/*
* Uiliza el arreglo de lista_bebidas.
* Lo llena con 3 ejemplos de objetos y el index de el arreglo aumenta
* en 1 hasta el último agregado.
*/
void Tienda::crea_productos_bebidas(){
    lista_bebidas[0].set_datos_producto(122, "Naranjada", 30.99, "Naranja", lista_bebidas[0].empacado_en());
    b ++;
    lista_bebidas[1].set_datos_producto(143, "Té - Manz", 44.2, "Manzanilla", lista_bebidas[1].empacado_en());
    b ++;
    lista_bebidas[2].set_datos_producto(309, "Malteada-V", 60.5, "Vainilla", lista_bebidas[2].empacado_en());
    b ++;
}

/*
* Función para mostrar la lista de la comida.
*
* Recibe como parámetros una lista de objetos de la clase Comida (hija de la clase
* Producto) y el tamaño de la lista que se usará como index para recorrerla
* y mostrar cada objeto en ella.
*/
void Tienda::muestra_lista_comida(){
    cout<<"COMIDA:"<<endl;
    cout<<"   Id      "<<"Nombre          "<<"Costo       "<<"Tipo       "<<"Empaque"<<endl;
    for (int j = 0; j < p; j++) {
        cout<<j<<"  ";
        cout<<lista_comida[j].get_id_prod()<<"     "<<lista_comida[j].get_nomb_prod()<<"  \
        $"<<lista_comida[j].get_costo_prod()<<"     "<<lista_comida[j].get_tipo()<<"      \
        "<<lista_comida[j].empacado_en()<<endl;
    }
    cout<<"\n";
}

/*
* Función para mostrar la lista de las bebidas.
*
* Recibe como parámetros una lista de objetos de la clase Bebida (hija de la clase
* Producto) y el tamaño de la lista que se usará como index para recorrerla
* y mostrar cada objeto en ella.
*/
void Tienda::muestra_lista_bebidas(){
    cout<<"BEBIDAS:"<<endl;
    cout<<"   Id      "<<"Nombre           "<<"Costo        "<<"Sabor       "<<"Empaque"<<endl;
    for (int k = 0; k < b; k++) {
        cout<<k<<"  ";
        cout<<lista_bebidas[k].get_id_prod()<<"     "<<lista_bebidas[k].get_nomb_prod()<<" \
        $"<<lista_bebidas[k].get_costo_prod()<<"      "<<lista_bebidas[k].get_sabor()<<"   \
        "<<lista_bebidas[k].empacado_en()<<endl;
    }
    cout<<"\n";
}

//Función para agregar producto a la lista de comida
void Tienda::agrega_producto_comida(int id, string nomb, int cost, string tipo){
    lista_comida[p].set_datos_producto(id, nomb, cost, tipo, lista_comida[p].empacado_en());
    p ++;
}

//Función para agregar producto a la lista de bebidas
void Tienda::agrega_producto_bebida(int id, string nomb, int cost, string sabor){
    lista_bebidas[b].set_datos_producto(id, nomb, cost, sabor, lista_bebidas[b].empacado_en());
    b ++;
}

//Función para eliminar producto de la lista de comida
void Tienda::elimina_producto_comida(int index){
    for (int k = index; k < p; k++) {
        lista_comida[k] = lista_comida[k + 1];
    }
    p --;
}

//Función para eliminar producto de la lista de bebidas
void Tienda::elimina_producto_bebida(int index){
    for (int k = index; k < b; k++) {
        lista_bebidas[k] = lista_bebidas[k + 1];
    }
    b --;
}

//Función que obtiene el nombre de la comida a través de un getter de la clase Producto
string Tienda::obten_nombre_producto_comida(int index){
    return lista_comida[index].get_nomb_prod();
}

//Función que obtiene el costo de la comida a través de un getter de la clase Producto
float Tienda::obten_costo_producto_comida(int index){
    return lista_comida[index].get_costo_prod();
}

//Función que obtiene el nombre de la bebida a través de un getter de la clase Producto
string Tienda::obten_nombre_producto_bebida(int index){
    return lista_bebidas[index].get_nomb_prod();
}

//Función que obtiene el costo de la bebida a través de un getter de la clase Producto
float Tienda::obten_costo_producto_bebida(int index){
    return lista_bebidas[index].get_costo_prod();
}

#endif /* Tienda_hpp */

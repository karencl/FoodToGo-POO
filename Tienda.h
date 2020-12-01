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

#include "Producto.h"

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
        int cont_comida = 0;
        int cont_bebida = 0;
    public:
        //Constructor de la clase Tienda
        Tienda(){};
    
        //Métodos de la clase
        void crea_productos_comida();
        void crea_productos_bebidas();
        void muestra_lista_comida();
        void muestra_lista_bebidas();
        void agrega_producto_comida(int id, string nomb, int cost, string tipo,
                                    string empaque);
        void agrega_producto_bebida(int id, string nomb, int cost, string sabor,
                                    string empaque);
        void elimina_producto_comida(int index);
        void elimina_producto_bebida(int index);
        string obten_nombre_producto_comida(int index);
        float obten_costo_producto_comida(int index);
        string obten_nombre_producto_bebida(int index);
        float obten_costo_producto_bebida(int index);
};


/*
 * Función "crea_productos_comida()" -> llena el arreglo lista_comida con 5 objetos
 *
 * @param No recibe parámetros
 * @return No retorna nada
 *
 */
void Tienda::crea_productos_comida(){
    lista_comida[0].set_datos_producto(314, "Ensalada", 70.99, "Saludable",
                                       lista_comida[0].get_empaque_comida());
    cont_comida ++;
    lista_comida[1].set_datos_producto(421, "Hamburguesa", 120.5, "Carbohidrato",
                                       lista_comida[1].get_empaque_comida());
    cont_comida ++;
    lista_comida[2].set_datos_producto(117, "Arrachera", 180.23, "Proteína",
                                       lista_comida[2].get_empaque_comida());
    cont_comida ++;
    lista_comida[3].set_datos_producto(233, "Pescado", 139.9, "Proteína",
                                       lista_comida[3].get_empaque_comida());
    cont_comida ++;
    lista_comida[4].set_datos_producto(101, "Galletas", 42.8, "Azucar", "Tubo");
    cont_comida ++;
}


/*
 * Función "crea_productos_bebidas()" -> llena el arreglo lista_bebidas con 3 objetos
 *
 * @param No recibe parámetros
 * @return No retorna nada
 *
 */
void Tienda::crea_productos_bebidas(){
    lista_bebidas[0].set_datos_producto(122, "Naranjada", 30.99, "Naranja",
                                        lista_bebidas[0].get_empaque_bebida());
    cont_bebida ++;
    lista_bebidas[1].set_datos_producto(143, "Té - Manz", 44.2, "Manzanilla", "Taza");
    cont_bebida ++;
    lista_bebidas[2].set_datos_producto(309, "Malteada-V", 60.5, "Vainilla", "Bote");
    cont_bebida ++;
}


/*
 * Función "muestra_lista_comida()" -> muestra lista de objetos de la clase Comida
 *
 * @param No recibe parámetros
 * @return No retorna nada
 *
 */
void Tienda::muestra_lista_comida(){
    cout<<"COMIDA:"<<endl;
    cout<<"   Id      "<<"Nombre        "<<"Costo      "<<"Tipo      "<<"Empaque"<<endl;
    for (int j = 0; j < cont_comida; j++) {
        cout<<j<<"  ";
        cout<<lista_comida[j].get_id_prod()<<"    "<<lista_comida[j].get_nomb_prod()<<"\
        $"<<lista_comida[j].get_costo_prod()<<"    "<<lista_comida[j].get_tipo()<<"\
        "<<lista_comida[j].get_empaque_comida()<<endl;
    }
    cout<<"\n";
}


/*
 * Función "muestra_lista_bebidas()" -> muestra lista de objetos de la clase Bebida
 *
 * @param No recibe parámetros
 * @return No retorna nada
 *
 */
void Tienda::muestra_lista_bebidas(){
    cout<<"BEBIDAS:"<<endl;
    cout<<"   Id      "<<"Nombre         "<<"Costo       "<<"Sabor      "<<"Empaque"<<endl;
    for (int k = 0; k < cont_bebida; k++) {
        cout<<k<<"  ";
        cout<<lista_bebidas[k].get_id_prod()<<"    "<<lista_bebidas[k].get_nomb_prod()<<" \
        $"<<lista_bebidas[k].get_costo_prod()<<"     "<<lista_bebidas[k].get_sabor()<<"   \
        "<<lista_bebidas[k].get_empaque_bebida()<<endl;
    }
    cout<<"\n";
}


/*
 * Función "agrega_producto_comida()" -> agrega objeto a la lista de objetos de Comida
 *
 * @param id, nomb, cost, tipo, empaque
 * @return No retorna nada
 *
 */
void Tienda::agrega_producto_comida(int id, string nomb, int cost, string tipo,
                                    string empaque){
    lista_comida[cont_comida].set_datos_producto(id, nomb, cost, tipo, empaque);
    cont_comida ++;
}


/*
 * Función "agrega_producto_bebida()" -> agrega objeto a la lista de objetos de Bebida
 *
 * @param id, nomb, cost, sabor, empaque
 * @return No retorna nada
 *
 */
void Tienda::agrega_producto_bebida(int id, string nomb, int cost, string sabor,
                                    string empaque){
    lista_bebidas[cont_bebida].set_datos_producto(id, nomb, cost, sabor, empaque);
    cont_bebida ++;
}


/*
 * Función "elimina_producto_comida()" -> elimina objeto de lista de objetos de Comida
 *
 * @param index (posición del objeto a eliminar)
 * @return No retorna nada
 *
 */
void Tienda::elimina_producto_comida(int index){
    if (index < cont_comida) {
        for (int k = index; k < cont_comida; k++) {
            lista_comida[k] = lista_comida[k + 1];
        }
        cont_comida --;
        cout<<"Listo! Comida eliminada exitosamente."<<endl;
    }else{
        cout<<"Comida no encontrada!"<<endl;
    }
}


/*
 * Función "elimina_producto_bebida()" -> elimina objeto de lista de objetos de Bebida
 *
 * @param index (posición del objeto a eliminar)
 * @return No retorna nada
 *
 */
void Tienda::elimina_producto_bebida(int index){
    if (index < cont_bebida) {
        for (int k = index; k < cont_bebida; k++) {
            lista_bebidas[k] = lista_bebidas[k + 1];
        }
        cont_bebida --;
        cout<<"Listo! Bebida eliminada exitosamente."<<endl;
    }else{
        cout<<"Bebida no encontrada!"<<endl;
    }
}


/*
 * Función "obten_nombre_producto_comida()" -> obtiene el nombre de un objeto Comida
 *
 * @param index (posición del objeto a eliminar)
 * @return nombre de tipo string
 *
 */
string Tienda::obten_nombre_producto_comida(int index){
    return lista_comida[index].get_nomb_prod();
}


/*
 * Función "obten_costo_producto_comida()" -> obtiene el costo de un objeto Comida
 *
 * @param index (posición del objeto a eliminar)
 * @return costo de tipo float
 *
 */
float Tienda::obten_costo_producto_comida(int index){
    return lista_comida[index].get_costo_prod();
}


/*
 * Función "obten_nombre_producto_bebida()" -> obtiene el nombre de un objeto Bebida
 *
 * @param index (posición del objeto a eliminar)
 * @return nombre de tipo string
 *
 */
string Tienda::obten_nombre_producto_bebida(int index){
    return lista_bebidas[index].get_nomb_prod();
}


/*
 * Función "obten_costo_producto_bebida()" -> obtiene el costo de un objeto Bebida
 *
 * @param index (posición del objeto a eliminar)
 * @return costo de tipo float
 *
 */
float Tienda::obten_costo_producto_bebida(int index){
    return lista_bebidas[index].get_costo_prod();
}

#endif /* Tienda_hpp */

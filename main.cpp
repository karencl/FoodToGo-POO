/*
 * Proyecto FoodToGo - POO
 * Karen Cebreros López
 * A01704254
 * 10/11/2020
 *
 * main.cpp
 * FoodToGo-POO
 * Created by Karen CL on 10/11/20.
 * Copyright © 2020 KarenCbrs. All rights reserved.
 */

/*
 * Descripción:
 * Este es un proyecto para la clase de pensamiento computacional
 * orientado a objetos.
 * Es un programa que simula el funcionamiento de una aplicación para
 * hacer pedidos en línea.
 */

//Bibliotecas
#include <iostream> //Para imprimir

//Clases del proyecto
#include "Producto.h"
#include "Persona.h"
#include "Tienda.h"

using namespace std;

//Prototipos de funciones (hasta abajo están las declaraciones)
void menuAdmin();
void menuUsuario();

int main() {
    
    //Objeto de la clase Administrador -> creado con el fin de pruebas del programa
    Administrador admin1;
    admin1.set_datos("Karen", "Admin", "karen@prueba.com", 1234567890, 1234);
    
    //Objeto de la clase tienda
    Tienda tienda;
    tienda.crea_productos_comida();
    tienda.crea_productos_bebidas();
    
    //Creando un arreglo de objetos de la clase Usuario
    int u = 3;
    int id = 4;
    Usuario lista_usuarios[100];
    lista_usuarios[0].set_datos("Daniela", "VIP", "dany@gmail.com", 1231231231, 1, 130.99);
    lista_usuarios[1].set_datos("Pepe", "Regular", "pepe@gmail.com", 4564564564, 2, 85.5);
    lista_usuarios[2].set_datos("Jimena", "Plus", "jim@gmail.com", 8888888888, 3, 346.2);
 
    //Bienvenida al programa
    cout<<"Bienvenid@ a ~Food to go!~"<<endl;
    
    int opcion_ingreso;
    
    cout<<"¿Cómo desea ingresar?"<<endl<<endl;
    cout<<"1) Administrador"<<endl;
    cout<<"2) Usuario"<<endl<<endl;
    
    //Lee la opción de ingreso (usuario/ administrador)
    cin>>opcion_ingreso;
    
    //Switch dependiendo de la elección de ingreso (usuario/ administrador)
    switch (opcion_ingreso) {
            
        //Caso 1 -> entra como administrador
        case 1:
            int codigo_acceso;
            cout<<"Ingrese código: ";
            
            //Lee el código de acceso del admin
            cin>>codigo_acceso;
            cout<<"\n";
            
            //Verifica el código de acceso
            if (codigo_acceso == admin1.get_contrasena()) {
                
                int opcion_admin = 0;
                
                //Ciclo para que siga corriendo, mientras no elija la opción "salir"
                while (opcion_admin != 7) {
                    
                    //Impresión del menú para el administrador
                    menuAdmin();
                    
                    //Lee la opción del menú seleccionada por el administrador
                    cin>>opcion_admin;
                    
                    //Opción 1 del panel: "Administrador" (ver usuarios)
                    if (opcion_admin == 1) {
                        lista_usuarios[u].mostrar_lista_usuarios(lista_usuarios, u);
                    }
                    
                    //Opción 2 del panel: "Administrador" (agregar usuario)
                    else if (opcion_admin == 2) {
                        string nombre, nivel, correo;
                        float saldo;
                        long telefono;
                        cout<<"Nombre: ";
                        cin>>nombre;
                        cout<<"Nivel: ";
                        cin>>nivel;
                        cout<<"Correo: ";
                        cin>>correo;
                        cout<<"Teléfono: ";
                        cin>>telefono;
                        cout<<"Saldo (sin $): ";
                        cin>>saldo;
                        cout<<"\n";
                        
                        lista_usuarios[u].set_datos(nombre, nivel, correo, telefono, id, saldo);
                        u ++;
                        id ++;
                    }
                    
                    //Opción 3 del panel: "Administrador" (eliminar usuario)
                    else if (opcion_admin == 3) {
                        lista_usuarios[u].mostrar_lista_usuarios(lista_usuarios, u);
                        
                        cout<<"\n";
                        cout<<"¿Cuál usuario quieres eliminar?: ";
                        int usuario_a_eliminar;
                        cin>>usuario_a_eliminar;
                        if (usuario_a_eliminar < u) {
                            for (int j = usuario_a_eliminar; j <= u; j++) {
                                lista_usuarios[j] = lista_usuarios[j + 1];
                            }
                            u --;
                            cout<<"Listo! Usuario eliminado exitosamente."<<endl;
                        }else{
                            cout<<"Usuario no encontrado!"<<endl;
                        }
                    }
                    
                    //Opción 4 del panel: "Administrador" (ver los productos disponibles)
                    else if (opcion_admin == 4) {
                        cout<<"* * * * * LA CARTA * * * * *"<<endl;
                        tienda.muestra_lista_comida();
                        tienda.muestra_lista_bebidas();
                    }
                    
                    //Opción 5 del panel: "Administrador" (agregar producto)
                    else if (opcion_admin == 5) {
                        string nombre, empaque;
                        int id, costo;
                        cout<<"Id: ";
                        cin>>id;
                        cout<<"Nombre: ";
                        cin>>nombre;
                        cout<<"Costo (sin $): ";
                        cin>>costo;
                        cout<<"Empaque: ";
                        cin>>empaque;
                        cout<<"\n";
                        
                        int eleccion;
                        cout<<"¿Qué quieres agregar? COMIDA (1)/ BEBIDA (2): "<<endl;
                        cin>>eleccion;
                        
                        string sabor, tipo;
                        switch (eleccion) {
                            case 1:
                                cout<<"Tipo: ";
                                cin>>tipo;
                                cout<<"\n";
                                tienda.agrega_producto_comida(id, nombre, costo, tipo, empaque);
                                cout<<"Listo! Producto agregado exitosamente."<<endl;
                                break;
                            case 2:
                                cout<<"Sabor: ";
                                cin>>sabor;
                                cout<<"\n";
                                tienda.agrega_producto_bebida(id, nombre, costo, sabor, empaque);
                                cout<<"Listo! Producto agregado exitosamente."<<endl;
                                break;
                            default:
                                cout<<"Error! Opción inválida."<<endl;
                                break;
                        }
                    }
                    
                    //Opción 6 del panel: "Administrador" (eliminar producto)
                    else if (opcion_admin == 6) {
                        cout<<"* * * * * LA CARTA * * * * *"<<endl;
                        tienda.muestra_lista_comida();
                        tienda.muestra_lista_bebidas();
                        
                        int eleccion;
                        cout<<"¿Qué quieres eliminar? COMIDA (1)/ BEBIDA (2): "<<endl;
                        cin>>eleccion;
                        
                        cout<<"\n¿Cuál quieres eliminar?: ";
                        int producto_a_eliminar;
                        cin>>producto_a_eliminar;
                        switch (eleccion) {
                            case 1:
                                tienda.elimina_producto_comida(producto_a_eliminar);
                                cout<<"Listo! Producto eliminado exitosamente."<<endl;
                                break;
                            case 2:
                                tienda.elimina_producto_bebida(producto_a_eliminar);
                                cout<<"Listo! Producto eliminado exitosamente."<<endl;
                            default:
                                cout<<"Error! Opción inválida."<<endl;
                                break;
                        }
                    }
                    
                    //Opción 7 del panel: "Administrador" (salir)
                    else if (opcion_admin == 7) {
                        cout<<"Has decidido salir.\nHasta pronto!"<<endl;
                    }
                    
                    //Opción erronea del panel: "Administrador" (error)
                    else {
                        cout<<"ERROR --- Opción no válida!"<<endl;
                    }
                }
            }
            
            //Error al ingresar el código de administrador
            else {
                cout<<"El código es incorrecto!"<<endl;
            }
            break;
            
        //Caso 2 -> entra como usuario
        case 2:
            int o = 1;
            string orden[] = {};
            
            cout<<"Hola! Cuéntanos un poco sobre ti, para poder crear tu perfil."<<endl;
            
            //Pedir los datos del usuario
            string nombre, correo;
            float saldo;
            long telefono;
            cout<<"Nombre: ";
            cin>>nombre;
            cout<<"Correo: ";
            cin>>correo;
            cout<<"Teléfono: ";
            cin>>telefono;
            cout<<"Saldo que desea ingresar (sin $): ";
            cin>>saldo;
            cout<<"\n";
            
            //Crear nuevo objeto de la clase usuario y utilizar el setter para poner los datos
            lista_usuarios[u].set_datos(nombre, "Regular", correo, telefono, id, saldo);
            
            cout<<"Este es tu nuevo perfil! Esperamos que disfrutes de la aplicación!"<<endl<<endl;
            
            lista_usuarios[u].mostrar_perfil_usuario(nombre, correo, telefono, lista_usuarios[u]);
             
            cout<<"Pasando al menú principal..."<<endl<<endl;
            
            id ++;
            u ++;
            
            int opcion_usuario = 0;
            
            //Ciclo para que siga corriendo, mientras no elija la opción "salir"
            while (opcion_usuario != 6) {
                
                //Impresión del menú para el usuario
                menuUsuario();
                
                //Lee la opción del menú seleccionada por el usuario
                cin>>opcion_usuario;
                
                //Opción 1 del panel: "Usuario" (ver mi perfil)
                if (opcion_usuario == 1) {
                    lista_usuarios[u].mostrar_perfil_usuario(nombre, correo,
                                                             telefono, lista_usuarios[u-1]);
                }
                
                //Opción 2 del panel: "Usuario" (ver los productos disponibles)
                else if (opcion_usuario == 2) {
                    cout<<"* * * * * LA CARTA * * * * *"<<endl;
                    tienda.muestra_lista_comida();
                    tienda.muestra_lista_bebidas();
                }
                
                //Opción 3 del panel: "Usuario" (hacer pedido)
                else if (opcion_usuario == 3) {
                    int a_pagar = 0;
                    string algo_mas;
                    
                    //Muestra la carta
                    cout<<"* * * * * LA CARTA * * * * *"<<endl;
                    tienda.muestra_lista_comida();
                    tienda.muestra_lista_bebidas();
                    
                    //Toma pedido hasta que el usuario ya no quiera más
                    do {
                        int eleccion;
                        cout<<"¿Va a ordenar una bebida o comida? Comida (1) / Bebida (2): ";
                        cin>>eleccion;
                        
                        int num_prod;
                        cout<<"Seleccione el producto que desea ordenar: ";
                        cin>>num_prod;
                        cout<<"\n";
                        
                        string nom_prod;
                        int cost_prod = 0;
                        //Obtener los datos del producto (dependiendo si quiere ordenar comida o bebida)
                        switch (eleccion) {
                            case 1:
                                nom_prod = tienda.obten_nombre_producto_comida(num_prod);
                                cost_prod = tienda.obten_costo_producto_comida(num_prod);
                                break;
                            case 2:
                                nom_prod = tienda.obten_nombre_producto_bebida(num_prod);
                                cost_prod = tienda.obten_costo_producto_bebida(num_prod);
                                break;
                            default:
                                cout<<"Error! Opción no encontrada."<<endl;
                                break;
                        }
                        
                        //Agregar producto a la orden
                        orden[o].assign(nom_prod);
                        
                        o ++;
                        
                        a_pagar += cost_prod;
                          
                        cout<<"¿Desea agregar algo más a su orden? Si(s) / No(n) "<<endl;
                        cin>>algo_mas;
                        cout<<"\n";
                        
                    } while (algo_mas == "s");
                    //Muestra la orden y cuenta del pedido
                    cout<<"· · · · · SU CUENTA · · · · ·"<<endl;
                    for (int j = 1; j < o; j++) {
                        cout<<j<<"  "<<orden[j]<<endl;;
                        orden[j] = orden[o];
                    }
                    cout<<"\n";
                    cout<<"Cantidad total a pagar: $"<<a_pagar<<endl;
                    cout<<"\n";
                    
                    float saldo_actual = lista_usuarios[u-1].get_saldo();
                    if (saldo_actual > a_pagar) {
                        cout<<"Realizando cobro por cantidad: $"<<a_pagar<<endl;
                        cout<<"Listo! "<<"Saldo restante: $"<<lista_usuarios[u-1].compra(lista_usuarios[u-1],
                                                                                         a_pagar)<<endl;
                        cout<<"\n";
                    }else{
                        cout<<"Lo sentimos!"<<endl;
                        cout<<"No cuentas con suficiente saldo en tu cuenta para hacer el pedido."<<endl<<endl;
                        cout<<"Tu saldo: $"<<lista_usuarios[u-1].get_saldo()<<endl;
                        cout<<"Puedes actualizarlo en las opciones del menú!"<<endl;
                        cout<<"\n";
                    }
                    
                    o = 1;
                }
                
                //Opción 4 del panel: "Usuario" (actualizar saldo)
                else if (opcion_usuario == 4) {
                    cout<<"¿Cuánto deseas agregar a tu saldo? ";
                    int nuevo_saldo;
                    cin>>nuevo_saldo;
                    cout<<"Tu nuevo saldo es: $"<<lista_usuarios[u-1].set_saldo(lista_usuarios[u-1],
                                                                                nuevo_saldo)<<endl<<endl;
                    cout<<"Sigue disfrutando de la aplicación!"<<endl;
                    cout<<"\n";
                }
                
                //Opción 5 del panel: "Usuario" (ver los demás usuarios)
                else if (opcion_usuario == 5) {
                    lista_usuarios[u].mostrar_lista_usuarios(lista_usuarios, u);
                }
                
                //Opción 6 del panel: "Usuario" (salir)
                else if (opcion_usuario == 6) {
                    cout<<"Has decidido salir.\nHasta pronto!"<<endl;
                }
                
                //Opción erronea del panel: "Usuario" (error)
                else {
                    cout<<"ERROR --- Opción no válida!"<<endl;
                }
            }
            break;
    }
    return 0;
}


//Definiciones de funciones


/*
 * Función -> muestra el menú del panel de administrador
 *
 * No recibe parámetros
 * No retorna nada
 *
 */
void menuAdmin(){
    cout<<"·············MENÚ·············"<<endl;
    cout<<"¿Qué desea hacer?"<<endl;
    cout<<"1) Ver usuarios"<<endl;
    cout<<"2) Agregar usuario"<<endl;
    cout<<"3) Eliminar usuario"<<endl;
    cout<<"4) Ver productos disponibles"<<endl;
    cout<<"5) Agregar producto"<<endl;
    cout<<"6) Eliminar producto"<<endl;
    cout<<"7) Salir"<<endl;
    cout<<"\n";
}


/*
 * Función -> muestra el menú del panel de usuario
 *
 * No recibe parámetros
 * No retorna nada
 *
 */
void menuUsuario(){
    cout<<"·············MENÚ·············"<<endl;
    cout<<"¿Qué desea hacer?"<<endl;
    cout<<"1) Ver mi perfil"<<endl;
    cout<<"2) Ver productos disponibles"<<endl;
    cout<<"3) Hacer un pedido"<<endl;
    cout<<"4) Actualizar saldo"<<endl;
    cout<<"5) Ver los demás usuarios"<<endl;
    cout<<"6) Salir"<<endl;
    cout<<"\n";
}

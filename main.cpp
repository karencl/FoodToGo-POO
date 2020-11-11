//
//  main.cpp
//  FoodToGo-POO
//
//  Created by Karen CL on 10/11/20.
//  Copyright © 2020 KarenCbrs. All rights reserved.
//

#include <iostream>

#include "ClasePersona.hpp"
#include "ClaseUsuario.hpp"
#include "ClaseAdministrador.hpp"
#include "ClaseProducto.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    //Objeto de la clase: "Administrador" -> creado con el fin de pruebas del programa
    Administrador admin1;
    admin1.setDatos("Karen", "Admin", "karen@prueba.com", 1234567890, 1234);
    
    //Creando objetos de la clase Usuario
    int u = 2;
    int id = 3;
    Usuario * lista_usuarios[u];
    lista_usuarios[0] = new Usuario;
    lista_usuarios[0]->setDatos("Daniela", "Regular", "dany@gmail.com", 1231231231, 1, 130);
    lista_usuarios[1] = new Usuario;
    lista_usuarios[1]->setDatos("Pepe", "Regular", "pepe@gmail.com", 4564564564, 2, 85);
    
    //Creando objetos de la clase Producto
    int p = 4;
    Producto * lista_productos[p];
    lista_productos[0] = new Producto;
    lista_productos[0]->setDatosProducto(314, "Ensalada", 70);
    lista_productos[1] = new Producto;
    lista_productos[1]->setDatosProducto(421, "Hamburguesa", 120);
    lista_productos[2] = new Producto;
    lista_productos[2]->setDatosProducto(122, "Naranjada", 30);
    lista_productos[3] = new Producto;
    lista_productos[3]->setDatosProducto(117, "Arrachera", 180);
 
//  Bienvenida al programa
    cout<<"Bienvenid@ a ~Food to go!~"<<endl;
    
    int opcion_ingreso;
    
//  Opción de ingreso (usuario/ administrador)
    cout<<"¿Cómo desea ingresar?"<<endl<<endl;
    cout<<"1) Administrador"<<endl;
    cout<<"2) Usuario"<<endl<<endl;
    cin>>opcion_ingreso;
    
    switch (opcion_ingreso) {
        case 1:
            int codigo_acceso;
            cout<<"Ingrese código: ";
            cin>>codigo_acceso;
            cout<<"\n";
            
            if (codigo_acceso == admin1.getContrasena()) {
                
                int opcion_admin = 0;
                
//              Menú del panel administrador
                while (opcion_admin != 7) {
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
                    
                    cin>>opcion_admin;
                    
//                  Opción 1 del panel: "Administrador" (ver usuarios)
                    if (opcion_admin == 1) {
                        cout<<"   Nombre    "<<"Nivel     "<<"Correo     "<< "Teléfono     "<<"Id     "<<"Saldo     "<<endl;
                        for (int k = 0; k < u; k++) {
                            cout<<k<<"  ";
                            lista_usuarios[k]->mostrar();
                        } 
                    }
                    
//                  Opción 2 del panel: "Administrador" (agregar usuario)
                    else if (opcion_admin == 2) {
                        string nombre, nivel, correo;
                        int saldo;
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
                        
                        lista_usuarios[u] = new Usuario;
                        lista_usuarios[u]->setDatos(nombre, nivel, correo, telefono, id, saldo);
                        u += 1;
                        id += 1;
                    }
                    
//                  Opción 3 del panel: "Administrador" (eliminar usuario)
                    else if (opcion_admin == 3) {
                        cout<<"   Nombre    "<<"Nivel     "<<"Correo     "<< "Teléfono     "<<"Id     "<<"Saldo     "<<endl;
                        for (int k = 0; k < u; k++) {
                            cout<<k<<"  ";
                            lista_usuarios[k]->mostrar();
                        }
                        cout<<"\n";
                        cout<<"¿Cuál usuario quiere eliminar?: ";
                        int usuario_a_eliminar;
                        cin>>usuario_a_eliminar;
                        for (int j = usuario_a_eliminar; j <= u; j++) {
                            lista_usuarios[j] = lista_usuarios[j + 1];
                        }
                        u -= 1;
                        cout<<"Listo! Usuario eliminado exitosamente."<<endl;
                    }
                    
//                  Opción 4 del panel: "Administrador" (ver los productos disponibles)
                    else if (opcion_admin == 4) {
                        cout<<"* * * * * LA CARTA * * * * *"<<endl;
                        cout<<"   Id      "<<"Nombre       "<<"Costo    "<<endl;
                        for (int j = 0; j < p; j++) {
                            cout<<j<<"  ";
                            lista_productos[j]->mostrarProducto();
                        }
                        cout<<"\n";
                    }
                    
//                  Opción 5 del panel: "Administrador" (agregar producto)
                    else if (opcion_admin == 5) {
                        string nombre;
                        int id, costo;
                        cout<<"Id: "; cin>>id;
                        cout<<"Nombre: "; cin>>nombre;
                        cout<<"Costo (sin $): "; cin>>costo;
                        cout<<"\n";
                        
                        lista_productos[p] = new Producto;
                        lista_productos[p]->setDatosProducto(id, nombre, costo);
                        p += 1;
                    }
                    
//                  Opción 6 del panel: "Administrador" (eliminar producto)
                    else if (opcion_admin == 6) {
                        cout<<"* * * * * LA CARTA * * * * *"<<endl;
                        cout<<"   Id     "<<"Nombre      "<<"Costo    "<<endl;
                        for (int j = 0; j < p; j++) {
                            cout<<j<<"  ";
                            lista_productos[j]->mostrarProducto();
                        }
                        cout<<"\n";
                        cout<<"\n";
                        cout<<"¿Cuál producto quiere eliminar?: ";
                        int producto_a_eliminar;
                        cin>>producto_a_eliminar;
                        for (int k=producto_a_eliminar; k < p; k++) {
                            lista_productos[k] = lista_productos[k + 1];
                        }
                        p -= 1;
                        cout<<"Listo! Producto eliminado exitosamente."<<endl;
                    }
                    
//                  Opción 7 del panel: "Administrador" (salir)
                    else if (opcion_admin == 7) {
                        cout<<"Has decidido salir.\nHasta pronto!"<<endl;
                    }
                    
//                  Opción erronea del panel: "Administrador" (error)
                    else {
                        cout<<"ERROR --- Opción no válida!"<<endl;
                    }
                }
            }
            
//          Error al ingresar el código de administrador
            else {
                cout<<"El código es incorrecto!"<<endl;
            }
            break;
            
//      OPCIÓN: ingresar como usuario
        case 2:
            int o = 1;
            string orden[] = {};
            
            cout<<"Hola! Cuéntanos un poco sobre ti, para poder crear tu perfil."<<endl;
            
            //Pedir los datos del usuario
            string nombre, correo;
            int saldo;
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
            lista_usuarios[u] = new Usuario;
            lista_usuarios[u]->setDatos(nombre, "Regular", correo, telefono, id, saldo);
            
            cout<<"Este es tu nuevo perfil! Esperamos que disfrutes de la aplicación!"<<endl;
            cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
            cout<<"Id de cliente: "<<lista_usuarios[u]->getId()<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Nivel: "<<lista_usuarios[u]->getNivel()<<endl;
            cout<<"Correo: "<<correo<<endl;
            cout<<"Teléfono: "<<telefono<<endl;
            cout<<"Saldo: "<<saldo<<endl;
            cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl<<endl;
             
            cout<<"Pasando al menú principal..."<<endl<<endl;
            
            id += 1;
            u += 1;
            
            int opcion_usuario = 0;
            
//          Menú del panel usuario
            while (opcion_usuario != 5) {
                cout<<"·············MENÚ·············"<<endl;
                cout<<"¿Qué desea hacer?"<<endl;
                cout<<"1) Ver mi perfil"<<endl;
                cout<<"2) Ver productos disponibles"<<endl;
                cout<<"3) Hacer un pedido"<<endl;
                cout<<"4) Ver los demás usuarios"<<endl;
                cout<<"5) Salir"<<endl;
                cout<<"\n";
                
                cin>>opcion_usuario;
                
//              Opción 1 del panel: "Usuario" (ver mi perfil)
                if (opcion_usuario == 1) {
                    cout<<"- - - - - - - - - - - - - - PERFIL - - - - - - - - - - - - - -"<<endl;
                    cout<<"Id de cliente: "<<lista_usuarios[u-1]->getId()<<endl;
                    cout<<"Nombre: "<<nombre<<endl;
                    cout<<"Nivel: "<<lista_usuarios[u-1]->getNivel()<<endl;
                    cout<<"Correo: "<<correo<<endl;
                    cout<<"Teléfono: "<<telefono<<endl;
                    cout<<"Saldo: "<<saldo<<endl;
                    cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl<<endl;
                }
                
//              Opción 2 del panel: "Usuario" (ver los productos disponibles)
                else if (opcion_usuario == 2) {
                    cout<<"* * * * * LA CARTA * * * * *"<<endl;
                    cout<<"   Id      "<<"Nombre       "<<"Costo    "<<endl;
                    for (int j = 0; j < p; j++) {
                        cout<<j<<"  ";
                        lista_productos[j]->mostrarProducto();
                    }
                    cout<<"\n";
                }
                
//              Opción 3 del panel: "Usuario" (hacer pedido)
                else if (opcion_usuario == 3) {
                    int a_pagar = 0;
                    string algo_mas;
                    
                    do {
                        cout<<"* * * * * LA CARTA * * * * *"<<endl;
                        cout<<"   Id      "<<"Nombre       "<<"Costo    "<<endl;
                        for (int j = 0; j < p; j++) {
                            cout<<j<<"  ";
                            lista_productos[j]->mostrarProducto();
                        }
                        cout<<"\n";
                        
                        int num_prod;
                        cout<<"Seleccione el producto que desea ordenar: ";
                        cin>>num_prod;
                        cout<<"\n";
                        
                        //Obtener los datos del producto
                        string nom_prod;
                        nom_prod = lista_productos[num_prod]->getNomProd();
                        int cost_prod;
                        cost_prod = lista_productos[num_prod]->getCostoProd();
                        
                        orden[o].assign(nom_prod);
                        
                        o += 1;
                        
                        a_pagar += cost_prod;
                          
                        cout<<"¿Desea agregar algo más a su orden? Si(s) / No(n) "<<endl;
                        cin>>algo_mas;
                        cout<<"\n";
                        
                    } while (algo_mas == "s");
                    cout<<"· · · · · SU CUENTA · · · · ·"<<endl;
                    for (int j = 1; j < o; j++) {
                        cout<<j<<"  "<<orden[j]<<endl;;
                        orden[j] = orden[o];
                    }
                    cout<<"\n";
                    cout<<"Cantidad total a pagar: $"<<a_pagar<<endl;
                    cout<<"\n";
                    
                    o = 1;
                }
                
//              Opción 4 del panel: "Usuario" (ver los demás usuarios)
                else if (opcion_usuario == 4) {
                    cout<<"   Nombre    "<<"Nivel     "<<"Correo     "<< "Teléfono     "<<"Id     "<<"Saldo     "<<endl;
                    for (int k = 0; k < u; k++) {
                        cout<<k<<"  ";
                        lista_usuarios[k]->mostrar();
                    }
                }
                
//              Opción 5 del panel: "Usuario" (salir)
                else if (opcion_usuario == 5) {
                    cout<<"Has decidido salir.\nHasta pronto!"<<endl;
                }
                
//              Opción erronea del panel: "Usuario" (error)
                else {
                    cout<<"ERROR --- Opción no válida!"<<endl;
                }
            }
            break;
    }
    return 0;
}


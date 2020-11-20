/*
 * Proyecto FoodToGo - POO
 * Karen Cebreros López
 * A01704254
 * 10/11/2020
 *
 * Persona.hpp
 * FoodToGo-POO
 * Created by Karen CL on 10/11/20.
 * Copyright © 2020 KarenCbrs. All rights reserved.
 */

/*
 * Clase Persona.
 * Contiene los métodos y atributos genéricos de los objetos
 * "Persona" y tiene 2 clases hijas:
 * Administrador y Usuario
 */

#ifndef Persona_hpp
#define Persona_hpp

#include <iostream>
using namespace std;

//Declaración de la clase Persona
class Persona{
    private:
        //Atributos
        string nombre;
        string nivel;
        string correo;
        long telefono;
    public:
        //Constructor por default
        Persona(): nombre(""), nivel(""), correo(""), telefono(0){};
        
        //Métodos
        virtual void set_datos(string, string, string, long);
        virtual string get_nivel();
        void mostrar();
};

//Función setter de los datos de la persona
void Persona::set_datos(string _nombre, string _nivel, string _correo, long _telefono){
    nombre = _nombre;
    nivel = _nivel;
    correo = _correo;
    telefono = _telefono;
}

//Función para mostrar a la persona
void Persona::mostrar(){
    cout<<nombre<<"      "<<nivel<<"    "<<correo<<"          "<<telefono<<"    ";
}

//Función getter del nivel de la persona (Regular/ Plus/ VIP)
string Persona::get_nivel(){
    return nivel;
}


//Declaración de la clase Administrador que hereda de la clase Persona
class Administrador : public Persona{
    private:
        //Atributos
        int contrasena;
    public:
        //Constructor por default
        Administrador(): contrasena(0), Persona(){};
    
        //Métodos
        void set_datos(string, string, string, long, int);
        int get_contrasena();
};

//Función setter de los datos del administrador
void Administrador::set_datos(string _nombre, string _nivel, string _correo, long _telefono, int _contrasena){
    Persona::set_datos(_nombre, _nivel, _correo, _telefono);
    contrasena = _contrasena;
}

//Función getter de la contraseña del administrador
int Administrador::get_contrasena(){
    return contrasena;
}


//Declaración de la clase Usuario que hereda de Persona
class Usuario : public Persona{
    private:
        //Atributos
        int id;
        int saldo;
    public:
        //Constructor por default
        Usuario(): id(0), saldo(0), Persona(){};
    
        //Métodos
        void set_datos(string, string, string, long, int, int);
        int get_id();
        int get_saldo();
        string get_nivel(Usuario lista_usuarios[], int index);
        void mostrar_lista_usuarios(Usuario lista_usuarios[], int index);
        void mostrar_perfil_usuario(string nomb, string corr, long tel, int saldo, Usuario lista_usuarios[], int index);
};

//Función setter de los datos del usuario
void Usuario::set_datos(string _nombre, string _nivel, string _correo, long _telefono, int _id, int _saldo){
    Persona::set_datos(_nombre, _nivel, _correo, _telefono);
    id = _id;
    saldo = _saldo;
}

//Función getter del id del usuario
int Usuario::get_id(){
    return id;
}

//Función getter del saldo del usuario
int Usuario::get_saldo(){
    return saldo;
}

//Función getter del nivel del usuario (que se obtiene en la clase Persona)
string Usuario::get_nivel(Usuario lista_usuarios[], int index){
    return lista_usuarios[index].Persona::get_nivel();
}

/*
 * Función para mostrar la lista de los usuarios.
 *
 * Recibe como parámetros una lista de objetos de la clase Usuario
 * y el tamaño de la lista que se usará como index para recorrerla
 * y mostrar cada objeto en ella.
 */
void Usuario::mostrar_lista_usuarios(Usuario lista_usuarios[], int index){
    cout<<"   Nombre       "<<"Nivel      "<<"Correo          "<< "Teléfono          "<<"Id     "<<"Saldo"<<endl;
    for (int k=0; k < index; k++) {
        cout<<k<<"  ";
        lista_usuarios[k].Persona::mostrar();
        cout<<lista_usuarios[k].get_id()<<"     $"<<lista_usuarios[k].get_saldo()<<endl;
    }
    cout<<"\n";
}

void Usuario::mostrar_perfil_usuario(string nomb, string corr, long tel, int saldo, Usuario *lista_usuarios, int index){
    cout<<"- - - - - - - - - - - - - - PERFIL - - - - - - - - - - - - - -"<<endl;
    cout<<"Id de cliente: "<<lista_usuarios[index].get_id()<<endl;
    cout<<"Nombre: "<<nomb<<endl;
    cout<<"Nivel: "<<lista_usuarios[index].get_nivel(lista_usuarios, index)<<endl;
    cout<<"Correo: "<<corr<<endl;
    cout<<"Teléfono: "<<tel<<endl;
    cout<<"Saldo: "<<saldo<<endl;
    cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl<<endl;
}

#endif /* Persona_hpp */

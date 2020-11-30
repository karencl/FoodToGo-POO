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
        virtual void set_datos(string nomb, string niv, string corr, long tel);
        virtual string get_nivel();
        void mostrar();
};


/*
 * Setter -> datos
 *
 * Parámetros: nombre, nivel, correo, teléfono
 * No retorna nada
 *
 */
void Persona::set_datos(string _nombre, string _nivel, string _correo,
                        long _telefono){
    nombre = _nombre;
    nivel = _nivel;
    correo = _correo;
    telefono = _telefono;
}


/*
 * Función -> muestra persona
 *
 * No recibe parámetros
 * No retorna nada
 *
 */
void Persona::mostrar(){
    cout<<nombre<<"      "<<nivel<<"      "<<correo<<"         "<<telefono<<"    ";
}


/*
 * Getter -> nivel
 *
 * No recibe parámetros
 * Retorna: nivel de tipo string
 *
 */
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
        void set_datos(string nomb, string niv, string corr, long tel, int cont);
        int get_contrasena();
};


/*
 * Setter -> datos administrador
 *
 * Parámetros: nombre, nivel, correo, teléfono, contraseña
 * No retorna nada
 *
 */
void Administrador::set_datos(string _nombre, string _nivel, string _correo,
                              long _telefono, int _contrasena){
    Persona::set_datos(_nombre, _nivel, _correo, _telefono);
    contrasena = _contrasena;
}


/*
 * Getter -> contraseña
 *
 * No recibe parámetros
 * Retorna: contraseña de tipo int
 *
 */
int Administrador::get_contrasena(){
    return contrasena;
}



//Declaración de la clase Usuario que hereda de Persona
class Usuario : public Persona{
    private:
        //Atributos
        int id;
        float saldo;
    public:
        //Constructor por default
        Usuario(): id(0), saldo(0.0), Persona(){};
    
        //Métodos
        void set_datos(string nomb, string niv, string corr, long tel, int id,
                       float sal);
        float set_saldo(Usuario &usuario, float nuevo_saldo);
        int get_id();
        float get_saldo();
        string get_nivel(Usuario usuario);
        float compra(Usuario &usuario, float pagar);
        void mostrar_lista_usuarios(Usuario lista_usuarios[], int index);
        void mostrar_perfil_usuario(string nomb, string corr,
                                    long tel, Usuario usuario);
};


/*
 * Setter -> datos usuario
 *
 * Parámetros: nombre, nivel, correo, teléfono, id, saldo
 * No retorna nada
 *
 */
void Usuario::set_datos(string _nombre, string _nivel, string _correo, long _telefono,
                        int _id, float _saldo){
    Persona::set_datos(_nombre, _nivel, _correo, _telefono);
    id = _id;
    saldo = _saldo;
}


/*
 * Setter -> saldo actualizado
 *
 * Parámetros: un objeto de la clase Usuario, nuevo_saldo
 * Retorna: saldo de tipo float
 *
 */
float Usuario::set_saldo(Usuario &usuario, float nuevo_saldo){
    saldo = usuario.get_saldo() + nuevo_saldo;
    return saldo;
}


/*
 * Getter -> id
 *
 * No recibe parámetros
 * Retorna: id de tipo int
 *
 */
int Usuario::get_id(){
    return id;
}


/*
 * Getter -> saldo
 *
 * No tiene parámetros
 * Retorna: saldo de tipo float
 *
 */
float Usuario::get_saldo(){
    return saldo;
}


/*
 * Getter -> nivel (se obtiene en la clase Persona)
 *
 * Parámetros: un objeto de la clase Usuario
 * Retorna: nivel de tipo string
 *
 */
string Usuario::get_nivel(Usuario usuario){
    return usuario.Persona::get_nivel();
}


/*
 * Función -> hace compra y actualiza saldo
 *
 * Parámetros: un objeto de la clase Usuario, la cantidad a pagar
 * Retorna: saldo actual de tipo float
 *
 */
float Usuario::compra(Usuario &usuario, float pagar){
    saldo = usuario.get_saldo() - pagar;
    return saldo;
}


/*
 * Función -> mostrar la lista de los usuarios.
 *
 * Parámetros: lista de objetos de la clase Usuario, el tamaño de la lista
 * No retorna nada
 *
 */
void Usuario::mostrar_lista_usuarios(Usuario lista_usuarios[], int index){
    cout<<"   Nombre       "<<"Nivel        "<<"Correo            "<< "Teléfono       \
    "<<"Id      "<<"Saldo"<<endl;
    for (int k=0; k < index; k++) {
        cout<<k<<"  ";
        lista_usuarios[k].Persona::mostrar();
        cout<<lista_usuarios[k].get_id()<<"     $"<<lista_usuarios[k].get_saldo()<<endl;
    }
    cout<<"\n";
}


/*
 * Función -> imprime perfil del usuario.
 *
 * Parámetros: nombre, correo, telefono, saldo, un objeto de la clase Usuario
 * No retorna nada
 *
 */
void Usuario::mostrar_perfil_usuario(string nomb, string corr, long tel,
                                     Usuario usuario){
    cout<<"- - - - - - - - - - - - - - PERFIL - - - - - - - - - - - - - -"<<endl;
    cout<<"Id de cliente: "<<usuario.get_id()<<endl;
    cout<<"Nombre: "<<nomb<<endl;
    cout<<"Nivel: "<<usuario.get_nivel(usuario)<<endl;
    cout<<"Correo: "<<corr<<endl;
    cout<<"Teléfono: "<<tel<<endl;
    cout<<"Saldo: "<<usuario.get_saldo()<<endl;
    cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl<<endl;
}

#endif /* Persona_hpp */
